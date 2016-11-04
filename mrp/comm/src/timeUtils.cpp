//********************************************************************************************************
//
// � 2016 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*********************************************************************************************************
#include <iostream>
#include <cstdio>

#include <sys/timeb.h>

#include "timeUtils.h"

void timeUtils::getFullTimeStamp(fullTimeStamp_t& fullTimeStamp)
{ 
  struct timeb timeptr_raw;
  ftime ( &timeptr_raw );   
  fullTimeStamp.tms = static_cast<long long>(timeptr_raw.time) * 1000LL + static_cast<long long>(timeptr_raw.millitm);
  timeUtils::timeStampFrom_time_t(timeptr_raw.time,fullTimeStamp.utcDateTimeStamp,false);
  timeUtils::timeStampFrom_time_t(timeptr_raw.time,fullTimeStamp.localDateTimeStamp,true);
  fullTimeStamp.utcDateTimeStamp.timeStamp.millisec = timeptr_raw.millitm;
  fullTimeStamp.localDateTimeStamp.timeStamp.millisec = timeptr_raw.millitm;  
  fullTimeStamp.tms_minute = static_cast<long long>(timeptr_raw.time - fullTimeStamp.utcDateTimeStamp.timeStamp.sec) * 1000LL;
  fullTimeStamp.ms_since_midnight = timeUtils::getMsSinceMidnight(fullTimeStamp.utcDateTimeStamp.timeStamp);
  fullTimeStamp.tms_midnight = fullTimeStamp.tms - static_cast<long long>(fullTimeStamp.ms_since_midnight);
  fullTimeStamp.ms_since_midnight_local = timeUtils::getMsSinceMidnight(fullTimeStamp.localDateTimeStamp.timeStamp);
  fullTimeStamp.tms_midnight_local = fullTimeStamp.tms - static_cast<long long>(fullTimeStamp.ms_since_midnight_local);
} 

void timeUtils::timeStampFrom_time_t(const time_t rawTime,dateTimeStamp_t& convectedTime,const bool isLocal)
{
  struct tm lcl;
  if (isLocal)
    localtime_r(&rawTime,&lcl);
  else
    gmtime_r(&rawTime,&lcl);
  convectedTime.dateStamp.year = lcl.tm_year + 1900;
  convectedTime.dateStamp.month = lcl.tm_mon + 1;
  convectedTime.dateStamp.day = lcl.tm_mday;
  convectedTime.timeStamp.hour = lcl.tm_hour;
  convectedTime.timeStamp.min = lcl.tm_min;
  convectedTime.timeStamp.sec = lcl.tm_sec;
}

void timeUtils::timeStampFrom_ms(const long long ms,dateTimeStamp_t& convectedTime,const bool isLocal)
{
  struct tm lcl;
  time_t tsec = (time_t)(ms / 1000);
  unsigned short millisec = (unsigned short)(ms - tsec * 1000);
  if (isLocal)
    localtime_r(&tsec,&lcl);
  else
    gmtime_r(&tsec,&lcl);
  convectedTime.dateStamp.year = lcl.tm_year + 1900;
  convectedTime.dateStamp.month = lcl.tm_mon + 1;
  convectedTime.dateStamp.day = lcl.tm_mday;
  convectedTime.timeStamp.hour = lcl.tm_hour;
  convectedTime.timeStamp.min = lcl.tm_min;
  convectedTime.timeStamp.sec = lcl.tm_sec;
  convectedTime.timeStamp.millisec = millisec;
}
  
std::string timeUtils::getTimestampStr(const unsigned int ms_since_midnight)
{
  unsigned int ms = ms_since_midnight;
  unsigned int hour = (ms / (3600 * 1000));
  ms -= hour * 3600 * 1000;
  unsigned int min = (ms / (60 * 1000));
  ms -= min * 60 * 1000;
  unsigned int sec = (ms / 1000);
  ms -= sec * 1000;
  unsigned int millisec = ms;
  char tmpchar[20];
  sprintf(tmpchar,"%02u-%02u-%02u.%03u",hour,min,sec,millisec);
  return std::string(tmpchar);
}

std::string timeUtils::getTimestampStr(const timeUtils::dateTimeStamp_t& ts)
{
  char tmpchar[50];
  sprintf(tmpchar,"%04d-%02d-%02dT%02d-%02d-%02d.%03u",
    ts.dateStamp.year,ts.dateStamp.month,ts.dateStamp.day,
    ts.timeStamp.hour,ts.timeStamp.min,ts.timeStamp.sec,
    ts.timeStamp.millisec);
  return std::string(tmpchar);
}

unsigned int timeUtils::getMsSinceMidnight(const timeUtils::timeStamp_t& ts)
{
  return ((static_cast<unsigned int>(ts.hour) * 3600 + static_cast<unsigned int>(ts.min) * 60 
    + static_cast<unsigned int>(ts.sec)) * 1000 + static_cast<unsigned int>(ts.millisec));
}

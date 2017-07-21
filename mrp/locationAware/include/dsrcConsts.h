//********************************************************************************************************
//
// � 2016 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*********************************************************************************************************
#ifndef _DSRC_CONSTS_H
#define _DSRC_CONSTS_H

#include <cmath>

namespace DsrcConstants
{
	static const double   ellipsoid_r = 6371008.7714;       //earth�s mean radius in meter
	static const double   ellipsoid_a = 6378137.0;          //Semi-major axis, in meters (WGS84)
	static const double   ellipsoid_e = 0.0818191908426215; //First eccentricity (WGS84)
	static const double   rad2degree  = 57.2957795;
	static const double   deca   = 10.0;
	static const double   hecto  = 100.0;
	static const double   damega = 10000000.0;
	static const double   mph2mps = 0.44704;

	static inline double deg2rad(const double& d)
		{return(d / rad2degree);};
	static inline double rad2deg(const double& d)
		{return(d * rad2degree);};
	template<class T>
	static inline double damega2unit(const T& d)
		{return(static_cast<double>(d) / damega);};
	template<class T>
	static inline T unit2damega(const double& d)
		{return(static_cast<T>(std::round(d * damega)));};
	template<class T>
	static inline double hecto2unit(const T& d)
		{return(static_cast<double>(d) / hecto);};
	template<class T>
	static inline T unit2hecto(const double& d)
		{return(static_cast<T>(std::round(d * hecto)));};
	template<class T>
	static inline double deca2unit(const T& d)
		{return(static_cast<double>(d) / deca);}
	template<class T>
	static inline T unit2deca(const double& d)
		{return(static_cast<T>(std::round(d * deca)));}
};

#endif

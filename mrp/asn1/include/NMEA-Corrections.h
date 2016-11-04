//********************************************************************************************************
//
// � 2016 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*********************************************************************************************************
/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_NMEA_Corrections_H_
#define	_NMEA_Corrections_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID.h"
#include "NMEA-Revision.h"
#include "NMEA-MsgType.h"
#include <NativeInteger.h>
#include "NMEA-Payload.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NMEA-Corrections */
typedef struct NMEA_Corrections {
	DSRCmsgID_t	 msgID;
	NMEA_Revision_t	 rev;
	NMEA_MsgType_t	 msg;
	long	 wdCount;
	NMEA_Payload_t	 payload;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NMEA_Corrections_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NMEA_Corrections;

#ifdef __cplusplus
}
#endif

#endif	/* _NMEA_Corrections_H_ */

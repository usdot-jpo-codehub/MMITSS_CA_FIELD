//********************************************************************************************************
//
// © 2016 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*********************************************************************************************************
/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../j2735_asn/J2735_201601_ASN_mmitss.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RTCMmessageList_H_
#define	_RTCMmessageList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RTCMmessage.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RTCMmessageList */
typedef struct RTCMmessageList {
	A_SEQUENCE_OF(RTCMmessage_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTCMmessageList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTCMmessageList;

#ifdef __cplusplus
}
#endif

#endif	/* _RTCMmessageList_H_ */
#include <asn_internal.h>

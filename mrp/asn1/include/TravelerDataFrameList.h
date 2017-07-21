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

#ifndef	_TravelerDataFrameList_H_
#define	_TravelerDataFrameList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TravelerDataFrame;

/* TravelerDataFrameList */
typedef struct TravelerDataFrameList {
	A_SEQUENCE_OF(struct TravelerDataFrame) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TravelerDataFrameList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TravelerDataFrameList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TravelerDataFrame.h"

#endif	/* _TravelerDataFrameList_H_ */
#include <asn_internal.h>

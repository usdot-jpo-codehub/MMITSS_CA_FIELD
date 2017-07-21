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

#ifndef	_SnapshotDistance_H_
#define	_SnapshotDistance_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GrossDistance.h"
#include "GrossSpeed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SnapshotDistance */
typedef struct SnapshotDistance {
	GrossDistance_t	 distance1;
	GrossSpeed_t	 speed1;
	GrossDistance_t	 distance2;
	GrossSpeed_t	 speed2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SnapshotDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SnapshotDistance;

#ifdef __cplusplus
}
#endif

#endif	/* _SnapshotDistance_H_ */
#include <asn_internal.h>

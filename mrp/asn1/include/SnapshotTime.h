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

#ifndef	_SnapshotTime_H_
#define	_SnapshotTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GrossSpeed.h"
#include "SecondOfTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SnapshotTime */
typedef struct SnapshotTime {
	GrossSpeed_t	 speed1;
	SecondOfTime_t	 time1;
	GrossSpeed_t	 speed2;
	SecondOfTime_t	 time2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SnapshotTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SnapshotTime;

#ifdef __cplusplus
}
#endif

#endif	/* _SnapshotTime_H_ */
#include <asn_internal.h>

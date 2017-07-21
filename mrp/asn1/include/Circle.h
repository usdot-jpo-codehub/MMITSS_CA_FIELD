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

#ifndef	_Circle_H_
#define	_Circle_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Position3D.h"
#include "Radius-B12.h"
#include "DistanceUnits.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Circle */
typedef struct Circle {
	Position3D_t	 center;
	Radius_B12_t	 radius;
	DistanceUnits_t	 units;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Circle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Circle;

#ifdef __cplusplus
}
#endif

#endif	/* _Circle_H_ */
#include <asn_internal.h>

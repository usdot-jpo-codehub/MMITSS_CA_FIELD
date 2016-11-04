//********************************************************************************************************
//
// � 2016 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*********************************************************************************************************
/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ITIScodesAndText_H_
#define	_ITIScodesAndText_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ITIScodesAndTextChoice;

/* ITIScodesAndText */
typedef struct ITIScodesAndText {
	A_SEQUENCE_OF(struct ITIScodesAndTextChoice) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ITIScodesAndText_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ITIScodesAndText;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ITIScodesAndTextChoice.h"

#endif	/* _ITIScodesAndText_H_ */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SignalRequest_H_
#define	_SignalRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntersectionID.h"
#include "SignalReqScheme.h"
#include "LaneNumber.h"
#include "NTCIPVehicleclass.h"
#include "CodeWord.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SignalRequest */
typedef struct SignalRequest {
	IntersectionID_t	 id;
	SignalReqScheme_t	*isCancel	/* OPTIONAL */;
	SignalReqScheme_t	*requestedAction	/* OPTIONAL */;
	LaneNumber_t	*inLane	/* OPTIONAL */;
	LaneNumber_t	*outLane	/* OPTIONAL */;
	NTCIPVehicleclass_t	 type;
	CodeWord_t	*codeWord	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _SignalRequest_H_ */

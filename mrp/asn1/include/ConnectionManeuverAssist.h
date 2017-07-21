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

#ifndef	_ConnectionManeuverAssist_H_
#define	_ConnectionManeuverAssist_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneConnectionID.h"
#include "ZoneLength.h"
#include "WaitOnStopline.h"
#include "PedestrianBicycleDetect.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegionalExtension;

/* ConnectionManeuverAssist */
typedef struct ConnectionManeuverAssist {
	LaneConnectionID_t	 connectionID;
	ZoneLength_t	*queueLength	/* OPTIONAL */;
	ZoneLength_t	*availableStorageLength	/* OPTIONAL */;
	WaitOnStopline_t	*waitOnStop	/* OPTIONAL */;
	PedestrianBicycleDetect_t	*pedBicycleDetect	/* OPTIONAL */;
	struct ConnectionManeuverAssist__regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnectionManeuverAssist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _ConnectionManeuverAssist_H_ */
#include <asn_internal.h>

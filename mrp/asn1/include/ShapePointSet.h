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

#ifndef	_ShapePointSet_H_
#define	_ShapePointSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneWidth.h"
#include "DirectionOfUse.h"
#include "NodeList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position3D;

/* ShapePointSet */
typedef struct ShapePointSet {
	struct Position3D	*anchor	/* OPTIONAL */;
	LaneWidth_t	*laneWidth	/* OPTIONAL */;
	DirectionOfUse_t	*directionality	/* OPTIONAL */;
	NodeList_t	 nodeList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ShapePointSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ShapePointSet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position3D.h"

#endif	/* _ShapePointSet_H_ */

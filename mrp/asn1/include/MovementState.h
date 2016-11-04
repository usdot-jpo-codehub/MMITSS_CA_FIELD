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

#ifndef	_MovementState_H_
#define	_MovementState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DescriptiveName.h"
#include "LaneCount.h"
#include "LaneSet.h"
#include "SignalLightState.h"
#include "PedestrianSignalState.h"
#include "SpecialSignalState.h"
#include "TimeMark.h"
#include "StateConfidence.h"
#include "ObjectCount.h"
#include "PedestrianDetect.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MovementState */
typedef struct MovementState {
	DescriptiveName_t	*movementName	/* OPTIONAL */;
	LaneCount_t	*laneCnt	/* OPTIONAL */;
	LaneSet_t	 laneSet;
	SignalLightState_t	*currState	/* OPTIONAL */;
	PedestrianSignalState_t	*pedState	/* OPTIONAL */;
	SpecialSignalState_t	*specialState	/* OPTIONAL */;
	TimeMark_t	 timeToChange;
	StateConfidence_t	*stateConfidence	/* OPTIONAL */;
	SignalLightState_t	*yellState	/* OPTIONAL */;
	PedestrianSignalState_t	*yellPedState	/* OPTIONAL */;
	TimeMark_t	*yellTimeToChange	/* OPTIONAL */;
	StateConfidence_t	*yellStateConfidence	/* OPTIONAL */;
	ObjectCount_t	*vehicleCount	/* OPTIONAL */;
	PedestrianDetect_t	*pedDetect	/* OPTIONAL */;
	ObjectCount_t	*pedCount	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MovementState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MovementState;

#ifdef __cplusplus
}
#endif

#endif	/* _MovementState_H_ */

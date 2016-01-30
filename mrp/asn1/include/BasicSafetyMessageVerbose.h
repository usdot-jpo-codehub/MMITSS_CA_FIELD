/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_BasicSafetyMessageVerbose_H_
#define	_BasicSafetyMessageVerbose_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID.h"
#include "MsgCount.h"
#include "TemporaryID.h"
#include "DSecond.h"
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include "PositionalAccuracy.h"
#include "TransmissionAndSpeed.h"
#include "Heading.h"
#include "SteeringWheelAngle.h"
#include "AccelerationSet4Way.h"
#include "BrakeSystemStatus.h"
#include "VehicleSize.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleSafetyExtension;
struct VehicleStatus;

/* BasicSafetyMessageVerbose */
typedef struct BasicSafetyMessageVerbose {
	DSRCmsgID_t	 msgID;
	MsgCount_t	 msgCnt;
	TemporaryID_t	 id;
	DSecond_t	 secMark;
	Latitude_t	 lat;
	Longitude_t	 Long;
	Elevation_t	 elev;
	PositionalAccuracy_t	 accuracy;
	TransmissionAndSpeed_t	 speed;
	Heading_t	 heading;
	SteeringWheelAngle_t	 angle;
	AccelerationSet4Way_t	 accelSet;
	BrakeSystemStatus_t	 brakes;
	VehicleSize_t	 size;
	struct VehicleSafetyExtension	*safetyExt	/* OPTIONAL */;
	struct VehicleStatus	*status	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicSafetyMessageVerbose_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicSafetyMessageVerbose;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleSafetyExtension.h"
#include "VehicleStatus.h"

#endif	/* _BasicSafetyMessageVerbose_H_ */

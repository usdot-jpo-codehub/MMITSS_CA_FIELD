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

#ifndef	_VehicleStatus_H_
#define	_VehicleStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ExteriorLights.h"
#include "LightbarInUse.h"
#include "BrakeSystemStatus.h"
#include "BrakeAppliedPressure.h"
#include "CoefficientOfFriction.h"
#include "SunSensor.h"
#include "RainSensor.h"
#include "AmbientAirTemperature.h"
#include "AmbientAirPressure.h"
#include "ThrottlePosition.h"
#include "SpeedandHeadingandThrottleConfidence.h"
#include "SpeedConfidence.h"
#include "GPSstatus.h"
#include "WiperStatusFront.h"
#include "WiperRate.h"
#include "WiperStatusRear.h"
#include <constr_SEQUENCE.h>
#include "SteeringWheelAngle.h"
#include "SteeringWheelAngleConfidence.h"
#include "SteeringWheelAngleRateOfChange.h"
#include "DrivingWheelAngle.h"
#include "AccelerationSet4Way.h"
#include "VerticalAccelerationThreshold.h"
#include "YawRateConfidence.h"
#include "AccelerationConfidence.h"
#include "ObstacleDistance.h"
#include "ObstacleDirection.h"
#include "DDateTime.h"
#include "VehicleHeight.h"
#include "BumperHeights.h"
#include "VehicleMass.h"
#include "TrailerWeight.h"
#include "VehicleType.h"
#include "EssPrecipYesNo.h"
#include "EssPrecipRate.h"
#include "EssPrecipSituation.h"
#include "EssSolarRadiation.h"
#include "EssMobileFriction.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;
struct VehicleIdent;
struct J1939data;
struct ConfidenceSet;

/* VehicleStatus */
typedef struct VehicleStatus {
	ExteriorLights_t	*lights	/* OPTIONAL */;
	LightbarInUse_t	*lightBar	/* OPTIONAL */;
	struct VehicleStatus__wipers {
		WiperStatusFront_t	 statusFront;
		WiperRate_t	 rateFront;
		WiperStatusRear_t	*statusRear	/* OPTIONAL */;
		WiperRate_t	*rateRear	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *wipers;
	BrakeSystemStatus_t	*brakeStatus	/* OPTIONAL */;
	BrakeAppliedPressure_t	*brakePressure	/* OPTIONAL */;
	CoefficientOfFriction_t	*roadFriction	/* OPTIONAL */;
	SunSensor_t	*sunData	/* OPTIONAL */;
	RainSensor_t	*rainData	/* OPTIONAL */;
	AmbientAirTemperature_t	*airTemp	/* OPTIONAL */;
	AmbientAirPressure_t	*airPres	/* OPTIONAL */;
	struct VehicleStatus__steering {
		SteeringWheelAngle_t	 angle;
		SteeringWheelAngleConfidence_t	*confidence	/* OPTIONAL */;
		SteeringWheelAngleRateOfChange_t	*rate	/* OPTIONAL */;
		DrivingWheelAngle_t	*wheels	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *steering;
	struct VehicleStatus__accelSets {
		AccelerationSet4Way_t	*accel4way	/* OPTIONAL */;
		VerticalAccelerationThreshold_t	*vertAccelThres	/* OPTIONAL */;
		YawRateConfidence_t	*yawRateCon	/* OPTIONAL */;
		AccelerationConfidence_t	*hozAccelCon	/* OPTIONAL */;
		struct ConfidenceSet	*confidenceSet	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *accelSets;
	struct VehicleStatus__object {
		ObstacleDistance_t	 obDist;
		ObstacleDirection_t	 obDirect;
		DDateTime_t	 dateTime;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *object;
	struct FullPositionVector	*fullPos	/* OPTIONAL */;
	ThrottlePosition_t	*throttlePos	/* OPTIONAL */;
	SpeedandHeadingandThrottleConfidence_t	*speedHeadC	/* OPTIONAL */;
	SpeedConfidence_t	*speedC	/* OPTIONAL */;
	struct VehicleStatus__vehicleData {
		VehicleHeight_t	 height;
		BumperHeights_t	 bumpers;
		VehicleMass_t	 mass;
		TrailerWeight_t	 trailerWeight;
		VehicleType_t	 type;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *vehicleData;
	struct VehicleIdent	*vehicleIdent	/* OPTIONAL */;
	struct J1939data	*j1939data	/* OPTIONAL */;
	struct VehicleStatus__weatherReport {
		EssPrecipYesNo_t	 isRaining;
		EssPrecipRate_t	*rainRate	/* OPTIONAL */;
		EssPrecipSituation_t	*precipSituation	/* OPTIONAL */;
		EssSolarRadiation_t	*solarRadiation	/* OPTIONAL */;
		EssMobileFriction_t	*friction	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *weatherReport;
	GPSstatus_t	*gpsStatus	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleStatus;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVector.h"
#include "VehicleIdent.h"
#include "J1939data.h"
#include "ConfidenceSet.h"

#endif	/* _VehicleStatus_H_ */

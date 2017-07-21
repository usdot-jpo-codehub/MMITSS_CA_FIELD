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

#ifndef	_EmergencyVehicleAlert_H_
#define	_EmergencyVehicleAlert_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "TemporaryID.h"
#include "RoadSideAlert.h"
#include "ResponseType.h"
#include "VehicleMass.h"
#include "VehicleType.h"
#include "VehicleGroupAffected.h"
#include "IncidentResponseEquipment.h"
#include "ResponderGroupAffected.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EmergencyDetails;
struct RegionalExtension;

/* EmergencyVehicleAlert */
typedef struct EmergencyVehicleAlert {
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	TemporaryID_t	*id	/* OPTIONAL */;
	RoadSideAlert_t	 rsaMsg;
	ResponseType_t	*responseType	/* OPTIONAL */;
	struct EmergencyDetails	*details	/* OPTIONAL */;
	VehicleMass_t	*mass	/* OPTIONAL */;
	VehicleType_t	*basicType	/* OPTIONAL */;
	VehicleGroupAffected_t	*vehicleType	/* OPTIONAL */;
	IncidentResponseEquipment_t	*responseEquip	/* OPTIONAL */;
	ResponderGroupAffected_t	*responderType	/* OPTIONAL */;
	struct EmergencyVehicleAlert__regional {
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
} EmergencyVehicleAlert_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyVehicleAlert;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EmergencyDetails.h"
#include "RegionalExtension.h"

#endif	/* _EmergencyVehicleAlert_H_ */
#include <asn_internal.h>

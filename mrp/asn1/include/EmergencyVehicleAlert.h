/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_EmergencyVehicleAlert_H_
#define	_EmergencyVehicleAlert_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID.h"
#include "TemporaryID.h"
#include "RoadSideAlert.h"
#include "ResponseType.h"
#include "EmergencyDetails.h"
#include "VehicleMass.h"
#include "VehicleType.h"
#include "VehicleGroupAffected.h"
#include "IncidentResponseEquipment.h"
#include "ResponderGroupAffected.h"
#include "MsgCRC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EmergencyVehicleAlert */
typedef struct EmergencyVehicleAlert {
	DSRCmsgID_t	 msgID;
	TemporaryID_t	*id	/* OPTIONAL */;
	RoadSideAlert_t	 rsaMsg;
	ResponseType_t	*responseType	/* OPTIONAL */;
	EmergencyDetails_t	*details	/* OPTIONAL */;
	VehicleMass_t	*mass	/* OPTIONAL */;
	VehicleType_t	*basicType	/* OPTIONAL */;
	VehicleGroupAffected_t	*vehicleType	/* OPTIONAL */;
	IncidentResponseEquipment_t	*responseEquip	/* OPTIONAL */;
	ResponderGroupAffected_t	*responderType	/* OPTIONAL */;
	MsgCRC_t	 crc;
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

#endif	/* _EmergencyVehicleAlert_H_ */

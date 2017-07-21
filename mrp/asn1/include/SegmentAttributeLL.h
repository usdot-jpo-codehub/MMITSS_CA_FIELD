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

#ifndef	_SegmentAttributeLL_H_
#define	_SegmentAttributeLL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SegmentAttributeLL {
	SegmentAttributeLL_reserved	= 0,
	SegmentAttributeLL_doNotBlock	= 1,
	SegmentAttributeLL_whiteLine	= 2,
	SegmentAttributeLL_mergingLaneLeft	= 3,
	SegmentAttributeLL_mergingLaneRight	= 4,
	SegmentAttributeLL_curbOnLeft	= 5,
	SegmentAttributeLL_curbOnRight	= 6,
	SegmentAttributeLL_loadingzoneOnLeft	= 7,
	SegmentAttributeLL_loadingzoneOnRight	= 8,
	SegmentAttributeLL_turnOutPointOnLeft	= 9,
	SegmentAttributeLL_turnOutPointOnRight	= 10,
	SegmentAttributeLL_adjacentParkingOnLeft	= 11,
	SegmentAttributeLL_adjacentParkingOnRight	= 12,
	SegmentAttributeLL_adjacentBikeLaneOnLeft	= 13,
	SegmentAttributeLL_adjacentBikeLaneOnRight	= 14,
	SegmentAttributeLL_sharedBikeLane	= 15,
	SegmentAttributeLL_bikeBoxInFront	= 16,
	SegmentAttributeLL_transitStopOnLeft	= 17,
	SegmentAttributeLL_transitStopOnRight	= 18,
	SegmentAttributeLL_transitStopInLane	= 19,
	SegmentAttributeLL_sharedWithTrackedVehicle	= 20,
	SegmentAttributeLL_safeIsland	= 21,
	SegmentAttributeLL_lowCurbsPresent	= 22,
	SegmentAttributeLL_rumbleStripPresent	= 23,
	SegmentAttributeLL_audibleSignalingPresent	= 24,
	SegmentAttributeLL_adaptiveTimingPresent	= 25,
	SegmentAttributeLL_rfSignalRequestPresent	= 26,
	SegmentAttributeLL_partialCurbIntrusion	= 27,
	SegmentAttributeLL_taperToLeft	= 28,
	SegmentAttributeLL_taperToRight	= 29,
	SegmentAttributeLL_taperToCenterLine	= 30,
	SegmentAttributeLL_parallelParking	= 31,
	SegmentAttributeLL_headInParking	= 32,
	SegmentAttributeLL_freeParking	= 33,
	SegmentAttributeLL_timeRestrictionsOnParking	= 34,
	SegmentAttributeLL_costToPark	= 35,
	SegmentAttributeLL_midBlockCurbPresent	= 36,
	SegmentAttributeLL_unEvenPavementPresent	= 37
	/*
	 * Enumeration is extensible
	 */
} e_SegmentAttributeLL;

/* SegmentAttributeLL */
typedef long	 SegmentAttributeLL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SegmentAttributeLL;
asn_struct_free_f SegmentAttributeLL_free;
asn_struct_print_f SegmentAttributeLL_print;
asn_constr_check_f SegmentAttributeLL_constraint;
ber_type_decoder_f SegmentAttributeLL_decode_ber;
der_type_encoder_f SegmentAttributeLL_encode_der;
xer_type_decoder_f SegmentAttributeLL_decode_xer;
xer_type_encoder_f SegmentAttributeLL_encode_xer;
per_type_decoder_f SegmentAttributeLL_decode_uper;
per_type_encoder_f SegmentAttributeLL_encode_uper;
per_type_decoder_f SegmentAttributeLL_decode_aper;
per_type_encoder_f SegmentAttributeLL_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SegmentAttributeLL_H_ */
#include <asn_internal.h>

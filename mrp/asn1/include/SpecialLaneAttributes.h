/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SpecialLaneAttributes_H_
#define	_SpecialLaneAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpecialLaneAttributes {
	SpecialLaneAttributes_noData	= 0,
	SpecialLaneAttributes_egressPath	= 1,
	SpecialLaneAttributes_railRoadTrack	= 2,
	SpecialLaneAttributes_transitOnlyLane	= 4,
	SpecialLaneAttributes_hovLane	= 8,
	SpecialLaneAttributes_busOnly	= 16,
	SpecialLaneAttributes_vehiclesEntering	= 32,
	SpecialLaneAttributes_vehiclesLeaving	= 64,
	SpecialLaneAttributes_reserved	= 128
} e_SpecialLaneAttributes;

/* SpecialLaneAttributes */
typedef ENUMERATED_t	 SpecialLaneAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialLaneAttributes;
asn_struct_free_f SpecialLaneAttributes_free;
asn_struct_print_f SpecialLaneAttributes_print;
asn_constr_check_f SpecialLaneAttributes_constraint;
ber_type_decoder_f SpecialLaneAttributes_decode_ber;
der_type_encoder_f SpecialLaneAttributes_encode_der;
xer_type_decoder_f SpecialLaneAttributes_decode_xer;
xer_type_encoder_f SpecialLaneAttributes_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpecialLaneAttributes_H_ */

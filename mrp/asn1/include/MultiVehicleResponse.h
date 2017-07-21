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

#ifndef	_MultiVehicleResponse_H_
#define	_MultiVehicleResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MultiVehicleResponse {
	MultiVehicleResponse_unavailable	= 0,
	MultiVehicleResponse_singleVehicle	= 1,
	MultiVehicleResponse_multiVehicle	= 2,
	MultiVehicleResponse_reserved	= 3
} e_MultiVehicleResponse;

/* MultiVehicleResponse */
typedef long	 MultiVehicleResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiVehicleResponse;
asn_struct_free_f MultiVehicleResponse_free;
asn_struct_print_f MultiVehicleResponse_print;
asn_constr_check_f MultiVehicleResponse_constraint;
ber_type_decoder_f MultiVehicleResponse_decode_ber;
der_type_encoder_f MultiVehicleResponse_encode_der;
xer_type_decoder_f MultiVehicleResponse_decode_xer;
xer_type_encoder_f MultiVehicleResponse_encode_xer;
per_type_decoder_f MultiVehicleResponse_decode_uper;
per_type_encoder_f MultiVehicleResponse_encode_uper;
per_type_decoder_f MultiVehicleResponse_decode_aper;
per_type_encoder_f MultiVehicleResponse_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiVehicleResponse_H_ */
#include <asn_internal.h>

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

#ifndef	_MUTCDCode_H_
#define	_MUTCDCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUTCDCode {
	MUTCDCode_none	= 0,
	MUTCDCode_regulatory	= 1,
	MUTCDCode_warning	= 2,
	MUTCDCode_maintenance	= 3,
	MUTCDCode_motoristService	= 4,
	MUTCDCode_guide	= 5,
	MUTCDCode_rec	= 6
	/*
	 * Enumeration is extensible
	 */
} e_MUTCDCode;

/* MUTCDCode */
typedef long	 MUTCDCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MUTCDCode;
asn_struct_free_f MUTCDCode_free;
asn_struct_print_f MUTCDCode_print;
asn_constr_check_f MUTCDCode_constraint;
ber_type_decoder_f MUTCDCode_decode_ber;
der_type_encoder_f MUTCDCode_encode_der;
xer_type_decoder_f MUTCDCode_decode_xer;
xer_type_encoder_f MUTCDCode_encode_xer;
per_type_decoder_f MUTCDCode_decode_uper;
per_type_encoder_f MUTCDCode_encode_uper;
per_type_decoder_f MUTCDCode_decode_aper;
per_type_encoder_f MUTCDCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MUTCDCode_H_ */
#include <asn_internal.h>

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

#ifndef	_PersonalAssistive_H_
#define	_PersonalAssistive_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PersonalAssistive {
	PersonalAssistive_unavailable	= 0,
	PersonalAssistive_otherType	= 1,
	PersonalAssistive_vision	= 2,
	PersonalAssistive_hearing	= 3,
	PersonalAssistive_movement	= 4,
	PersonalAssistive_cognition	= 5
} e_PersonalAssistive;

/* PersonalAssistive */
typedef BIT_STRING_t	 PersonalAssistive_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonalAssistive;
asn_struct_free_f PersonalAssistive_free;
asn_struct_print_f PersonalAssistive_print;
asn_constr_check_f PersonalAssistive_constraint;
ber_type_decoder_f PersonalAssistive_decode_ber;
der_type_encoder_f PersonalAssistive_encode_der;
xer_type_decoder_f PersonalAssistive_decode_xer;
xer_type_encoder_f PersonalAssistive_encode_xer;
per_type_decoder_f PersonalAssistive_decode_uper;
per_type_encoder_f PersonalAssistive_encode_uper;
per_type_decoder_f PersonalAssistive_decode_aper;
per_type_encoder_f PersonalAssistive_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PersonalAssistive_H_ */
#include <asn_internal.h>

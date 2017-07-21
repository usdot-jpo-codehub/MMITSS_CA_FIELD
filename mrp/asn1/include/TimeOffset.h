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

#ifndef	_TimeOffset_H_
#define	_TimeOffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeOffset */
typedef long	 TimeOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeOffset;
asn_struct_free_f TimeOffset_free;
asn_struct_print_f TimeOffset_print;
asn_constr_check_f TimeOffset_constraint;
ber_type_decoder_f TimeOffset_decode_ber;
der_type_encoder_f TimeOffset_encode_der;
xer_type_decoder_f TimeOffset_decode_xer;
xer_type_encoder_f TimeOffset_encode_xer;
per_type_decoder_f TimeOffset_decode_uper;
per_type_encoder_f TimeOffset_encode_uper;
per_type_decoder_f TimeOffset_decode_aper;
per_type_encoder_f TimeOffset_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeOffset_H_ */
#include <asn_internal.h>

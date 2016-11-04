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

#ifndef	_URL_Link_H_
#define	_URL_Link_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* URL-Link */
typedef IA5String_t	 URL_Link_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URL_Link;
asn_struct_free_f URL_Link_free;
asn_struct_print_f URL_Link_print;
asn_constr_check_f URL_Link_constraint;
ber_type_decoder_f URL_Link_decode_ber;
der_type_encoder_f URL_Link_encode_der;
xer_type_decoder_f URL_Link_decode_xer;
xer_type_encoder_f URL_Link_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _URL_Link_H_ */

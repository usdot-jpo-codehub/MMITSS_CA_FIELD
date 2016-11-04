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

#ifndef	_PathHistoryPointType_06_H_
#define	_PathHistoryPointType_06_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PathHistoryPointType-06 */
typedef OCTET_STRING_t	 PathHistoryPointType_06_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathHistoryPointType_06;
asn_struct_free_f PathHistoryPointType_06_free;
asn_struct_print_f PathHistoryPointType_06_print;
asn_constr_check_f PathHistoryPointType_06_constraint;
ber_type_decoder_f PathHistoryPointType_06_decode_ber;
der_type_encoder_f PathHistoryPointType_06_encode_der;
xer_type_decoder_f PathHistoryPointType_06_decode_xer;
xer_type_encoder_f PathHistoryPointType_06_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PathHistoryPointType_06_H_ */

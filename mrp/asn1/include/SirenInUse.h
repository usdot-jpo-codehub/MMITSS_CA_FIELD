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

#ifndef	_SirenInUse_H_
#define	_SirenInUse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SirenInUse {
	SirenInUse_unavailable	= 0,
	SirenInUse_notInUse	= 1,
	SirenInUse_inUse	= 2,
	SirenInUse_reserved	= 3
} e_SirenInUse;

/* SirenInUse */
typedef ENUMERATED_t	 SirenInUse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SirenInUse;
asn_struct_free_f SirenInUse_free;
asn_struct_print_f SirenInUse_print;
asn_constr_check_f SirenInUse_constraint;
ber_type_decoder_f SirenInUse_decode_ber;
der_type_encoder_f SirenInUse_encode_der;
xer_type_decoder_f SirenInUse_decode_xer;
xer_type_encoder_f SirenInUse_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SirenInUse_H_ */

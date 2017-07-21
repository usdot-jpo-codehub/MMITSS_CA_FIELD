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

#ifndef	_RequestedItem_H_
#define	_RequestedItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestedItem {
	RequestedItem_reserved	= 0,
	RequestedItem_itemA	= 1,
	RequestedItem_itemB	= 2,
	RequestedItem_itemC	= 3,
	RequestedItem_itemD	= 4,
	RequestedItem_itemE	= 5,
	RequestedItem_itemF	= 6,
	RequestedItem_itemG	= 7,
	RequestedItem_itemI	= 8,
	RequestedItem_itemJ	= 9,
	RequestedItem_itemK	= 10,
	RequestedItem_itemL	= 11,
	RequestedItem_itemM	= 12,
	RequestedItem_itemN	= 13,
	RequestedItem_itemO	= 14,
	RequestedItem_itemP	= 15,
	RequestedItem_itemQ	= 16
	/*
	 * Enumeration is extensible
	 */
} e_RequestedItem;

/* RequestedItem */
typedef long	 RequestedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedItem;
asn_struct_free_f RequestedItem_free;
asn_struct_print_f RequestedItem_print;
asn_constr_check_f RequestedItem_constraint;
ber_type_decoder_f RequestedItem_decode_ber;
der_type_encoder_f RequestedItem_encode_der;
xer_type_decoder_f RequestedItem_decode_xer;
xer_type_encoder_f RequestedItem_encode_xer;
per_type_decoder_f RequestedItem_decode_uper;
per_type_encoder_f RequestedItem_encode_uper;
per_type_decoder_f RequestedItem_decode_aper;
per_type_encoder_f RequestedItem_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestedItem_H_ */
#include <asn_internal.h>

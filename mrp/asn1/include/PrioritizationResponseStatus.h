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

#ifndef	_PrioritizationResponseStatus_H_
#define	_PrioritizationResponseStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PrioritizationResponseStatus {
	PrioritizationResponseStatus_unknown	= 0,
	PrioritizationResponseStatus_requested	= 1,
	PrioritizationResponseStatus_processing	= 2,
	PrioritizationResponseStatus_watchOtherTraffic	= 3,
	PrioritizationResponseStatus_granted	= 4,
	PrioritizationResponseStatus_rejected	= 5,
	PrioritizationResponseStatus_maxPresence	= 6,
	PrioritizationResponseStatus_reserviceLocked	= 7
	/*
	 * Enumeration is extensible
	 */
} e_PrioritizationResponseStatus;

/* PrioritizationResponseStatus */
typedef long	 PrioritizationResponseStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrioritizationResponseStatus;
asn_struct_free_f PrioritizationResponseStatus_free;
asn_struct_print_f PrioritizationResponseStatus_print;
asn_constr_check_f PrioritizationResponseStatus_constraint;
ber_type_decoder_f PrioritizationResponseStatus_decode_ber;
der_type_encoder_f PrioritizationResponseStatus_encode_der;
xer_type_decoder_f PrioritizationResponseStatus_decode_xer;
xer_type_encoder_f PrioritizationResponseStatus_encode_xer;
per_type_decoder_f PrioritizationResponseStatus_decode_uper;
per_type_encoder_f PrioritizationResponseStatus_encode_uper;
per_type_decoder_f PrioritizationResponseStatus_decode_aper;
per_type_encoder_f PrioritizationResponseStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PrioritizationResponseStatus_H_ */
#include <asn_internal.h>

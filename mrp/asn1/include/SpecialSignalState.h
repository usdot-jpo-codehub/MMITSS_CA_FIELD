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

#ifndef	_SpecialSignalState_H_
#define	_SpecialSignalState_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpecialSignalState {
	SpecialSignalState_unknown	= 0,
	SpecialSignalState_notInUse	= 1,
	SpecialSignalState_arriving	= 2,
	SpecialSignalState_present	= 3,
	SpecialSignalState_departing	= 4
	/*
	 * Enumeration is extensible
	 */
} e_SpecialSignalState;

/* SpecialSignalState */
typedef ENUMERATED_t	 SpecialSignalState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialSignalState;
asn_struct_free_f SpecialSignalState_free;
asn_struct_print_f SpecialSignalState_print;
asn_constr_check_f SpecialSignalState_constraint;
ber_type_decoder_f SpecialSignalState_decode_ber;
der_type_encoder_f SpecialSignalState_encode_der;
xer_type_decoder_f SpecialSignalState_decode_xer;
xer_type_encoder_f SpecialSignalState_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpecialSignalState_H_ */

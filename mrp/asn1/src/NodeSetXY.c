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

#include "NodeSetXY.h"

static asn_per_constraints_t asn_PER_type_NodeSetXY_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  2l,  63l }	/* (SIZE(2..63)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NodeSetXY_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NodeXY,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NodeSetXY_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NodeSetXY_specs_1 = {
	sizeof(struct NodeSetXY),
	offsetof(struct NodeSetXY, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NodeSetXY = {
	"NodeSetXY",
	"NodeSetXY",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NodeSetXY_tags_1,
	sizeof(asn_DEF_NodeSetXY_tags_1)
		/sizeof(asn_DEF_NodeSetXY_tags_1[0]), /* 1 */
	asn_DEF_NodeSetXY_tags_1,	/* Same as above */
	sizeof(asn_DEF_NodeSetXY_tags_1)
		/sizeof(asn_DEF_NodeSetXY_tags_1[0]), /* 1 */
	&asn_PER_type_NodeSetXY_constr_1,
	asn_MBR_NodeSetXY_1,
	1,	/* Single element */
	&asn_SPC_NodeSetXY_specs_1	/* Additional specs */
};


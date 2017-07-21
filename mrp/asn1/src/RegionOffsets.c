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

#include "RegionOffsets.h"

static asn_TYPE_member_t asn_MBR_RegionOffsets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, xOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"xOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, yOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"yOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct RegionOffsets, zOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"zOffset"
		},
};
static const int asn_MAP_RegionOffsets_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RegionOffsets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RegionOffsets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* xOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* yOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* zOffset */
};
static asn_SEQUENCE_specifics_t asn_SPC_RegionOffsets_specs_1 = {
	sizeof(struct RegionOffsets),
	offsetof(struct RegionOffsets, _asn_ctx),
	asn_MAP_RegionOffsets_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RegionOffsets_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RegionOffsets = {
	"RegionOffsets",
	"RegionOffsets",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RegionOffsets_tags_1,
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	asn_DEF_RegionOffsets_tags_1,	/* Same as above */
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RegionOffsets_1,
	3,	/* Elements count */
	&asn_SPC_RegionOffsets_specs_1	/* Additional specs */
};


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

#include <asn_internal.h>

#include "DYearMonth.h"

static asn_TYPE_member_t asn_MBR_DYearMonth_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DYearMonth, year),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DYear,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"year"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DYearMonth, month),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DMonth,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"month"
		},
};
static ber_tlv_tag_t asn_DEF_DYearMonth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DYearMonth_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* year at 965 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* month at 967 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DYearMonth_specs_1 = {
	sizeof(struct DYearMonth),
	offsetof(struct DYearMonth, _asn_ctx),
	asn_MAP_DYearMonth_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DYearMonth = {
	"DYearMonth",
	"DYearMonth",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DYearMonth_tags_1,
	sizeof(asn_DEF_DYearMonth_tags_1)
		/sizeof(asn_DEF_DYearMonth_tags_1[0]), /* 1 */
	asn_DEF_DYearMonth_tags_1,	/* Same as above */
	sizeof(asn_DEF_DYearMonth_tags_1)
		/sizeof(asn_DEF_DYearMonth_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DYearMonth_1,
	2,	/* Elements count */
	&asn_SPC_DYearMonth_specs_1	/* Additional specs */
};


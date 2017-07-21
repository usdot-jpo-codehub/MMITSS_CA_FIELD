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

#include "TimeChangeDetails.h"

static asn_TYPE_member_t asn_MBR_TimeChangeDetails_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TimeChangeDetails, startTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"startTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TimeChangeDetails, minEndTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minEndTime"
		},
	{ ATF_POINTER, 4, offsetof(struct TimeChangeDetails, maxEndTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxEndTime"
		},
	{ ATF_POINTER, 3, offsetof(struct TimeChangeDetails, likelyTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"likelyTime"
		},
	{ ATF_POINTER, 2, offsetof(struct TimeChangeDetails, confidence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeIntervalConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"confidence"
		},
	{ ATF_POINTER, 1, offsetof(struct TimeChangeDetails, nextTime),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nextTime"
		},
};
static const int asn_MAP_TimeChangeDetails_oms_1[] = { 0, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_TimeChangeDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TimeChangeDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* minEndTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxEndTime */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* likelyTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* confidence */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nextTime */
};
static asn_SEQUENCE_specifics_t asn_SPC_TimeChangeDetails_specs_1 = {
	sizeof(struct TimeChangeDetails),
	offsetof(struct TimeChangeDetails, _asn_ctx),
	asn_MAP_TimeChangeDetails_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_TimeChangeDetails_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TimeChangeDetails = {
	"TimeChangeDetails",
	"TimeChangeDetails",
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
	asn_DEF_TimeChangeDetails_tags_1,
	sizeof(asn_DEF_TimeChangeDetails_tags_1)
		/sizeof(asn_DEF_TimeChangeDetails_tags_1[0]), /* 1 */
	asn_DEF_TimeChangeDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeChangeDetails_tags_1)
		/sizeof(asn_DEF_TimeChangeDetails_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TimeChangeDetails_1,
	6,	/* Elements count */
	&asn_SPC_TimeChangeDetails_specs_1	/* Additional specs */
};


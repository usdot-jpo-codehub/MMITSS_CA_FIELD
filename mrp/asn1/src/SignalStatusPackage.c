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

#include "SignalStatusPackage.h"

static int
memb_regional_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1LL && size <= 4LL)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_regional_constr_9 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1l,  4l }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_regional_constr_9 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1l,  4l }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_92P56,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_9 = {
	sizeof(struct SignalStatusPackage__regional),
	offsetof(struct SignalStatusPackage__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_9 = {
	"regional",
	"regional",
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
	asn_DEF_regional_tags_9,
	sizeof(asn_DEF_regional_tags_9)
		/sizeof(asn_DEF_regional_tags_9[0]) - 1, /* 1 */
	asn_DEF_regional_tags_9,	/* Same as above */
	sizeof(asn_DEF_regional_tags_9)
		/sizeof(asn_DEF_regional_tags_9[0]), /* 2 */
	&asn_PER_type_regional_constr_9,
	asn_MBR_regional_9,
	1,	/* Single element */
	&asn_SPC_regional_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SignalStatusPackage_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, requester),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalRequesterInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"requester"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusPackage, inboundOn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntersectionAccessPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inboundOn"
		},
	{ ATF_POINTER, 4, offsetof(struct SignalStatusPackage, outboundOn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntersectionAccessPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"outboundOn"
		},
	{ ATF_POINTER, 3, offsetof(struct SignalStatusPackage, minute),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minute"
		},
	{ ATF_POINTER, 2, offsetof(struct SignalStatusPackage, second),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"second"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, duration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"duration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusPackage, status),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrioritizationResponseStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"status"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, regional),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_regional_9,
		memb_regional_constraint_1,
		&asn_PER_memb_regional_constr_9,
		0,
		"regional"
		},
};
static const int asn_MAP_SignalStatusPackage_oms_1[] = { 0, 2, 3, 4, 5, 7 };
static const ber_tlv_tag_t asn_DEF_SignalStatusPackage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalStatusPackage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requester */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inboundOn */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* outboundOn */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* minute */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* second */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* duration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* status */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_SignalStatusPackage_specs_1 = {
	sizeof(struct SignalStatusPackage),
	offsetof(struct SignalStatusPackage, _asn_ctx),
	asn_MAP_SignalStatusPackage_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SignalStatusPackage_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatusPackage = {
	"SignalStatusPackage",
	"SignalStatusPackage",
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
	asn_DEF_SignalStatusPackage_tags_1,
	sizeof(asn_DEF_SignalStatusPackage_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_tags_1[0]), /* 1 */
	asn_DEF_SignalStatusPackage_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatusPackage_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SignalStatusPackage_1,
	8,	/* Elements count */
	&asn_SPC_SignalStatusPackage_specs_1	/* Additional specs */
};


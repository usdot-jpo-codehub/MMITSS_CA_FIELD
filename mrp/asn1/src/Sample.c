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

#include "Sample.h"

static int
memb_sampleStart_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 255LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sampleEnd_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 255LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_sampleStart_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0l,  255l }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sampleEnd_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0l,  255l }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Sample_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Sample, sampleStart),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sampleStart_constraint_1,
		&asn_PER_memb_sampleStart_constr_2,
		0,
		"sampleStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Sample, sampleEnd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sampleEnd_constraint_1,
		&asn_PER_memb_sampleEnd_constr_3,
		0,
		"sampleEnd"
		},
};
static const ber_tlv_tag_t asn_DEF_Sample_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Sample_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sampleStart */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sampleEnd */
};
static asn_SEQUENCE_specifics_t asn_SPC_Sample_specs_1 = {
	sizeof(struct Sample),
	offsetof(struct Sample, _asn_ctx),
	asn_MAP_Sample_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Sample = {
	"Sample",
	"Sample",
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
	asn_DEF_Sample_tags_1,
	sizeof(asn_DEF_Sample_tags_1)
		/sizeof(asn_DEF_Sample_tags_1[0]), /* 1 */
	asn_DEF_Sample_tags_1,	/* Same as above */
	sizeof(asn_DEF_Sample_tags_1)
		/sizeof(asn_DEF_Sample_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Sample_1,
	2,	/* Elements count */
	&asn_SPC_Sample_specs_1	/* Additional specs */
};


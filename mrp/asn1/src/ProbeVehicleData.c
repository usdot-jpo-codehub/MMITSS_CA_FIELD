/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "ProbeVehicleData.h"

static int
memb_snapshots_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_snapshots_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Snapshot,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_snapshots_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_snapshots_specs_8 = {
	sizeof(struct ProbeVehicleData__snapshots),
	offsetof(struct ProbeVehicleData__snapshots, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_snapshots_8 = {
	"snapshots",
	"snapshots",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_snapshots_tags_8,
	sizeof(asn_DEF_snapshots_tags_8)
		/sizeof(asn_DEF_snapshots_tags_8[0]) - 1, /* 1 */
	asn_DEF_snapshots_tags_8,	/* Same as above */
	sizeof(asn_DEF_snapshots_tags_8)
		/sizeof(asn_DEF_snapshots_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_snapshots_8,
	1,	/* Single element */
	&asn_SPC_snapshots_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ProbeVehicleData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeVehicleData, msgID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRCmsgID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msgID"
		},
	{ ATF_POINTER, 2, offsetof(struct ProbeVehicleData, segNum),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProbeSegmentNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"segNum"
		},
	{ ATF_POINTER, 1, offsetof(struct ProbeVehicleData, probeID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleIdent,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"probeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeVehicleData, startVector),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FullPositionVector,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startVector"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeVehicleData, vehicleType),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleType"
		},
	{ ATF_POINTER, 1, offsetof(struct ProbeVehicleData, cntSnapshots),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Count,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cntSnapshots"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeVehicleData, snapshots),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_snapshots_8,
		memb_snapshots_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"snapshots"
		},
};
static ber_tlv_tag_t asn_DEF_ProbeVehicleData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ProbeVehicleData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgID at 252 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* segNum at 253 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* probeID at 256 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* startVector at 259 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* vehicleType at 261 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cntSnapshots at 262 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* snapshots at 265 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ProbeVehicleData_specs_1 = {
	sizeof(struct ProbeVehicleData),
	offsetof(struct ProbeVehicleData, _asn_ctx),
	asn_MAP_ProbeVehicleData_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ProbeVehicleData = {
	"ProbeVehicleData",
	"ProbeVehicleData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ProbeVehicleData_tags_1,
	sizeof(asn_DEF_ProbeVehicleData_tags_1)
		/sizeof(asn_DEF_ProbeVehicleData_tags_1[0]), /* 1 */
	asn_DEF_ProbeVehicleData_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProbeVehicleData_tags_1)
		/sizeof(asn_DEF_ProbeVehicleData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ProbeVehicleData_1,
	7,	/* Elements count */
	&asn_SPC_ProbeVehicleData_specs_1	/* Additional specs */
};


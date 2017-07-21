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

#include "SpeedLimitType.h"

int
SpeedLimitType_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
SpeedLimitType_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
SpeedLimitType_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SpeedLimitType_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SpeedLimitType_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SpeedLimitType_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SpeedLimitType_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SpeedLimitType_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SpeedLimitType_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SpeedLimitType_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
SpeedLimitType_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
SpeedLimitType_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SpeedLimitType_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_SpeedLimitType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0l,  12l }	/* (0..12,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SpeedLimitType_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	20,	"maxSpeedInSchoolZone" },
	{ 2,	42,	"maxSpeedInSchoolZoneWhenChildrenArePresent" },
	{ 3,	26,	"maxSpeedInConstructionZone" },
	{ 4,	15,	"vehicleMinSpeed" },
	{ 5,	15,	"vehicleMaxSpeed" },
	{ 6,	20,	"vehicleNightMaxSpeed" },
	{ 7,	13,	"truckMinSpeed" },
	{ 8,	13,	"truckMaxSpeed" },
	{ 9,	18,	"truckNightMaxSpeed" },
	{ 10,	28,	"vehiclesWithTrailersMinSpeed" },
	{ 11,	28,	"vehiclesWithTrailersMaxSpeed" },
	{ 12,	33,	"vehiclesWithTrailersNightMaxSpeed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SpeedLimitType_enum2value_1[] = {
	3,	/* maxSpeedInConstructionZone(3) */
	1,	/* maxSpeedInSchoolZone(1) */
	2,	/* maxSpeedInSchoolZoneWhenChildrenArePresent(2) */
	8,	/* truckMaxSpeed(8) */
	7,	/* truckMinSpeed(7) */
	9,	/* truckNightMaxSpeed(9) */
	0,	/* unknown(0) */
	5,	/* vehicleMaxSpeed(5) */
	4,	/* vehicleMinSpeed(4) */
	6,	/* vehicleNightMaxSpeed(6) */
	11,	/* vehiclesWithTrailersMaxSpeed(11) */
	10,	/* vehiclesWithTrailersMinSpeed(10) */
	12	/* vehiclesWithTrailersNightMaxSpeed(12) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_SpeedLimitType_specs_1 = {
	asn_MAP_SpeedLimitType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SpeedLimitType_enum2value_1,	/* N => "tag"; sorted by N */
	13,	/* Number of elements in the maps */
	14,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SpeedLimitType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SpeedLimitType = {
	"SpeedLimitType",
	"SpeedLimitType",
	SpeedLimitType_free,
	SpeedLimitType_print,
	SpeedLimitType_constraint,
	SpeedLimitType_decode_ber,
	SpeedLimitType_encode_der,
	SpeedLimitType_decode_xer,
	SpeedLimitType_encode_xer,
	SpeedLimitType_decode_uper,
	SpeedLimitType_encode_uper,
	SpeedLimitType_decode_aper,
	SpeedLimitType_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SpeedLimitType_tags_1,
	sizeof(asn_DEF_SpeedLimitType_tags_1)
		/sizeof(asn_DEF_SpeedLimitType_tags_1[0]), /* 1 */
	asn_DEF_SpeedLimitType_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedLimitType_tags_1)
		/sizeof(asn_DEF_SpeedLimitType_tags_1[0]), /* 1 */
	&asn_PER_type_SpeedLimitType_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SpeedLimitType_specs_1	/* Additional specs */
};


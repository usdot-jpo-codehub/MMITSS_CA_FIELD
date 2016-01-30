/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "VehicleType.h"

int
VehicleType_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
VehicleType_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

void
VehicleType_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
VehicleType_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
VehicleType_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
VehicleType_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
VehicleType_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
VehicleType_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VehicleType_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_VehicleType_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	7,	"unknown" },
	{ 2,	7,	"special" },
	{ 3,	4,	"moto" },
	{ 4,	3,	"car" },
	{ 5,	8,	"carOther" },
	{ 6,	3,	"bus" },
	{ 7,	8,	"axleCnt2" },
	{ 8,	8,	"axleCnt3" },
	{ 9,	8,	"axleCnt4" },
	{ 10,	15,	"axleCnt4Trailer" },
	{ 11,	15,	"axleCnt5Trailer" },
	{ 12,	15,	"axleCnt6Trailer" },
	{ 13,	20,	"axleCnt5MultiTrailer" },
	{ 14,	20,	"axleCnt6MultiTrailer" },
	{ 15,	20,	"axleCnt7MultiTrailer" }
	/* This list is extensible */
};
static unsigned int asn_MAP_VehicleType_enum2value_1[] = {
	7,	/* axleCnt2(7) */
	8,	/* axleCnt3(8) */
	9,	/* axleCnt4(9) */
	10,	/* axleCnt4Trailer(10) */
	13,	/* axleCnt5MultiTrailer(13) */
	11,	/* axleCnt5Trailer(11) */
	14,	/* axleCnt6MultiTrailer(14) */
	12,	/* axleCnt6Trailer(12) */
	15,	/* axleCnt7MultiTrailer(15) */
	6,	/* bus(6) */
	4,	/* car(4) */
	5,	/* carOther(5) */
	3,	/* moto(3) */
	0,	/* none(0) */
	2,	/* special(2) */
	1	/* unknown(1) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_VehicleType_specs_1 = {
	asn_MAP_VehicleType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_VehicleType_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_VehicleType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VehicleType = {
	"VehicleType",
	"VehicleType",
	VehicleType_free,
	VehicleType_print,
	VehicleType_constraint,
	VehicleType_decode_ber,
	VehicleType_encode_der,
	VehicleType_decode_xer,
	VehicleType_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VehicleType_tags_1,
	sizeof(asn_DEF_VehicleType_tags_1)
		/sizeof(asn_DEF_VehicleType_tags_1[0]), /* 1 */
	asn_DEF_VehicleType_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleType_tags_1)
		/sizeof(asn_DEF_VehicleType_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_VehicleType_specs_1	/* Additional specs */
};


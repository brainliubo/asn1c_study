/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RectangleTest"
 * 	found in "/home/boliu/liubo/lte_rrc_asn/Rectangle.asn1"
 * 	`asn1c -gen-PER`
 */

#include "Rectangle.h"

static asn_TYPE_member_t asn_MBR_Rectangle_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Rectangle, height),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"height"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Rectangle, width),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"width"
		},
};
static const ber_tlv_tag_t asn_DEF_Rectangle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Rectangle_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* height */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* width */
};
static asn_SEQUENCE_specifics_t asn_SPC_Rectangle_specs_1 = {
	sizeof(struct Rectangle),
	offsetof(struct Rectangle, _asn_ctx),
	asn_MAP_Rectangle_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Rectangle = {
	"Rectangle",
	"Rectangle",
	&asn_OP_SEQUENCE,
	asn_DEF_Rectangle_tags_1,
	sizeof(asn_DEF_Rectangle_tags_1)
		/sizeof(asn_DEF_Rectangle_tags_1[0]), /* 1 */
	asn_DEF_Rectangle_tags_1,	/* Same as above */
	sizeof(asn_DEF_Rectangle_tags_1)
		/sizeof(asn_DEF_Rectangle_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Rectangle_1,
	2,	/* Elements count */
	&asn_SPC_Rectangle_specs_1	/* Additional specs */
};


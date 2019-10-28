/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_AssistanceDataForPaging.h"

#include "S1AP_AssistanceDataForRecommendedCells.h"
#include "S1AP_AssistanceDataForCECapableUEs.h"
#include "S1AP_PagingAttemptInformation.h"
#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_AssistanceDataForPaging_1[] = {
	{ ATF_POINTER, 4, offsetof(struct S1AP_AssistanceDataForPaging, assistanceDataForRecommendedCells),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_AssistanceDataForRecommendedCells,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistanceDataForRecommendedCells"
		},
	{ ATF_POINTER, 3, offsetof(struct S1AP_AssistanceDataForPaging, assistanceDataForCECapableUEs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_AssistanceDataForCECapableUEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistanceDataForCECapableUEs"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_AssistanceDataForPaging, pagingAttemptInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PagingAttemptInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingAttemptInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_AssistanceDataForPaging, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6602P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_AssistanceDataForPaging_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_AssistanceDataForPaging_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_AssistanceDataForPaging_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* assistanceDataForRecommendedCells */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* assistanceDataForCECapableUEs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingAttemptInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_AssistanceDataForPaging_specs_1 = {
	sizeof(struct S1AP_AssistanceDataForPaging),
	offsetof(struct S1AP_AssistanceDataForPaging, _asn_ctx),
	asn_MAP_S1AP_AssistanceDataForPaging_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_AssistanceDataForPaging_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_AssistanceDataForPaging = {
	"AssistanceDataForPaging",
	"AssistanceDataForPaging",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_AssistanceDataForPaging_tags_1,
	sizeof(asn_DEF_S1AP_AssistanceDataForPaging_tags_1)
		/sizeof(asn_DEF_S1AP_AssistanceDataForPaging_tags_1[0]), /* 1 */
	asn_DEF_S1AP_AssistanceDataForPaging_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_AssistanceDataForPaging_tags_1)
		/sizeof(asn_DEF_S1AP_AssistanceDataForPaging_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_AssistanceDataForPaging_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_AssistanceDataForPaging_specs_1	/* Additional specs */
};


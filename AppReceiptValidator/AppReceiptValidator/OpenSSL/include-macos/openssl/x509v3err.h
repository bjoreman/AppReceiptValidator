/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_X509V3ERR_H
# define HEADER_X509V3ERR_H

# ifndef HEADER_SYMHACKS_H
#  include "symhacks.h"
# endif

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_X509V3_strings(void);

/*
 * X509V3 function codes.
 */
# define X509V3_F_A2I_GENERAL_NAME                        164
# define X509V3_F_ADDR_VALIDATE_PATH_INTERNAL             166
# define X509V3_F_ASIDENTIFIERCHOICE_CANONIZE             161
# define X509V3_F_ASIDENTIFIERCHOICE_IS_CANONICAL         162
# define X509V3_F_BIGNUM_TO_STRING                        167
# define X509V3_F_COPY_EMAIL                              122
# define X509V3_F_COPY_ISSUER                             123
# define X509V3_F_DO_DIRNAME                              144
# define X509V3_F_DO_EXT_I2D                              135
# define X509V3_F_DO_EXT_NCONF                            151
# define X509V3_F_GNAMES_FROM_SECTNAME                    156
# define X509V3_F_I2S_ASN1_ENUMERATED                     121
# define X509V3_F_I2S_ASN1_IA5STRING                      149
# define X509V3_F_I2S_ASN1_INTEGER                        120
# define X509V3_F_I2V_AUTHORITY_INFO_ACCESS               138
# define X509V3_F_LEVEL_ADD_NODE                          168
# define X509V3_F_NOTICE_SECTION                          132
# define X509V3_F_NREF_NOS                                133
# define X509V3_F_POLICY_CACHE_CREATE                     169
# define X509V3_F_POLICY_CACHE_NEW                        170
# define X509V3_F_POLICY_DATA_NEW                         171
# define X509V3_F_POLICY_SECTION                          131
# define X509V3_F_PROCESS_PCI_VALUE                       150
# define X509V3_F_R2I_CERTPOL                             130
# define X509V3_F_R2I_PCI                                 155
# define X509V3_F_S2I_ASN1_IA5STRING                      100
# define X509V3_F_S2I_ASN1_INTEGER                        108
# define X509V3_F_S2I_ASN1_OCTET_STRING                   112
# define X509V3_F_S2I_SKEY_ID                             115
# define X509V3_F_SET_DIST_POINT_NAME                     158
# define X509V3_F_SXNET_ADD_ID_ASC                        125
# define X509V3_F_SXNET_ADD_ID_INTEGER                    126
# define X509V3_F_SXNET_ADD_ID_ULONG                      127
# define X509V3_F_SXNET_GET_ID_ASC                        128
# define X509V3_F_SXNET_GET_ID_ULONG                      129
# define X509V3_F_TREE_INIT                               172
# define X509V3_F_V2I_ASIDENTIFIERS                       163
# define X509V3_F_V2I_ASN1_BIT_STRING                     101
# define X509V3_F_V2I_AUTHORITY_INFO_ACCESS               139
# define X509V3_F_V2I_AUTHORITY_KEYID                     119
# define X509V3_F_V2I_BASIC_CONSTRAINTS                   102
# define X509V3_F_V2I_CRLD                                134
# define X509V3_F_V2I_EXTENDED_KEY_USAGE                  103
# define X509V3_F_V2I_GENERAL_NAMES                       118
# define X509V3_F_V2I_GENERAL_NAME_EX                     117
# define X509V3_F_V2I_IDP                                 157
# define X509V3_F_V2I_IPADDRBLOCKS                        159
# define X509V3_F_V2I_ISSUER_ALT                          153
# define X509V3_F_V2I_NAME_CONSTRAINTS                    147
# define X509V3_F_V2I_POLICY_CONSTRAINTS                  146
# define X509V3_F_V2I_POLICY_MAPPINGS                     145
# define X509V3_F_V2I_SUBJECT_ALT                         154
# define X509V3_F_V2I_TLS_FEATURE                         165
# define X509V3_F_V3_GENERIC_EXTENSION                    116
# define X509V3_F_X509V3_ADD1_I2D                         140
# define X509V3_F_X509V3_ADD_VALUE                        105
# define X509V3_F_X509V3_EXT_ADD                          104
# define X509V3_F_X509V3_EXT_ADD_ALIAS                    106
# define X509V3_F_X509V3_EXT_I2D                          136
# define X509V3_F_X509V3_EXT_NCONF                        152
# define X509V3_F_X509V3_GET_SECTION                      142
# define X509V3_F_X509V3_GET_STRING                       143
# define X509V3_F_X509V3_GET_VALUE_BOOL                   110
# define X509V3_F_X509V3_PARSE_LIST                       109
# define X509V3_F_X509_PURPOSE_ADD                        137
# define X509V3_F_X509_PURPOSE_SET                        141

/*
 * X509V3 reason codes.
 */
# define X509V3_R_BAD_IP_ADDRESS                          118
# define X509V3_R_BAD_OBJECT                              119
# define X509V3_R_BN_DEC2BN_ERROR                         100
# define X509V3_R_BN_TO_ASN1_INTEGER_ERROR                101
# define X509V3_R_DIRNAME_ERROR                           149
# define X509V3_R_DISTPOINT_ALREADY_SET                   160
# define X509V3_R_DUPLICATE_ZONE_ID                       133
# define X509V3_R_ERROR_CONVERTING_ZONE                   131
# define X509V3_R_ERROR_CREATING_EXTENSION                144
# define X509V3_R_ERROR_IN_EXTENSION                      128
# define X509V3_R_EXPECTED_A_SECTION_NAME                 137
# define X509V3_R_EXTENSION_EXISTS                        145
# define X509V3_R_EXTENSION_NAME_ERROR                    115
# define X509V3_R_EXTENSION_NOT_FOUND                     102
# define X509V3_R_EXTENSION_SETTING_NOT_SUPPORTED         103
# define X509V3_R_EXTENSION_VALUE_ERROR                   116
# define X509V3_R_ILLEGAL_EMPTY_EXTENSION                 151
# define X509V3_R_INCORRECT_POLICY_SYNTAX_TAG             152
# define X509V3_R_INVALID_ASNUMBER                        162
# define X509V3_R_INVALID_ASRANGE                         163
# define X509V3_R_INVALID_BOOLEAN_STRING                  104
# define X509V3_R_INVALID_EXTENSION_STRING                105
# define X509V3_R_INVALID_INHERITANCE                     165
# define X509V3_R_INVALID_IPADDRESS                       166
# define X509V3_R_INVALID_MULTIPLE_RDNS                   161
# define X509V3_R_INVALID_NAME                            106
# define X509V3_R_INVALID_NULL_ARGUMENT                   107
# define X509V3_R_INVALID_NULL_NAME                       108
# define X509V3_R_INVALID_NULL_VALUE                      109
# define X509V3_R_INVALID_NUMBER                          140
# define X509V3_R_INVALID_NUMBERS                         141
# define X509V3_R_INVALID_OBJECT_IDENTIFIER               110
# define X509V3_R_INVALID_OPTION                          138
# define X509V3_R_INVALID_POLICY_IDENTIFIER               134
# define X509V3_R_INVALID_PROXY_POLICY_SETTING            153
# define X509V3_R_INVALID_PURPOSE                         146
# define X509V3_R_INVALID_SAFI                            164
# define X509V3_R_INVALID_SECTION                         135
# define X509V3_R_INVALID_SYNTAX                          143
# define X509V3_R_ISSUER_DECODE_ERROR                     126
# define X509V3_R_MISSING_VALUE                           124
# define X509V3_R_NEED_ORGANIZATION_AND_NUMBERS           142
# define X509V3_R_NO_CONFIG_DATABASE                      136
# define X509V3_R_NO_ISSUER_CERTIFICATE                   121
# define X509V3_R_NO_ISSUER_DETAILS                       127
# define X509V3_R_NO_POLICY_IDENTIFIER                    139
# define X509V3_R_NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED   154
# define X509V3_R_NO_PUBLIC_KEY                           114
# define X509V3_R_NO_SUBJECT_DETAILS                      125
# define X509V3_R_OPERATION_NOT_DEFINED                   148
# define X509V3_R_OTHERNAME_ERROR                         147
# define X509V3_R_POLICY_LANGUAGE_ALREADY_DEFINED         155
# define X509V3_R_POLICY_PATH_LENGTH                      156
# define X509V3_R_POLICY_PATH_LENGTH_ALREADY_DEFINED      157
# define X509V3_R_POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY 159
# define X509V3_R_SECTION_NOT_FOUND                       150
# define X509V3_R_UNABLE_TO_GET_ISSUER_DETAILS            122
# define X509V3_R_UNABLE_TO_GET_ISSUER_KEYID              123
# define X509V3_R_UNKNOWN_BIT_STRING_ARGUMENT             111
# define X509V3_R_UNKNOWN_EXTENSION                       129
# define X509V3_R_UNKNOWN_EXTENSION_NAME                  130
# define X509V3_R_UNKNOWN_OPTION                          120
# define X509V3_R_UNSUPPORTED_OPTION                      117
# define X509V3_R_UNSUPPORTED_TYPE                        167
# define X509V3_R_USER_TOO_LONG                           132

#endif

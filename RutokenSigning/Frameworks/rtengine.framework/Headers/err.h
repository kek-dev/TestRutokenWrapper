/*! \file err.h
 *  \brief Заголовочный файл с кодами ошибок.
 *  Ошибки генерируются автоматически с помощью скрипта mkerr.pl.
 */
/*
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */
#ifndef HEADER_RTENG_ERR_H
# define HEADER_RTENG_ERR_H

# ifdef  __cplusplus
extern "C" {
# endif

/*! \brief Возвращает код библиотеки закрепленный за rtengine в OpenSSL.
 *  \return код rtengine.
 */

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */

int ERR_RTENG_library_code(void);

/* Error codes for the RTENG functions. */

/* Function codes. */
# define RTENG_F_ALLOC_DATA                               100
# define RTENG_F_BOOL_CALLER                              256
# define RTENG_F_CHOOSE_DEVICE                            251
# define RTENG_F_CIPHER_ASN1_TO_PARAM                     101
# define RTENG_F_CIPHER_CLEANUP                           102
# define RTENG_F_CIPHER_CTRL                              103
# define RTENG_F_CIPHER_INIT                              104
# define RTENG_F_CIPHER_OPERATION                         105
# define RTENG_F_CIPHER_PARAM_TO_ASN1                     106
# define RTENG_F_CREATE_CIPHERS                           107
# define RTENG_F_CREATE_DIGESTS                           108
# define RTENG_F_DECODE_HEX                               109
# define RTENG_F_DIGEST_COPY                              110
# define RTENG_F_DIGEST_CTRL                              111
# define RTENG_F_DIGEST_FINAL                             112
# define RTENG_F_DIGEST_INIT                              113
# define RTENG_F_DIGEST_UPDATE                            114
# define RTENG_F_EC_KEY_DERIVE_VKO                        115
# define RTENG_F_ENGINE_BIND                              116
# define RTENG_F_ENGINE_CIPHERS                           117
# define RTENG_F_ENGINE_CREATE                            118
# define RTENG_F_ENGINE_DIGESTS                           119
# define RTENG_F_FILL_DECRYPT_CEK_DATA                    120
# define RTENG_F_FILL_P11_TEMPLATE                        261
# define RTENG_F_FIND_KEY                                 137
# define RTENG_F_FIND_KEYPAIR                             263
# define RTENG_F_FIND_OBJECT                              264
# define RTENG_F_FIND_RAND_TOKEN                          122
# define RTENG_F_FIND_TOKEN_KEY_ATTRS                     262
# define RTENG_F_GET0_EC_KEY                              123
# define RTENG_F_GET1_MICALG_STRING                       250
# define RTENG_F_GET_DEVICES                              259
# define RTENG_F_GET_PIN                                  257
# define RTENG_F_GET_PIN_SOURCE_PATH                      140
# define RTENG_F_HANDLE_CTRL                              124
# define RTENG_F_INIT_ALGORITHM_NID                       125
# define RTENG_F_INIT_PARAMSET_NID                        126
# define RTENG_F_LOAD_KEY                                 127
# define RTENG_F_LOAD_PIN                                 252
# define RTENG_F_MAC_CLEANUP                              128
# define RTENG_F_MAC_COPY                                 129
# define RTENG_F_MAC_CTRL                                 130
# define RTENG_F_MAC_FINAL                                131
# define RTENG_F_MAC_INIT                                 132
# define RTENG_F_MAC_INIT_INTERNAL                        133
# define RTENG_F_MAC_SET_KEY                              134
# define RTENG_F_MAC_SET_KEY_WITH_CUSTOM_PARAMSET         135
# define RTENG_F_MAC_UPDATE                               136
# define RTENG_F_MATCH_TOKEN                              260
# define RTENG_F_NEW_GOST_DECRYPT_CEK_DATA                138
# define RTENG_F_OPEN_SESSION                             253
# define RTENG_F_PARSE                                    139
# define RTENG_F_PARSE_ATTR                               141
# define RTENG_F_PARSE_KEY_URI                            258
# define RTENG_F_PARSE_PIN_SOURCE                         239
# define RTENG_F_POINT2LEBINPAD                           142
# define RTENG_F_RAND_BYTES                               143
# define RTENG_F_RAND_INIT                                144
# define RTENG_F_READ_PIN_FROM_FILE                       121
# define RTENG_F_RT_ENG_COW_BUFFER_ADD                    145
# define RTENG_F_RT_ENG_CRYPTER_CIPHER_UPDATE             146
# define RTENG_F_RT_ENG_CRYPTER_CLONE                     147
# define RTENG_F_RT_ENG_CRYPTER_PREPARE_CIPHER            148
# define RTENG_F_RT_ENG_CRYPTER_SET1_KEY                  149
# define RTENG_F_RT_ENG_DECRYPT                           150
# define RTENG_F_RT_ENG_DERIVE                            151
# define RTENG_F_RT_ENG_DL_CLOSE                          152
# define RTENG_F_RT_ENG_DL_OPEN                           153
# define RTENG_F_RT_ENG_DL_SYM                            154
# define RTENG_F_RT_ENG_EC_KEY_DECRYPT_CEK                155
# define RTENG_F_RT_ENG_EC_KEY_INIT                       156
# define RTENG_F_RT_ENG_EC_KEY_SET_PUB_KEY                157
# define RTENG_F_RT_ENG_EC_KEY_VERIFY                     158
# define RTENG_F_RT_ENG_FINAL                             159
# define RTENG_F_RT_ENG_GET0_CRYPT                        160
# define RTENG_F_RT_ENG_GET0_EC_KEY                       161
# define RTENG_F_RT_ENG_GOST3412_CRYPTER_ASN1_TO_PARAM    162
# define RTENG_F_RT_ENG_GOST3412_CRYPTER_CTRL             265
# define RTENG_F_RT_ENG_GOST3412_CRYPTER_PARAM_TO_ASN1    163
# define RTENG_F_RT_ENG_GOST89_CRYPTER_ASN1_TO_PARAM      164
# define RTENG_F_RT_ENG_GOST89_CRYPTER_INIT               165
# define RTENG_F_RT_ENG_GOST89_CRYPTER_PARAM_TO_ASN1      166
# define RTENG_F_RT_ENG_HARD_DIGESTER_ADD1_P11_SESS       167
# define RTENG_F_RT_ENG_HARD_DIGESTER_CLONE               168
# define RTENG_F_RT_ENG_HARD_DIGESTER_FINAL               169
# define RTENG_F_RT_ENG_HARD_EC_KEY_DERIVE                266
# define RTENG_F_RT_ENG_HARD_EC_KEY_DERIVE_VKO            170
# define RTENG_F_RT_ENG_SOFT_EC_KEY_DERIVE_KEG            268
# define RTENG_F_RT_ENG_INVALIDATE_P11_EVP_PKEY           171
# define RTENG_F_RT_ENG_MD_ADD1_P11_SESSION               172
# define RTENG_F_RT_ENG_MTX_INIT                          249
# define RTENG_F_RT_ENG_NEW_P11_EVP_PKEY                  173
# define RTENG_F_RT_ENG_P11_DEALER_DERIVE_KEG             267
# define RTENG_F_RT_ENG_P11_DEALER_DERIVE_VKO             174
# define RTENG_F_RT_ENG_P11_DEALER_SIGN                   175
# define RTENG_F_RT_ENG_P11_SESS_CANCEL_FUNCTION          176
# define RTENG_F_RT_ENG_P11_SESS_COPY_OBJECT              177
# define RTENG_F_RT_ENG_P11_SESS_CREATE_OBJECT            178
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT                  179
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT_DIGEST_UPDATE    180
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT_FINAL            181
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT_INIT             182
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT_UPDATE           183
# define RTENG_F_RT_ENG_P11_SESS_DECRYPT_VERIFY_UPDATE    184
# define RTENG_F_RT_ENG_P11_SESS_DERIVE_KEY               185
# define RTENG_F_RT_ENG_P11_SESS_DESTROY_OBJECT           186
# define RTENG_F_RT_ENG_P11_SESS_DIGEST                   187
# define RTENG_F_RT_ENG_P11_SESS_DIGEST_ENCRYPT_UPDATE    188
# define RTENG_F_RT_ENG_P11_SESS_DIGEST_FINAL             189
# define RTENG_F_RT_ENG_P11_SESS_DIGEST_INIT              190
# define RTENG_F_RT_ENG_P11_SESS_DIGEST_KEY               191
# define RTENG_F_RT_ENG_P11_SESS_DIGEST_UPDATE            192
# define RTENG_F_RT_ENG_P11_SESS_ENCRYPT                  193
# define RTENG_F_RT_ENG_P11_SESS_ENCRYPT_FINAL            194
# define RTENG_F_RT_ENG_P11_SESS_ENCRYPT_INIT             195
# define RTENG_F_RT_ENG_P11_SESS_ENCRYPT_UPDATE           196
# define RTENG_F_RT_ENG_P11_SESS_FIND_OBJECTS             197
# define RTENG_F_RT_ENG_P11_SESS_FIND_OBJECTS_FINAL       198
# define RTENG_F_RT_ENG_P11_SESS_FIND_OBJECTS_INIT        199
# define RTENG_F_RT_ENG_P11_SESS_GENERATE_KEY             200
# define RTENG_F_RT_ENG_P11_SESS_GENERATE_KEY_PAIR        201
# define RTENG_F_RT_ENG_P11_SESS_GENERATE_RANDOM          202
# define RTENG_F_RT_ENG_P11_SESS_GET_ATTRIBUTE_VALUE      203
# define RTENG_F_RT_ENG_P11_SESS_GET_FUNCTION_STATUS      204
# define RTENG_F_RT_ENG_P11_SESS_GET_OBJECT_SIZE          205
# define RTENG_F_RT_ENG_P11_SESS_GET_OPERATION_STATE      206
# define RTENG_F_RT_ENG_P11_SESS_GET_SESSION_INFO         207
# define RTENG_F_RT_ENG_P11_SESS_INIT                     208
# define RTENG_F_RT_ENG_P11_SESS_LOCK                     209
# define RTENG_F_RT_ENG_P11_SESS_LOGIN                    210
# define RTENG_F_RT_ENG_P11_SESS_LOGOUT                   211
# define RTENG_F_RT_ENG_P11_SESS_SEED_RANDOM              212
# define RTENG_F_RT_ENG_P11_SESS_SET_ATTRIBUTE_VALUE      213
# define RTENG_F_RT_ENG_P11_SESS_SET_OPERATION_STATE      214
# define RTENG_F_RT_ENG_P11_SESS_SIGN                     215
# define RTENG_F_RT_ENG_P11_SESS_SIGN_ENCRYPT_UPDATE      216
# define RTENG_F_RT_ENG_P11_SESS_SIGN_FINAL               217
# define RTENG_F_RT_ENG_P11_SESS_SIGN_INIT                218
# define RTENG_F_RT_ENG_P11_SESS_SIGN_RECOVER             219
# define RTENG_F_RT_ENG_P11_SESS_SIGN_RECOVER_INIT        220
# define RTENG_F_RT_ENG_P11_SESS_SIGN_UPDATE              221
# define RTENG_F_RT_ENG_P11_SESS_UNLOCK                   222
# define RTENG_F_RT_ENG_P11_SESS_UNWRAP_KEY               223
# define RTENG_F_RT_ENG_P11_SESS_VERIFY                   224
# define RTENG_F_RT_ENG_P11_SESS_VERIFY_FINAL             225
# define RTENG_F_RT_ENG_P11_SESS_VERIFY_INIT              226
# define RTENG_F_RT_ENG_P11_SESS_VERIFY_RECOVER           227
# define RTENG_F_RT_ENG_P11_SESS_VERIFY_RECOVER_INIT      228
# define RTENG_F_RT_ENG_P11_SESS_VERIFY_UPDATE            229
# define RTENG_F_RT_ENG_P11_SESS_WRAP_KEY                 230
# define RTENG_F_RT_ENG_PUBLIC_KEY_TO_BUF                 231
# define RTENG_F_RT_ENG_SET_OSSL_PUB_KEY_FROM_BUF         232
# define RTENG_F_RT_ENG_SET_OSSL_PUB_KEY_FROM_CRYPT       233
# define RTENG_F_RT_ENG_SIGN                              234
# define RTENG_F_RT_ENG_SOFT_EC_KEY_GENERATE              235
# define RTENG_F_RT_ENG_SOFT_EC_KEY_SET_PRIV_KEY          236
# define RTENG_F_RT_ENG_SOFT_EC_KEY_SIGN                  237
# define RTENG_F_RT_ENG_STANDALONE_DESTROY                254
# define RTENG_F_RT_ENG_STANDALONE_FIND_KEY               238
# define RTENG_F_RT_ENG_STANDALONE_FINISH                 240
# define RTENG_F_RT_ENG_STANDALONE_INIT                   241
# define RTENG_F_RT_ENG_STANDALONE_SET_MODULE_PATH        242
# define RTENG_F_RT_ENG_STANDALONE_SET_PKCS11_PATH        248
# define RTENG_F_RT_ENG_STANDALONE_SET_RAND_TOKEN         243
# define RTENG_F_RT_ENG_UNLOAD_ENGINE                     255
# define RTENG_F_RT_ENG_VERIFY                            244
# define RTENG_F_SET_OSSL_PRIV_KEY_FROM_BUF               245
# define RTENG_F_SOFT_DIGESTER_CONSTRUCTOR                246
# define RTENG_F_SOFT_DIGESTER_FINAL                      247

/* Reason codes. */
# define RTENG_R_AMBIGUOUS_P11_URI                        100
# define RTENG_R_BUFFER_TOO_SMALL                         101
# define RTENG_R_COULD_NOT_FIND_PRIVATE_KEY               102
# define RTENG_R_COULD_NOT_FIND_PUBLIC_KEY                103
# define RTENG_R_COULD_NOT_FIND_SYMBOL_IN_LIBRARY         104
# define RTENG_R_COULD_NOT_FIND_TOKEN                     105
# define RTENG_R_COULD_NOT_LOAD_LIBRARY                   106
# define RTENG_R_COULD_NOT_UNLOAD_LIBRARY                 107
# define RTENG_R_CRYPT_BAD_ALG                            108
# define RTENG_R_CRYPT_HAS_BEEN_ALREADY_INITIALIZED       109
# define RTENG_R_CRYPT_INVALID_KEY                        110
# define RTENG_R_CRYPT_INVALID_LENGTH                     111
# define RTENG_R_CRYPT_INVALID_PARAMSET                   112
# define RTENG_R_CRYPT_INVALID_SIGNATURE                  113
# define RTENG_R_CRYPT_NOT_INITIALIZED                    114
# define RTENG_R_CRYPT_NOT_PADDED                         115
# define RTENG_R_CRYPT_OVERLAPPED_DATA                    116
# define RTENG_R_CRYPT_RNG_NOT_INITIALIZED                117
# define RTENG_R_CRYPT_UNKNOWN_ERROR                      118
# define RTENG_R_CRYPT_UNSUPPORTED_ALG                    119
# define RTENG_R_CRYPT_UNSUPPORTED_MODE                   120
# define RTENG_R_ENGINE_HAS_BEEN_ALREADY_CREATED          121
# define RTENG_R_ENGINE_HAS_NOT_BEEN_INITIALIZED          122
# define RTENG_R_ENGINE_NOT_DEFAULT                       123
# define RTENG_R_ERROR_PARSING_KEY_TRANSPORT_INFO         124
# define RTENG_R_FUNCTION_NOT_PERMITTED                   125
# define RTENG_R_INVALID_CIPHER_PARAM_OID                 126
# define RTENG_R_INVALID_IV_LENGTH                        127
# define RTENG_R_INVALID_MAC_KEY_SIZE                     128
# define RTENG_R_MAC_KEY_NOT_SET                          129
# define RTENG_R_MUTEX_LOCK_FAILED                        130
# define RTENG_R_MUTEX_NEW_FAILED                         131
# define RTENG_R_MUTEX_UNLOCK_FAILED                      132
# define RTENG_R_NOT_IN_STANDALONE_MODE                   133
# define RTENG_R_NO_EC_GROUP                              134
# define RTENG_R_NO_PEER_KEY                              135
# define RTENG_R_NO_PKCS11_LIBRARY_LOADED                 136
# define RTENG_R_NO_PUBLIC_KEY                            137
# define RTENG_R_PKCS11_ARGUMENTS_BAD                     138
# define RTENG_R_PKCS11_ATTRIBUTE_READ_ONLY               139
# define RTENG_R_PKCS11_ATTRIBUTE_SENSITIVE               140
# define RTENG_R_PKCS11_ATTRIBUTE_TYPE_INVALID            141
# define RTENG_R_PKCS11_ATTRIBUTE_VALUE_INVALID           142
# define RTENG_R_PKCS11_BUFFER_TOO_SMALL                  143
# define RTENG_R_PKCS11_CANCEL                            144
# define RTENG_R_PKCS11_CANT_LOCK                         145
# define RTENG_R_PKCS11_CRYPTOKI_ALREADY_INITIALIZED      146
# define RTENG_R_PKCS11_CRYPTOKI_NOT_INITIALIZED          147
# define RTENG_R_PKCS11_DATA_INVALID                      148
# define RTENG_R_PKCS11_DATA_LEN_RANGE                    149
# define RTENG_R_PKCS11_DEVICE_ERROR                      150
# define RTENG_R_PKCS11_DEVICE_MEMORY                     151
# define RTENG_R_PKCS11_DEVICE_REMOVED                    152
# define RTENG_R_PKCS11_DOMAIN_PARAMS_INVALID             153
# define RTENG_R_PKCS11_ENCRYPTED_DATA_INVALID            154
# define RTENG_R_PKCS11_ENCRYPTED_DATA_LEN_RANGE          155
# define RTENG_R_PKCS11_FUNCTION_CANCELED                 156
# define RTENG_R_PKCS11_FUNCTION_FAILED                   157
# define RTENG_R_PKCS11_FUNCTION_NOT_PARALLEL             158
# define RTENG_R_PKCS11_FUNCTION_NOT_SUPPORTED            159
# define RTENG_R_PKCS11_FUNCTION_REJECTED                 160
# define RTENG_R_PKCS11_GENERAL_ERROR                     161
# define RTENG_R_PKCS11_HOST_MEMORY                       162
# define RTENG_R_PKCS11_INFORMATION_SENSITIVE             163
# define RTENG_R_PKCS11_KEY_CHANGED                       164
# define RTENG_R_PKCS11_KEY_FUNCTION_NOT_PERMITTED        165
# define RTENG_R_PKCS11_KEY_HANDLE_INVALID                166
# define RTENG_R_PKCS11_KEY_INDIGESTIBLE                  167
# define RTENG_R_PKCS11_KEY_NEEDED                        168
# define RTENG_R_PKCS11_KEY_NOT_NEEDED                    169
# define RTENG_R_PKCS11_KEY_NOT_WRAPPABLE                 170
# define RTENG_R_PKCS11_KEY_SIZE_RANGE                    171
# define RTENG_R_PKCS11_KEY_TYPE_INCONSISTENT             172
# define RTENG_R_PKCS11_KEY_UNEXTRACTABLE                 173
# define RTENG_R_PKCS11_MECHANISM_INVALID                 174
# define RTENG_R_PKCS11_MECHANISM_PARAM_INVALID           175
# define RTENG_R_PKCS11_MUTEX_BAD                         176
# define RTENG_R_PKCS11_MUTEX_NOT_LOCKED                  177
# define RTENG_R_PKCS11_NEED_TO_CREATE_THREADS            178
# define RTENG_R_PKCS11_NEW_PIN_MODE                      179
# define RTENG_R_PKCS11_NEXT_OTP                          180
# define RTENG_R_PKCS11_NO_EVENT                          181
# define RTENG_R_PKCS11_OBJECT_HANDLE_INVALID             182
# define RTENG_R_PKCS11_OK                                183
# define RTENG_R_PKCS11_OPERATION_ACTIVE                  184
# define RTENG_R_PKCS11_OPERATION_NOT_INITIALIZED         185
# define RTENG_R_PKCS11_PIN_EXPIRED                       186
# define RTENG_R_PKCS11_PIN_INCORRECT                     187
# define RTENG_R_PKCS11_PIN_INVALID                       188
# define RTENG_R_PKCS11_PIN_LEN_RANGE                     189
# define RTENG_R_PKCS11_PIN_LOCKED                        190
# define RTENG_R_PKCS11_RANDOM_NO_RNG                     191
# define RTENG_R_PKCS11_RANDOM_SEED_NOT_SUPPORTED         192
# define RTENG_R_PKCS11_SAVED_STATE_INVALID               193
# define RTENG_R_PKCS11_SESSION_CLOSED                    194
# define RTENG_R_PKCS11_SESSION_COUNT                     195
# define RTENG_R_PKCS11_SESSION_EXISTS                    196
# define RTENG_R_PKCS11_SESSION_HANDLE_INVALID            197
# define RTENG_R_PKCS11_SESSION_PARALLEL_NOT_SUPPORTED    198
# define RTENG_R_PKCS11_SESSION_READ_ONLY                 199
# define RTENG_R_PKCS11_SESSION_READ_ONLY_EXISTS          200
# define RTENG_R_PKCS11_SESSION_READ_WRITE_SO_EXISTS      201
# define RTENG_R_PKCS11_SIGNATURE_INVALID                 202
# define RTENG_R_PKCS11_SIGNATURE_LEN_RANGE               203
# define RTENG_R_PKCS11_SLOT_ID_INVALID                   204
# define RTENG_R_PKCS11_STATE_UNSAVEABLE                  205
# define RTENG_R_PKCS11_TEMPLATE_INCOMPLETE               206
# define RTENG_R_PKCS11_TEMPLATE_INCONSISTENT             207
# define RTENG_R_PKCS11_TOKEN_NOT_PRESENT                 208
# define RTENG_R_PKCS11_TOKEN_NOT_RECOGNIZED              209
# define RTENG_R_PKCS11_TOKEN_WRITE_PROTECTED             210
# define RTENG_R_PKCS11_UNKNOWN_ERROR                     211
# define RTENG_R_PKCS11_UNWRAPPING_KEY_HANDLE_INVALID     212
# define RTENG_R_PKCS11_UNWRAPPING_KEY_SIZE_RANGE         213
# define RTENG_R_PKCS11_UNWRAPPING_KEY_TYPE_INCONSISTENT  214
# define RTENG_R_PKCS11_USER_ALREADY_LOGGED_IN            215
# define RTENG_R_PKCS11_USER_ANOTHER_ALREADY_LOGGED_IN    216
# define RTENG_R_PKCS11_USER_NOT_LOGGED_IN                217
# define RTENG_R_PKCS11_USER_PIN_NOT_INITIALIZED          218
# define RTENG_R_PKCS11_USER_TOO_MANY_TYPES               219
# define RTENG_R_PKCS11_USER_TYPE_INVALID                 220
# define RTENG_R_PKCS11_WRAPPED_KEY_INVALID               221
# define RTENG_R_PKCS11_WRAPPED_KEY_LEN_RANGE             222
# define RTENG_R_PKCS11_WRAPPING_KEY_HANDLE_INVALID       223
# define RTENG_R_PKCS11_WRAPPING_KEY_SIZE_RANGE           224
# define RTENG_R_PKCS11_WRAPPING_KEY_TYPE_INCONSISTENT    225
# define RTENG_R_REFERENCES_REMAINED                      226
# define RTENG_R_RNG_ERROR                                227
# define RTENG_R_SESSION_NOT_SET                          228
# define RTENG_R_UKM_NOT_SET                              229
# define RTENG_R_UNKNOWN_KEY_TYPE                         230
# define RTENG_R_UNKNOWN_OID                              231
# define RTENG_R_UNSUPPORTED_ATTR_TYPE                    232
# define RTENG_R_UNWRAP_ERROR                             233
# define RTENG_R_VALUE_HAS_BEEN_ALREADY_SET               234
# define RTENG_R_WRONG_ATTR_TYPE                          243
# define RTENG_R_WRONG_CONTEXT                            235
# define RTENG_R_WRONG_CTRL                               236
# define RTENG_R_WRONG_DATA_FROM_TOKEN                    237
# define RTENG_R_WRONG_ENGINE_ID                          238
# define RTENG_R_WRONG_KEK_LEN                            239
# define RTENG_R_WRONG_KEY                                240
# define RTENG_R_WRONG_KEY_LEN                            241
# define RTENG_R_WRONG_MAC_LEN                            242
# define RTENG_R_WRONG_UKM_LEN                            244
# define RTENG_R_WRONG_URI                                245

# ifdef  __cplusplus
}
# endif
#endif

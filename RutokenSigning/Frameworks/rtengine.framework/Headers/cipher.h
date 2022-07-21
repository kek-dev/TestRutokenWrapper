#ifndef RUTOKEN_ENGINE_CIPHER_H
#define RUTOKEN_ENGINE_CIPHER_H

#include <openssl/obj_mac.h>

enum {
    rt_eng_nid_gost28147_cfb = NID_id_Gost28147_89,
    rt_eng_nid_gost28147_paramset_z_cbc = NID_gost89_cbc,
    rt_eng_nid_gost28147_paramset_a_cnt = NID_gost89_cnt,
    rt_eng_nid_gost28147_paramset_z_cnt = NID_gost89_cnt_12,
    rt_eng_nid_gost28147_paramset_z_ecb = NID_gost89_ecb,
    rt_eng_nid_gost28147_paramset_a_mac = NID_id_Gost28147_89_MAC,
    rt_eng_nid_gost28147_paramset_z_mac = NID_gost_mac_12
};

#endif // RUTOKEN_ENGINE_CIPHER_H

/*! \file p11.h
 *  \brief Заголовочный файл с описанием функций и структур для управления сессиями и ключами.
 */

#ifndef RUTOKEN_ENGINE_P11_H
#define RUTOKEN_ENGINE_P11_H

#include <openssl/evp.h>

#include <cryptoki.h>

#include "mutex.h"


#ifdef __cplusplus
extern "C" {
#endif


/*! \brief Описатель обернутой сессии */
typedef struct rt_eng_p11_session_st rt_eng_p11_session;

/*! \brief Функция создания сессии.
 *  \param function_list -- список функций, полученных от rtpkcs11ecp.
 *  \param handle -- описатель сессии, полученной от rtpkcs11ecp.
 *  \param hold -- параметр передачи прав управления сессией. При его равенстве 1, сессия будет закрыта средствами OpenSSL при удалении описателя. При его равенстве 0, сессия должна быть закрыта пользователем самостоятельно.
 *  \param mutex -- внешний мьютекс для управления сессией. Для использования внутреннего мьютекса необходимо передать NULL.
 *  \return описатель обёрнутой сессии в случае успеха, NULL в случае ошибки.
 */
rt_eng_p11_session *rt_eng_p11_session_wrap(CK_FUNCTION_LIST_PTR function_list, CK_SESSION_HANDLE handle,
                                            int hold, const rt_eng_mutex *mutex);

/*! \brief Функция удаления сессии. */
void rt_eng_p11_session_free(rt_eng_p11_session *session);

/*! \brief Функция увеличения счётчика ссылок.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_p11_session_up_ref(rt_eng_p11_session *session);

/*! \brief Функция блокирования сессии.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_p11_session_lock(rt_eng_p11_session *session);

/*! \brief Функция освобождения сессии.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_p11_session_unlock(rt_eng_p11_session *session);

/*! \brief Получение описателя ключевой пары.
 *  \param session -- описатель обёрнутой сессии.
 *  \param private_key (необязательный) -- описатель закрытого ключа, полученный от rtpkcs11ecp. Если для работы приложения отсутствует необходимость использовать закрытый ключ, то следует установить данный параметр в значение CK_INVALID_HANDLE.
 *  \param public_key -- описатель открытого ключа, полученный от rtpkcs11ecp.
 *  \return описатель ключевой пары в случае успеха, NULL в случае ошибки.
 */
EVP_PKEY *rt_eng_p11_key_pair_wrap(rt_eng_p11_session *session, CK_OBJECT_HANDLE private_key,
                                   CK_OBJECT_HANDLE public_key);

/*! \brief Данная функция делает описатель ключевой пары недействительным.
 *  При использовании ключевой пары, находящейся на токене, могут возникать ситуации, при которых описатель объектов на токене становится более не актуальным, например при сбросе прав доступа к объектам на токене или при физическом удаление ключа из памяти токена. Во избежании неопределённого поведения описатель ключевой пары необходимо делать недействительным.
 *  \param pkey -- описатель ключевой пары.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_p11_key_pair_invalidate(EVP_PKEY *pkey);

/*! \brief Функция добавления в контекст хэширования PKCS11 сессии.
 *  Если в контекст была добавлена хотя бы одна сессия, хэш будет посчитан на токене. При добавлении нескольких сессий в один контекст хэш будет посчитан для каждой из них. При хэшировании на токене данные накапливаются в буфере до вызова final.
 *  \param ctx -- контекст хэширования.
 *  \param session -- описатель обёрнутой сессии.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_md_add1_p11_session(EVP_MD_CTX *ctx, rt_eng_p11_session *session);

#ifdef __cplusplus
}
#endif

#endif // RUTOKEN_ENGINE_P11_H

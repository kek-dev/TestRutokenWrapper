#ifndef RUTOKEN_ENGINE_RAND_H
#define RUTOKEN_ENGINE_RAND_H

#include <stdbool.h>

#include <openssl/engine.h>

#include "p11.h"


#ifdef __cplusplus
extern "C" {
#endif

/*! \brief Включение механизма получения случайных чисел с токена.
 * Для включения этого механизма функцию необходимо вызвать до регистрации rtengine.
 * \param toggle -- включить/выключить.
 * \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_rand_enable(ENGINE *engine, bool toggle);

/*! \brief Установка текущей сессии для получения энтропии.
 *  \param session -- описатель обёрнутой сессии.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_rand_set0_p11_session(rt_eng_p11_session *session);

#ifdef __cplusplus
}
#endif

#endif // RUTOKEN_ENGINE_RAND_H

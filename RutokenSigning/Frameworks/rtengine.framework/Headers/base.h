/*! \file base.h
 *  \brief В данном файле описаны прототипы функций для управления rtengine.
 */

#ifndef RUTOKEN_ENGINE_BASE_H
#define RUTOKEN_ENGINE_BASE_H

#include <openssl/engine.h>

#ifdef __cplusplus
extern "C" {
#endif


/*! \brief Загрузка rtengine в OpenSSL.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_load_engine(void);

/*! \brief Удаление rtengine из OpenSSL. Возвращает ошибку, если остались ссылки на engine.
 *  \return 1 в случае успеха, 0 в случае ошибки.
 */
int rt_eng_unload_engine(void);

/*! \brief Получение экземпляра rtengine. Если функция вызывается до вызова rt_eng_load_engine, поведение не определено.
 *  \return описатель rtengine.
 */
ENGINE *rt_eng_get0_engine(void);


#ifdef __cplusplus
}
#endif

#endif // RUTOKEN_ENGINE_BASE_H

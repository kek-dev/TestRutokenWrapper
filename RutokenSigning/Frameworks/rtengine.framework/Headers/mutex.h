/*! \file mutex.h
 *  \brief Заголовочный файл с описанием структур и функций для управления мьютексами.
 */

#ifndef RUTOKEN_ENGINE_MUTEX_H
#define RUTOKEN_ENGINE_MUTEX_H


#ifdef __cplusplus
extern "C" {
#endif


/*! \brief Структура для хранения мьютекса и его функций. */
typedef struct {
    void *mutex;

    /*! \brief Функция блокирования мьютекса.
     *  \return 1 в случае успеха, 0 в случае ошибки.
     */
    int (*lock)(void *mutex);

    /*! \brief Функция освобождения мьютекса.
     *  \return 1 в случае успеха, 0 в случае ошибки.
     */
    int (*unlock)(void *mutex);
} rt_eng_mutex;


#ifdef __cplusplus
}
#endif

#endif // RUTOKEN_ENGINE_MUTEX_H

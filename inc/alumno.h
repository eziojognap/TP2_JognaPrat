/***************************************************************************************************
 * @file    alumno.h
 * @author  eziojognap
 * @date    16/4/23
 * @brief   Archivo main.c del trabajo practico 2 de Sistemas Embebidos UNT
 **************************************************************************************************/
/************************************* C++ compilar como C ****************************************/
#ifdef __cplusplus /*Esta definición se usa para compilar en c codigo que es de c++*/
extern "C" {
#endif

/************************************* INCLUDES ***************************************************/
#include <stdint.h>

/************************************* MACROS AND DEFINES *****************************************/
#ifndef ALUMNO_H
#define ALUMNO_H
#endif

#define FIELD_SIZE 50

/************************************* TYPEDEFS ***************************************************/
/// Estructura que almacena los datos del alumno
typedef struct alumno_s {
    char apellido[FIELD_SIZE]; //!< Almacena el apellido del alumno
    char nombre[FIELD_SIZE];   //!< Almacena el nombre del alumno
    uint32_t documento;        //!< Almacena el numero de documento del alumno
} const *alumno_t;

/************************************* EXPORTED VARIABLES *****************************************/

/************************************* GLOBAL FUNCTION PROTOTYPES *********************************/
int Serializar(alumno_t alumno, //!< Puntero a la estructura con los datos del alumno
               char cadena[],   //!< Puntero a la cadena resultado
               uint32_t espacio //!< Espacio disponible en la cadena de resultado
);

#ifdef __cplusplus /*Con esto se cierra la la def condicional para compilar en c codigo que es de  \
                      c++*/
}
#endif

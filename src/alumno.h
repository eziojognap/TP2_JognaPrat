/***************************************************************************************************
 * @file    ${alumno.h}
 * @author  ${eziojognap}
 * @date    ${16/4/23}
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
typedef struct alumno_s {
    char apellido[FIELD_SIZE];
    char nombre[FIELD_SIZE];
    uint32_t documento;
} const * alumno_t;

/************************************* EXPORTED VARIABLES *****************************************/

/************************************* GLOBAL FUNCTION PROTOTYPES *********************************/
int Serializar(alumno_t alumno, char cadena[], uint32_t espacio);

#ifdef __cplusplus /*Con esto se cierra la la def condicional para compilar en c codigo que es de  \
                      c++*/
}
#endif

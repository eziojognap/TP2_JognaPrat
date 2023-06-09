/**
 * @file    main.c
 * @author  eziojognap
 * @date    16/4/23
 * @brief   Archivo main.c del trabajo practico 2 de Sistemas Embebidos UNT
 **/

/************************************* INCLUDES ***************************************************/
#include "alumno.h"
#include <stdio.h>

/************************************* EXTERN VARIABLES *******************************************/

/************************************* PRIVATE MACROS AND DEFINES *********************************/

/************************************* PRIVATE TYPEDEFS *******************************************/

/************************************* STATIC VARIABLES *******************************************/

/************************************* GLOBAL VARIABLES *******************************************/

/************************************* STATIC FUNCTION PROTOTYPES *********************************/

/************************************* STATIC FUNCTIONS *******************************************/

/************************************* GLOBAL FUNCTIONS *******************************************/

/// @brief Funcion Principal del archivo main.c

int main(void) {
    static const struct alumno_s yo = {
        .apellido = "Jogna Prat",
        .nombre = "Ezio",
        .documento = 41649861,
    };
    char cadena[128];

    if (Serializar(&yo, cadena, sizeof(cadena)) >= 0) {
        printf("%s\n", cadena);
    } else {
        printf("Error al serializar\n");
    }
    return 0;
}
/*
 * Este programa esta diseñado para que el usuario
 * ponga el mes y el año para que el mismo
 * programa le diga el numero de dias y si es
 * año bisiesto.
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 31 de agosto del 2018
 */

#include <stdio.h>

int main() {
    int mes, year;
    printf("Inserte el mes:\n");
    scanf("%i", &mes);
    printf("Inserte el año:\n");
    scanf("%i", &year);
//Los meses
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Este mes tiene 31 dias\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Este mes tiene 30 dias\n");
            break;
        case 2:
            if (year % 4 == 0) {
                printf("Este mes tiene 29 dias\n");
            } else {
                printf("Este mes tiene 28 dias\n");
            }
            break;
            //Esta instruccion es por si el usuario intenta meter un numero que tecnicamente
            //no es un mes
        default:
            printf("Este no es un mes\n");
    }
    //Aqui indicaremos si es año bisiesto
    if (year % 4 == 0) {
        printf("Este año tuvo 366 dias\n");
    } else {
        printf("Este año tuvo 365 dias\n");
    }
    return (0);
}


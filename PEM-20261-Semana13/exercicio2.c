/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Estudar o tamanho de ponteiro    *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    // mostrando tamanho dos ponteiros
    printf("Ponteiro int: %zu bytes\n", sizeof(int*));
    printf("Ponteiro float: %zu bytes\n", sizeof(float*));
    printf("Ponteiro double: %zu bytes\n", sizeof(double*));
    printf("Ponteiro char: %zu bytes\n", sizeof(char*));

    /*
    O tamanho dos ponteiros normalmente e igual,
    porque todos armazenam apenas enderecos de memoria.
    */

    return 0;
}
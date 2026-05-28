/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Teste da Biblioteca                 *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>
#include "stringutil.h"

int main() {

    char s1[] = "Lucas";
    char s2[] = "radar";

    printf("Vogais: %d\n", contaVogais(s1));

    inverteCString(s1);

    printf("Invertida: %s\n", s1);

    printf("Palindromo: %d\n", ePalindromo(s2));

    return 0;
}
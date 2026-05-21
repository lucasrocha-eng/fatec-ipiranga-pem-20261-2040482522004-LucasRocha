/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Manipular ponteiros              *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    // declarando variaveis
    int valorInt = 10;
    float valorFloat = 11.5;
    char valorChar = 'A';

    // ponteiros recebendo os enderecos
    int *ptrInt = &valorInt;
    float *ptrFloat = &valorFloat;
    char *ptrChar = &valorChar;

    printf("Valor int: %d\n", valorInt);
    printf("Endereco da variavel: %p\n", (void*)&valorInt);
    printf("Endereco armazenado no ponteiro: %p\n", (void*)ptrInt);
    printf("Valor acessado pelo ponteiro: %d\n\n", *ptrInt);

    printf("Valor float: %.2f\n", valorFloat);
    printf("Endereco da variavel: %p\n", (void*)&valorFloat);
    printf("Endereco armazenado no ponteiro: %p\n", (void*)ptrFloat);
    printf("Valor acessado pelo ponteiro: %.2f\n\n", *ptrFloat);

    printf("Valor char: %c\n", valorChar);
    printf("Endereco da variavel: %p\n", (void*)&valorChar);
    printf("Endereco armazenado no ponteiro: %p\n", (void*)ptrChar);
    printf("Valor acessado pelo ponteiro: %c\n", *ptrChar);

    return 0;
}
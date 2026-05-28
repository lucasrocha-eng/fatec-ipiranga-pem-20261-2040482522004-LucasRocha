/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 11                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    int v[6] = {1,2,3,4,5,6};
    int *p = v;
    int soma = 0;

    for(int i = 0; i < 6; i++) {

        printf("Valor: %d\n", *(p+i));
        printf("Endereco: %p\n", (void*)(p+i));

        soma += *(p+i);

        *(p+i) *= 2;
    }

    printf("\nSoma: %d\n", soma);

    printf("\nVetor dobrado:\n");

    for(int i = 0; i < 6; i++) {
        printf("%d ", *(p+i));
    }

    return 0;
}
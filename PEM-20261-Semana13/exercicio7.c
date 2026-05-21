/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Percurso com Incremento          *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    int vetor[8] = {10, 5, 7, 20, 3, 15, 8, 12};

    int *p = vetor;

    int soma = 0;
    int maior = *p;
    int menor = *p;

    // percorrendo o vetor
    for(int i = 0; i < 8; i++) {

        printf("Valor: %d\n", *(p + i));
        printf("Endereco: %p\n\n", (void*)(p + i));

        soma += *(p + i);

        if(*(p + i) > maior) {

            maior = *(p + i);
        }

        if(*(p + i) < menor) {

            menor = *(p + i);
        }
    }

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", soma / 8.0);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
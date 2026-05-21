/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Funcao com Multiplos Retornos    *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

// funcao para calcular estatisticas
void estatisticas(int *v, int n, int *soma, float *media, int *maior, int *menor) {

    *soma = 0;
    *maior = *v;
    *menor = *v;

    for(int i = 0; i < n; i++) {

        *soma += *(v + i);

        if(*(v + i) > *maior) {

            *maior = *(v + i);
        }

        if(*(v + i) < *menor) {

            *menor = *(v + i);
        }
    }

    *media = *soma / (float)n;
}

int main() {

    int vetor[6] = {10, 20, 5, 40, 15, 8};

    int soma;
    int maior;
    int menor;
    float media;

    // chamando a funcao
    estatisticas(vetor, 6, &soma, &media, &maior, &menor);

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
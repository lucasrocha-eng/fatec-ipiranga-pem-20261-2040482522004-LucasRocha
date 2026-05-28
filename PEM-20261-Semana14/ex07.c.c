/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 07                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    float v[10];
    float soma = 0, media;
    float maior, menor;
    float somaAcima = 0;

    for(int i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &v[i]);

        soma += v[i];

        if(i == 0) {
            maior = menor = v[i];
        }

        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    media = soma / 10;

    for(int i = 0; i < 10; i++) {
        if(v[i] > media) {
            somaAcima += v[i];
        }
    }

    printf("\nMedia: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Soma acima da media: %.2f\n", somaAcima);

    return 0;
}
/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Busca em Matriz com Ponteiro     *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    int matriz[4][4] = {
        {5, 8, 12, 3},
        {7, 25, 1, 9},
        {14, 6, 18, 2},
        {11, 4, 10, 16}
    };

    // ponteiro para a matriz
    int *p = &matriz[0][0];

    int maior = *p;
    int linha = 0;
    int coluna = 0;

    // percorrendo como array linear
    for(int i = 0; i < 16; i++) {

        if(*(p + i) > maior) {

            maior = *(p + i);

            linha = i / 4;
            coluna = i % 4;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Linha: %d\n", linha);
    printf("Coluna: %d\n", coluna);

    return 0;
}
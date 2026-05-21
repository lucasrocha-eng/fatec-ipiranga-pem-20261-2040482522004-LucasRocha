/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Troca de Valores via Referencias *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

// funcao para trocar os valores
void trocar(int *a, int *b) {

    int temp = *a;

    *a = *b;
    *b = temp;
}

int main() {

    int x = 5;
    int y = 10;

    printf("Antes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // passando os enderecos
    trocar(&x, &y);

    printf("\nDepois da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
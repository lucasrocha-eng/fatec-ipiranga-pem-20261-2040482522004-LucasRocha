
/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 14                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/

#include <stdio.h>

int mdc(int a, int b) {

    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int potencia(int base, int exp) {

    int r = 1;

    for(int i = 0; i < exp; i++) {
        r *= base;
    }

    return r;
}

int primo(int n) {

    if(n < 2)
        return 0;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void binario(int n) {

    int v[32], i = 0;

    while(n > 0) {
        v[i++] = n % 2;
        n /= 2;
    }

    for(int j = i-1; j >= 0; j--) {
        printf("%d", v[j]);
    }

    printf("\n");
}

int main() {

    int op;

    do {

        printf("\n1-MDC\n2-Potencia\n3-Primo\n4-Binario\n0-Sair\n");
        scanf("%d", &op);

        if(op == 1) {

            int a,b;
            scanf("%d%d", &a, &b);
            printf("MDC: %d\n", mdc(a,b));

        } else if(op == 2) {

            int b,e;
            scanf("%d%d", &b, &e);
            printf("Potencia: %d\n", potencia(b,e));

        } else if(op == 3) {

            int n;
            scanf("%d", &n);

            if(primo(n))
                printf("Primo\n");
            else
                printf("Nao primo\n");

        } else if(op == 4) {

            int n;
            scanf("%d", &n);
            binario(n);
        }

    } while(op != 0);

    return 0;
}
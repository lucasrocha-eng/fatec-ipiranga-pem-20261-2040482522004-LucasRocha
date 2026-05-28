/*----------------------------------------------------------*
* FATEC Ipiranga *
* Disciplina: Programaçao Estruturada e Modular *
* Prof. Veríssimo *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 04 *
* Data - 28/05/2026 *
* Autor: Lucas Rocha *
* RA : 004 *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    double a, b, c;

    printf("Digite os lados do triangulo: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a+b > c && a+c > b && b+c > a) {

        if(a == b && b == c) {
            printf("Triangulo equilatero\n");
        } else if(a == b || a == c || b == c) {
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }

        double maior = a;

        if(b > maior) maior = b;
        if(c > maior) maior = c;

        double x, y;

        if(maior == a) {
            x = b;
            y = c;
        } else if(maior == b) {
            x = a;
            y = c;
        } else {
            x = a;
            y = b;
        }

        double m2 = maior * maior;
        double soma = x*x + y*y;

        if(m2 == soma) {
            printf("Triangulo retangulo\n");
        } else if(m2 > soma) {
            printf("Triangulo obtusangulo\n");
        } else {
            printf("Triangulo acutangulo\n");
        }

    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}
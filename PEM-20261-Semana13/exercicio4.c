/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Mapa de Enderecos de um Struct   *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

// struct do aluno
struct Aluno {

    char nome[50];
    int matricula;
    float media;
};

int main() {

    struct Aluno aluno;

    // preenchendo os dados
    strcpy(aluno.nome, "Lucas");
    aluno.matricula = 202601;
    aluno.media = 8.5;

    // mostrando os enderecos
    printf("Endereco nome: %p\n", (void*)&aluno.nome);
    printf("Endereco matricula: %p\n", (void*)&aluno.matricula);
    printf("Endereco media: %p\n", (void*)&aluno.media);

    /*
    Os campos ficam proximos na memoria porque
    a struct armazena os dados de forma sequencial.
    */

    return 0;
}
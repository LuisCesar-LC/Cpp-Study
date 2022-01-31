#include <stdio.h>

int main (){

    struct estudante {
        int nMatricula;
        char nome[30];
        char dataBacharelado[10];
        float mensalidade;
    };

    struct estudante stdu1, *ptr_stdu1;

    ptr_stdu1 = &stdu1;

    printf("\n ____________________ COLETA DE DADOS ____________________");
    printf("\n Informe seu número de matrícula: ");
    scanf("%d", ptr_stdu1->nMatricula);
    printf("\n Informe seu nome: ");
    scanf("%s", ptr_stdu1->nome);
    printf("\n Informe sua data de bacharelado: ");
    scanf("%s", ptr_stdu1->dataBacharelado);
    printf("\n Informe sua mensalidade: ");
    scanf("%f", ptr_stdu1->mensalidade);

    printf("\n ____________________ APRESENTACAO DOS DADOS ____________________");

    return 0;
}
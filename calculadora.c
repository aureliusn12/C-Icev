#include <stdlib.h>
#include <stdio.h>

int operacao, valor1, valor2;
float res;

int MenuCalculadora (){
    printf("+=======================================+\n");
    printf("|          CALCULADORA SIMPLES          |\n");
    printf("+=======================================+\n");
    printf("|      1-SOMAR        |   2-SUBTRAIR    |\n");
    printf("+=======================================+\n");
    printf("|  3-MULTIPLICAR      |   4-DIVIDIR     |\n");
    printf("+=======================================+\n");
    printf("Digite a operacao desejada ou 5 para sair\n");
    scanf("%d", &operacao);
}

int Entrada(){
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
}

int somar(){
    res = valor1 + valor2;
}
int subtrair(){
    res = valor1 - valor2;
}
int multiplicar(){
    res = valor1*valor2;
}
int dividir(){
    res = valor1/valor2;
}
int saida(){
    printf("O resultado da operacao e: %.2lf\n", res);
}
int main (){
do{   
    MenuCalculadora();
    switch(operacao)
    {
    case 1:
        system("cls");
        Entrada();
        somar();
        saida();
        break;
    case 2:
        system("cls");
        Entrada();
        subtrair();
        saida();
        break;
    case 3:
        system("cls");
        Entrada();
        multiplicar();
        saida();
        break;
    case 4:
        system("cls");
        Entrada();
        dividir();
        saida();
        break;
    case 5:
        break;
    default:
        printf("Opcao invalida! \n");
        break;
    }
}
while(operacao != 5);
}



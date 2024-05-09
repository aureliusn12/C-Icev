



/*REVER A QUESTAO DE LETRAS E DIVISAO POR ZERO*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float valor1, valor2, res;
int operacao;

void MenuCalculadora (){
    printf("+=======================================+\n");
    printf("|          CALCULADORA SIMPLES          |\n");
    printf("+=======================================+\n");
    printf("|  1-SOMAR            |   2-SUBTRAIR    |\n");
    printf("+=======================================+\n");
    printf("|  3-MULTIPLICAR      |   4-DIVIDIR     |\n");
    printf("+=======================================+\n");
    printf("|  5-MUDAR NUMEROS    |   6-POTENCIA    |\n");
    printf("+=======================================+\n");
    printf("Digite a operacao desejada ou 7 para sair\n");
    scanf("%d", &operacao);
}

void Entrada(){
     printf("Digite o primeiro valor: \n");
     scanf("%f", &valor1);
     printf("Digite o segundo valor: \n");
     scanf("%f", &valor2);
} 

void somar(){
    res = valor1 + valor2;
}
void subtrair(){
    res = valor1 - valor2;
}
void multiplicar(){
    res = valor1*valor2;
}
void dividir(){
    res = valor1/valor2;
    if(valor2 == 0)
    printf("divisor nulo. Insira numero valido.");
}
void MudarNumeros(){
    printf("Digite o primeiro valor: \n");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &valor2);
}
void Potencia(){
    res = pow(valor1, valor2);
}
void saida(){
    printf("O resultado da operacao e: %.2lf\n", res);
}
int main (){

do{   
    MenuCalculadora();

    switch(operacao)
    {
        if(valor1 > 7 && valor1 < 0)
        printf("insira uma tecla valido.");
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
        system("cls");
        Entrada();
        MudarNumeros();
        break;
    case 6:
        system("cls");
        Entrada();
        Potencia();
        break;
    case 7:
        break;
    default:
        printf("Opcao invalida! \n");
        break;
    }
}
while(operacao != 5);
}



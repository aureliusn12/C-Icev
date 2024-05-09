/*Implemente uma algoritmo que capaz de imprimir o mês do ano, sendo que quando o
usuário digitar entre o intervalo de 1 a 12 será impresso o mês correspondente ao número (Ex.
Se o usuário digitar o número 3 deverá ser impresso o mês de MARÇO). O algoritmo deverá
prever os valores digitados fora desse intervalo estabelecido.*/

#include <stdio.h>

int main() {
    int numero_mes;

    printf("Digite um número entre 1 e 12 para imprimir o mes correspondente: ");
    scanf("%d", &numero_mes);

    switch(numero_mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Numero invalido! Por favor, digite um número entre 1 e 12.\n");
            break;
    }
/*Implemente uma algoritmo que represente a situação a seguir: Lê três números inteiros
positivos apresentando como saida o maior valor digitado entre eles. O algoritmo deverá
prever os valores iguais, caso isso aconteça apresentar a mensagem: “Todos os valores
digitados são iguais”.*/

#include <stdio.h>
#include <stdlib.h>

int numero1, numero2, numero3;

int main(){

printf("Digite 3 numeros inteiros positivos: \n");
scanf("%d %d %d", &numero1, &numero2, &numero3);

if(numero1 > numero2 && numero1 > numero3){
    printf("O maior numero positivo é: %d \n", numero1);
}
else if(numero2 > numero1 && numero2 > numero3){
    printf("O maior numero positivo é: %d\n", numero2);
}
else if(numero3 > numero2 && numero3 > numero1){
    printf("O maior numero positivo é: %d \n", numero3);
}
else if ( numero1 == numero2 && numero3 == numero1){
    printf("Todos os numeros sao iguais");
}



}

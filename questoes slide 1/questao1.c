/*Implemente uma algoritmo que represente a situação a seguir: Se salario maior que 1800
reais e menor que 8000 mil reais, deverá ser apresentada a mensagem de saída 'Salário
válido para financiamento’. Caso contrário deverá ser apresentada a mensagem de saída
'Salário fora da faixa permitida para financiamento‘*/

#include <stdio.h>
#include <stdlib.h>

int salario;

int main(){

printf("Insira seu salario: \n");
scanf("%d", salario);

if(salario >=1800 && salario <= 8000){
    printf("salario valido para financiamento");
}
else if(salario <=1800 || salario >= 8000){
    printf("salario fora da taxa permitida para financiamento");
}


}
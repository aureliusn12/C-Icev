/*Escreva um algoritmo que determine o grau de obesidade de uma pessoa,
sendo fornecido o peso e a altura da pessoa. O grau de obesidade é determinado
pelo índice de massa corpórea(IMC) (massa=peso/altura2) através da tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float altura, peso, imc;

int main(){

int repeat = 1;

do{
    printf("Insira sua altura: \n");
    scanf("%f", &altura);
    printf("Insira seu peso: \n");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

if(imc > 0 && imc < 26){
    printf("Seu grau de obesidade e normal. \n");
}
else if(imc >= 26 && imc < 30){
    printf("Seu grau de obesidade e obeso. \n");
}
else if(imc >= 30){
    printf("Seu grau de obesidade e morbido. \n");
}
else if(peso == 0 || altura == 0){
    printf("Insira uma idade e/ou peso validos. \n");
}
printf("Digite 1 para recomecar e 0 para encerrar: \n");
scanf("%d", &repeat);

}while(repeat == 1);
}

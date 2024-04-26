/*Implemente uma algoritmo que calcule a raiz quadrada de um numero descartando a
possibilidade do número ser igual a zero. Caso contrário isso aconteça apresentar a
mensagem de saída ‘Informe um valor maior que zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;
float raiz;

int main(){
    int repeat = 1;
do{

printf("Digite um numero para descobrir sua raiz quadrada \n");
scanf("%d", &numero);

raiz = (float)sqrt(numero);

if(numero > 0){
    printf("%.4lf", raiz);
}
else {
    printf("informe um valor maior que 0 \n");
}
 printf("Pressione 1 para repetir e 0 para encerrar.\n");
    scanf("%d", &repeat);

}while(repeat == 1);
}
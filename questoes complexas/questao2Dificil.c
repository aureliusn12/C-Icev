/*QUESTAO: Implemente um Algoritmo em C que receba via teclado a sigla
dos estados(UF) do Nordeste e seja impresso Ex. Se informado
PE “Você é Pernambucano” Se PI “Você é Piauiense” etc.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char sigla[2];
char opcao[30];

int main(){

int repeat = 1;

do
{
    printf("Insira a sigla do seu estado do nordeste: \n");
    scanf("%s", &sigla);
    if (strcmp(sigla, "PE") == 0){
        printf("Voce e pernambucano\n");
    }
    else if(strcmp(sigla, "CE") == 0){
        printf("Voce e cearense\n");
    }
    else if(strcmp(sigla, "PI") == 0){
        printf("Voce e piauiense\n");
    }
    else if(strcmp(sigla, "BA") == 0){
        printf("Voce é baiano\n");
    }   
    else if (strcmp(sigla, "MA") == 0){
        printf("Voce e maranhense\n");
    }
    else if (strcmp(sigla, "AL") ==0){
        printf("Voce e alagoano\n");
    }
    else if (strcmp(sigla, "PB") ==0){
        printf ("Voce e paraibano\n");
    }
    else if (strcmp(sigla, "SE")==0){
        printf("Voce e sergipano\n");
    }
    else if (strcmp(sigla, "RN") ==0){
        printf("Voce e potiguar\n");
    }
    else {
        printf("Insira uma sigla valida.\n");
    }
    printf("Pressione 1 para repetir e 0 para encerrar.\n");
    scanf("%d", &repeat);
    
} while (repeat==1);



}
/*Implemente uma matriz, que o usuário possa informar as dimensões, que seja capaz de imprimir uma matriz multiplicada por outra.*/
#include<stdio.h>
#include<stdlib.h>

int i, j;
int DlinhaA, DcolunaA, DlinhaB, DcolunaB;

int main(){
    printf("Informe a dimensao da linha da matriz A: \n");
    scanf("%d", &DlinhaA);
    printf("Informe a dimensao da coluna da matriz B: \n");
    scanf("%d", &DcolunaA);
    printf("Informe a dimensao da linha da matriz B: \n");
    scanf("%d", &DlinhaB);
    printf("Informe a dimensao da coluna da matriz B: \n");
    scanf("%d", &DcolunaB);
    if(DcolunaA==DlinhaB){

    int matrizA [DlinhaA] [DcolunaA];
    printf("Insira os valores da matriz A: %d x %d \n", DlinhaA, DcolunaA);
    for(i=0; i<DlinhaA; i++){
        for(j=0; j<DcolunaA; i++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i=0;i<DlinhaA; i++){
        for(j=0; j<DcolunaA; j++){
            printf("|%4d", matrizA[i][j]);
        }
        printf("|\n");
    }
    int matrizB [DlinhaB][ DcolunaB];
     printf("Insira os valores da matriz B: %d x %d \n", DlinhaB, DcolunaB);
    for(i=0; i<DlinhaB; i++){
        for(j=0; j<DcolunaB; i++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(i=0;i<DlinhaB; i++){
        for(j=0; j<DcolunaB; j++){
            printf("|%4d", matrizB[i][j]);
        }
        printf("|\n");
    }
    }
    else{
        printf("Nao e possivel realizar esta multiplicacao.\n");
    }
}

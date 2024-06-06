/*1. Implemente uma matriz tridimensional que receba valores inteiros e imprima o resultado!*/

#include <stdlib.h>
#include <stdio.h>

int i, j;
int Dlinha, Dcoluna;

int main(){
    printf("Informe a dimensao da linha: \n");
    scanf("%d", &Dlinha);
    printf("Informe a dimensao da coluna: \n");
    scanf("%d", &Dcoluna);

    int matriz [Dlinha] [Dcoluna];
    printf("Informe os valores da matriz: %d x %d \n", &i, &j);
    for (i=0; i<Dlinha; i++){
        for (j=0; j<Dcoluna; j++){
            Scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<Dlinha; i++){
        for(j=0; j<Dcoluna; j++){
            printf("|4%d", matriz [i][j]);
            printf("\n");
        }
    }





}
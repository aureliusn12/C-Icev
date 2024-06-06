/*Desenvolva uma matriz bidimensional que receba valores inteiros e troque a posição dos
valores digitados (Ex. A11 por A12 e B11 por B12).*/
#include<stdio.h>
#include<stdlib.h>

int i, j;
int Dlinha, Dcoluna;
int aux; 

int main(){
printf("Informe a dimensao da linha: \n");
scanf("%d", &Dlinha);
printf("Informe a dimensao da coluna: \n");
scanf("%d", &Dcoluna);

int matriz [Dlinha] [Dcoluna];
printf("Informe os valores da matriz: %d x %d \n", Dlinha, Dcoluna);
for(i=0; i<Dlinha; i++){
    for(j=0; j<Dcoluna; j++){
        scanf("%d", &matriz[i][j]);
    }
}
for(i=0; i<Dlinha; i++){
    for(j=0; j<Dcoluna; j++){
        printf("|%4d", matriz[i][j]);
    }
        printf("|\n");
}
printf("\n");
aux=matriz[1][2];
matriz[1][2]=matriz[1][1];
matriz[1][1]=aux;

for(i=0; i<Dlinha; i++){
    for(j=0; j<Dcoluna; j++){
        printf("|%4d", matriz[i][j]);
    }
        printf("|\n");
}
}
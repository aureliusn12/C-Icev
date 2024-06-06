/*Implementar um Algoritmo utilizando a função Struct para cadastrar
4 notas e calcular a média, com os seguintes dados (Nome do Aluno,
Nota, e média)*/
#include <stdlib.h>
#include <stdio.h>

struct FichaAluno
{
char NomeAluno[50];
float nota[4];
float media;
};

int main(){
    int i;
    struct FichaAluno aluno;
    aluno.media = 0;
    print("Insira o nome do aluno: \n");
    scanf("%s", aluno.NomeAluno);
    for (i = 0; i < 4; i++){
        printf("Insira a nota %d: \n", i+1);
        scanf("%.2lf", aluno.nota[i]);
        aluno.media += (aluno.nota[i] /4);
        printf("%.2lf", &aluno.media);
    }
    
}
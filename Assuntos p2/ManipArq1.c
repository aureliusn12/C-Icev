/*Implementar um Algoritmo com as seguintes Manipulações:
• Criar um arquivo (Algoritmo.txt)
• Gravar (Nome do aluno, curso e disciplina)
• Lê todo o conteúdo gravado no Arquivo */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

FILE *arquivo;
char NomeAluno[50], curso[30], disciplina[30];

int main(){
    arquivo = fopen("../Arquivo.txt", "w+");
    for(int i = 0; i < 5; i++) {
        printf("Insira o nome do aluno: \n");
        scanf("%s", NomeAluno);
        printf("Insira o curso: \n");
        scanf("%s", curso);
        printf("Insira a disciplina: \n");
        scanf("%s", disciplina);
        fprintf(arquivo, "nome : %s |", NomeAluno);
        fprintf(arquivo, "curso: %s |", curso);
        fprintf(arquivo, "Disciplina : %s |\n", disciplina);


    }
    fclose(arquivo);
}
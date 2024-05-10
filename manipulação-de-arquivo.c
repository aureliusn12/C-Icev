#include <stdio.h>
#include <stdlib.h>

FILE *arquivo;
char nome[50], DataNasc[20], tamanhoDaJeba[4], nomearquivo[20], str[40];

int main(){
    printf('Informe o nome do arquivo: Ex. aluno.txt \n');
    scanf("%s", &nomearquivo);
    sprintf(str, "c://temp//%s", nomearquivo);
    arquivo = fopen (str, "w+");
    if(arquivo == 0)
        printf("Erro na leitura do arquivo\n");
    else
        printf("Arquivo criado com sucesso\n");
    printf("Informe seu nome:\n");
    scanf("%s", &nome);
    printf("Informe a data de nascimento: ex. 00/00/0000 \n");
    scanf("%s", &DataNasc);
    printf("Informe o tamanho da sua jeba:\n");
    scanf("%s", &tamanhoDaJeba);
        fprintf(arquivo, "Nome : %s\n", nome);
        fprintf(arquivo, "Nascimento : %s\n", DataNasc);
        fprintf(arquivo, "Medida da jeba : %s\n", tamanhoDaJeba);
        fclose(arquivo);
        system("pause");

}

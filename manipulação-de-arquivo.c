#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

FILE *arquivo;
char nome[50], DataNasc[20], tamanhoDaJeba[4], linha[250], nomearquivo[30], str[80];
int i;

void LerArquivo(){
    sprintf(str, "C://temp//%s", nomearquivo);
    arquivo = fopen(str, "r");
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
    fclose(arquivo);
}

int main(){
    setlocale(LC_ALL,"");
    printf("Informe o nome do arquivo: Ex. Aluno.txt \n");
    gets(nomearquivo);
    sprintf(str, "..//%s", nomearquivo);
    arquivo = fopen(str, "w+");

    if(arquivo == 0)
        printf("Erro na leitura do arquivo\n");
    else
        printf("Arquivo criado com sucesso\n");

for(i =1; i<=5;i++){
    printf("Informe seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Informe a data de nascimento:\n");
    fgets(DataNasc, sizeof(DataNasc), stdin);
    printf("Informe o tamanho da sua jeba:\n");
    fgets(tamanhoDaJeba, sizeof(tamanhoDaJeba), stdin);
    printf("Aluno Numero : %d\n", i);
        fprintf(arquivo,"Matricula : %d\n", i);
        fprintf(arquivo,"Nome: %s\n",nome);
        fprintf(arquivo,"Nascimento : %s\n", DataNasc);
        fprintf(arquivo,"Medida da jeba : %s\n", tamanhoDaJeba);
}
        fclose(arquivo);
        system("pause");
}

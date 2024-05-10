#include <stdio.h>
#include <stdlib.h>

FILE *arquivo;
char nome[50], DataNasc[20], tamanhoDaJeba[4], linha[250], nomearquivo[30], str[80];

void LerArquivo(){
    sprintf(str, "C://temp//%s", nomearquivo);
    arquivo = fopen(str, "r");
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
    fclose(arquivo);
}

int main(){
    printf("Informe o nome do arquivo: Ex. Aluno.txt \n");
    gets(nomearquivo);
    sprintf(str, "..//%s", nomearquivo);
    arquivo = fopen(str, "w+");

    if(arquivo == 0)
        printf("Erro na leitura do arquivo\n");
    else
        printf("Arquivo criado com sucesso\n");
    printf("Informe seu nome:\n");
    gets(nome);
    printf("Informe a data de nascimento:\n");
    scanf("%s", &DataNasc);
    printf("Informe o tamanho da sua jeba:\n");
    scanf("%s", &tamanhoDaJeba);
        fprintf(arquivo,"Nome : %s\n", nome);
        fprintf(arquivo,"Nascimento : %s\n", DataNasc);
        fprintf(arquivo,"Medida da jeba : %s\n", tamanhoDaJeba);
        fclose(arquivo);
        system("pause");
    
}

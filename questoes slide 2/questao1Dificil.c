#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

char instituicao[30];
char curso[30];
char disciplina[30];
char aluno[30];

int main (){

UINT CPAGE_UTF8 = 65001;/*https://cursos.alura.com.br/forum/topico-windows-e-palavras-com-acentuacao-61327*/
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);
setlocale(LC_ALL, "Brazilian_Portuguese");


printf("Informe a instituição: \n");
gets(instituicao);

printf("Informe seu curso: \n");
gets(curso);

printf("informe a disciplina: \n");
gets(disciplina);

printf("insira seu nome: \n");
gets(aluno);

fflush(stdin);  /*A função fflush descarrega os buffers de saída de um fluxo de dados. Isto é, qualquer dado ainda não escrito no disco e guardado nos buffers temporários de saída, é escrito. Com isso, o buffer é limpo, usei ela por causa do gets, porque ela pode ler caracteres além do tamanho da string passada como parâmetro, causando uma falha de segurança conhecida como buffer overflow*/

// Saída de dados

printf("Carregando dados...\n");
printf("Instituição:%s \n,", instituicao);
printf("Curso......:%s \n", curso);
printf("Disciplina.:%s \n", disciplina);
printf("Aluno......:%s \n", aluno);

}
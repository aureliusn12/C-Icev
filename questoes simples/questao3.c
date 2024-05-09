/*Implemente uma algoritmo que represente a situação a seguir: Se a idade for maior ou
igual 18 anos e idade menor ou igual 95 anos e o resultado do exame de legislação for
APROVADO, então apresentar a mensagem de saída 'Sua carteira de motorista estará pronta
em uma semana’. Caso contrário apresentar a mensagem de saída 'Você não possui idade
permitida ou não passou no teste de legislação*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int idade;
char aprovado[30];

int main(){
UINT CPAGE_UTF8 = 65001;/*https://cursos.alura.com.br/forum/topico-windows-e-palavras-com-acentuacao-61327*/
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);
setlocale(LC_ALL, "Brazilian_Portuguese");

printf("Insira sua idade: \n");
scanf("%d", &idade);

printf("Insira o resultado do exame de legislação: \n");
scanf("%s", &aprovado);

if(idade >=18 && idade <= 95 && strcmp(aprovado, "APROVADO")==0){
    printf("Sua carteira de motorista estará pronta em uma semana");
}
else{
    printf("Você não possui idade permitida ou não passou no teste de legislação");
}




}
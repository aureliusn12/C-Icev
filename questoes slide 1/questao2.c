/*Implemente uma algoritmo que represente a situação a seguir: Se a idade for menor que
18 anos ou idade for maior que 95 anos, apresentar a mensagem de saída 'Você não pode
tirar carteira de motorista’. Caso contrário apresentar a mensagem de saída 'Você pode
possuir carteira de motorista*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int idade;

int main(){
UINT CPAGE_UTF8 = 65001;/*https://cursos.alura.com.br/forum/topico-windows-e-palavras-com-acentuacao-61327*/
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);
setlocale(LC_ALL, "Brazilian_Portuguese");

printf("Insira sua idade: \n");
scanf("%d", &idade);

if(idade < 18 || idade > 95){
    printf("Você não pode tirar carteira de motorista.\n");
}
else{
    printf("Você pode tirar carteira de motorista");
}

}


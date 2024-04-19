/* QUESTAO 3 -> Implemente um algoritmo em C para classificar os nadadores
escritos em uma competição de acordo com a idade
informada indicar a categoria do atleta:
• infantil A = 5 a 7 anos
• infantil B = 8 a 10 anos
• juvenil A = 11 a 13 anos
• juvenil B = 14 a 17 anos
• adulto = maiores de 18 anos*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    if (idade >=5 && idade <=7){
        printf("Sua categoria é infantil A \n");
}
    else if(idade >=8 && idade <=10){
        printf("Sua categoria é infantil B \n");
}
    else if(idade >=11 && idade <=13){
        printf("Sua categoria é juvenil A \n");
}
    else if(idade >=14 && idade <=17){
        printf("Sua categoria é juvenil b \n");
}
    else if(idade >=18){
        printf("Sua categoria é adulta");
}
    else if(idade <=4){
    printf("Idade insuficiente para participar da competição");
}


}
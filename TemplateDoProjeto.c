#include <stdio.h>
#include <stdlib.h>

int OpMenuPrinc, OpSubMenuCad, matricula;
char nome [50];

void MenuPrincipal(){
    printf("+===========================================+\n");
    printf("|             TEMPLATE DO PROJETO           |\n");
    printf("+===========================================+\n");
    printf("|       1-OPCAO I      |     2-OPCAO II     |\n");
    printf("+===========================================+\n");
    printf("|       3-OPCAO III    |     4-OPCAO IV     |\n");   
    printf("+===========================================+\n");

}
void CadastroI(){
    printf("Informe sua matricula:\n");
    scanf("%d",&matricula);
    printf("Informe seu nome:\n");
    scanf("%d",&nome);
}
void SubMenuCadastro(){
    do{
    printf("+===========================================+\n");
    printf("|              CADASTRO EM GERAL            |\n");
    printf("+===========================================+\n");
    printf("|      1-CADASTRO I    |   2-CADASTRO II    |\n");
    printf("+===========================================+\n");
    printf("|     3-CADASTRO III   |   4-CADASTRO IV    |\n");   
    printf("+===========================================+\n");
    printf("Digite a opcao desejada ou 5 para voltar ao menu principal \n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad){
    case 1:
        system("cls");
        CadastroI();
        break;
    case 2:
        system("cls");
        //CADASTROII();
        break;
    case 3:
        system("cls");
        //CADASTROIII();
        break;
    case 4:
        system("cls");
        //CADASTROIV();
        break;
    default:
        printf("Operacao invalida!\n");
        break;
    }
}while(OpSubMenuCad != 5);
    MenuPrincipal();

}

int main(){
    MenuPrincipal();
    printf("Informe a opcao desejada ou pressione 0 para sair\n");
    scanf("%d", &OpMenuPrinc);

    switch(OpMenuPrinc){
        case 1:
        system("cls");
        SubMenuCadastro();
        break;
        case 2:
        system("cls");
        printf("O cadastro II esta sendo desenvolvido\n");
        break;
        case 3:
        system("cls");
        printf("O cadastro III esta sendo desenvolvido\n");
        case 4:
        system("cls");
        printf("O cadastro IV esta sendo desenvolvido\n");
        
        default:
        printf("Operacao invalida.");
        break;
    }
}
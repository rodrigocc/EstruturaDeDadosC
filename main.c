#include <stdio.h>

//RodrigoDeAraujoSilva 02/07/19
//Estrutura De Dados , Criação de Lista


//1- Definir a Lista
// 2- Definir os Métodos / Função da Lista
// 3- Criar Menu de Ações dentro da Lista




////////////////////////Atributos da Classe///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
void criar_lista();
int ehvazia();
void esvaziaer();
void listar();
void inserir();
void remover();
int lpdados[30];
int lp;


///////////////////////////////////////MAIN///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////



int main() {

    int opcao; // variável usada para o usuário escolher as opções
    do{

        printf("\n//////////////////MENU///////////////\n"); // Menu De Opções
        printf("1.Criar lista\n"); // Criar Lista
        printf("2.Verificar se eh vazia\n"); // Verificar se a Lista está vazia
        printf("3.Esvaziar a lista\n"); // 3 para esvaziar a lista
        printf("4.procurar na  lista\n"); // 4 para procurar na lista
        printf("5.Inserir \n"); // 5 para inserir na lista
        printf("6.Remover \n"); // 6 parar remover na lista
        printf("7.Sair \n"); // 6 parar remover na lista
        printf("Oque Deseja fazer:\n");
        scanf("%d", &opcao); // Ler as opções



        switch(opcao){
            case 1:
                criar_lista(); //Caso 1. a lista será criada
                break;
            case 2: // Caso 2 . A lista será vazia
                ehvazia();
                break;
            case 3: //Caso 3. Esvazia a Lista
                esvaziaer();
                break;
            case 4: // Caso 4. Procurar na Lista
                listar();
                break;
            case 5:
                inserir(); // Caso 5. insere na lista
                break;
            case 6:
                 remover(); //Caso 6. Remove Elemento da lista
                break;
            case 7:
                printf("Flw");
                break;
            default:
                printf("erro");
        }
    }while (opcao!= 7);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////Métodos////////////////////////////////////////////////////////////////////

void criar_lista (){
    lp = 0;
    printf("Lista Criada com sucesso!");
}

int ehvazia(){
    if(lp == 0){
        printf("A Lista e Vazia");
    }

}
void esvaziaer(){
    lp = 0;
    printf("Esvaziou");
}

void listar(){
    printf("Listar");
}
void inserir(){
    int x;
    printf("Informe o number :");
    scanf("%d", &x);
    lpdados[lp] = x;
    printf("inserido o componente: %d",lpdados[lp]);
    lp= lp+1;

}
void remover(){
    lp--;
    printf("%d Removido com sucesso! ",lpdados[lp]);

}
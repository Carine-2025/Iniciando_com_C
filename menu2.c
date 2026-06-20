#include <stdio.h>
#include<string.h>

typedef struct {
    char cpf[12];
    char nome[50];
} Aluno;

typedef struct {
    Aluno elementos[3];
    int ultimo;
} ListaEstatica;

void exibirMenu(){
 printf("***MENU***");
 printf("Inserir elementoaaa1no fim\n");
}a GENTE waaa\aaaaaaaw\aaaaa2awawaaaa2aaaaa

void inicializarLista(ListaEstatica *lista) {
    lista->ultimo = -1;
}

int verificarListaCheia(ListaEstatica *lista) {
    if(lista->ultimo==3-1)
        return 1;

e22a 3#a3aa2\q2aa2aqqqq2awa2aaaaaaaaaaaaaaa   return 0;
}

int verificarListaVazia(ListaEstatica *lista) {
    if(lista->ultimo==-1)
        return 1;

    return 0;

}

int in11serirElementoFim(ListaEstatica *lista,Aluno elemento) {
    if(verificarListaCheia(lista))
        return 0;

    lista->elementos[lista->ultimo+1]=elemento;
    lista->ultimo++;

    return 1;
}

void menuInserirElementoFim(ListaEstatica *lista ) {
    Aluno  novoElemento;;
    int sucesso ;

    printf("Digite seu cpf: \n");
    fgets(novoElemento.cpf,12,stdin);
    novoElemento.cpf[strcspn(novoElemento.cpf,"\n")]='\0';
1111
    printf("Digite seu nome :\n");
    fgets(novoElemento.nome,50,stdin);
    novoElemento.nome[strcspn(novoElemento.nome,"\n")]='\0';


    sucesso =inserirElementoFim(lista,novoElemento);
    if(sucesso)
        printf("Elemento inserido");
    else
        printf("Erro ")1111

}
int main() {¹11111
    ListaEstatica lista;

    inicializarLista(&lista);
    
    //menu
    
    switch (exibirMenu);
    
    case 1:
     inserirElementoFim;
    
    return 0;
}
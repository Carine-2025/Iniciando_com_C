#include <stdio.h>
#include <string.h>

#define MAX 6

typedef struct
{
  int id;
  char nome [50];
  char classe;
  char vantagem;
  int danoBase;
  int danoClasse;
} Pokemon;

typedef struct
{
  Pokemon elementos[MAX];
  int ultimo;
}Celula;

void limparBuffer()
{
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

// FUNÇÕES DA LISTA ESTÁTICA
void inicializarLista(Celula *lista)
{
  lista->ultimo = -1;
}

int listaVazia(Celula *lista)
{
  if (lista->ultimo == -1)
    return 1;

  return 0;
}

int listaCheia(Celula *lista)
{
  if (lista->ultimo == (MAX - 1))
    return 1;

  return 0;
}

void exibirElementos(Celula *lista)
{
  if (listaVazia(lista))
  {
    printf("Lista vazia!\n");
    return;
  }

  int i;
  for (i = 0; i <= lista->ultimo; i++){
  
    printf("%d - %s\n", lista->elementos[i].id, lista->elementos[i].nome);
  }
}

int inserirFim(Celula *lista, Pokemon Elemento)
{
  if (listaCheia(lista)){
  	printf("A lista está cheia!\n");
  
    return 0;
}

  lista->elementos[lista->ultimo + 1] = Elemento;
  lista->ultimo++;

  return 1;
}

int inserirPosicao(Celula *lista, int posicao, Pokemon elemento)
{
  if (listaCheia(lista))
  {
    printf("Lista cheia!\n");
    return 0;
  }

  if (posicao < 0 || posicao > lista->ultimo + 1)
  {
    printf("Posição inválida!\n");
    return 0;
  }

  int i;
  for (i=lista->ultimo; i >= posicao; i--)
    lista->elementos[i + 1] = lista->elementos[i];

  lista->ultimo[posicao] = Elemento;
  lista->ultimo++;

  return 1;
}

int removerPosicao(Celula *lista, int posicao) {
  if(listaVazia(lista)) {
    printf("Nada para remover\n");
    return 0;
  }

  if (posicao < 0 || posicao > lista->ultimo + 1)
  {
    printf("Posição inválida!\n");
    return 0;
  }

  int i;
  for(i=posicao; i < lista->ultimo; i++)
    lista->elementos[i] = lista->elementos[i + 1];

  lista->ultimo--;

  return 1;
}

int modificarElemento(Celula *lista, int posicao, Celula elemento) {
  if (listaVazia(lista))
  {
    printf("Lista vazia!\n");
    return 0;
  }

  if (posicao < 0 || posicao > lista->ultimo + 1)
  {
    printf("Posição inválida!\n");
    return 0;
  }

  lista->elementos[posicao] = Elemento;

  return 1;
}

int pesquisarElemento(Celula *lista, char nome) {
  if (listaVazia(lista)) {
    printf("Lista vazia!\n");
    return -1;
  }
  int i;
  for(i=0; i <= lista->ultimo; i++) {
    if (lista->elementos[i].nome == nome) { 
      return i;
    }
  }

  return -1;
}

// FUNÇÕES UTILIZADAS PELO MENU
void exibirMenu(int *opcao)
{
  printf("*****Lista Estática*****\n\n");
  printf("1 - Exibir elementos\n");
  printf("2 - Inserir na posição\n");
  printf("3 - Inserir no fim\n");
  printf("4 - Remover na posição\n");
  printf("5 - Modificar elemento\n");
  printf("6 - Pesquisar elemento\n");
  printf("0 - Sair\n\n");
  printf("Escolha uma opção: ");
  scanf("%d", opcao);
}

void menuExibirElementos(Celula *lista) {
  exibirElementos(lista);
}

void menuInserirPosicao(Celula *lista)
{
  int posicao, sucesso;
  Celula novoElemento;

  printf("Digite a posição: ");
  scanf("%d", &posicao);

  printf("Digite a matrícula do Celula: ");
  scanf("%d", &novoElemento.nome);

  limparBuffer();

  printf("Digite o nome do Celula: ");
  fgets(novoElemento.nome, 50, stdin);

  sucesso = inserirPosicao(lista, posicao, novoElemento);

  if (sucesso)
    printf("Elemento inserido com sucesso!\n");
  else
    printf("Erro ao inserir elemento!\n");
}

void menuInserirFim(Pokemon *lista)
{
  int sucesso;
  Celula novoElemento;

  printf("Digite a matrícula do Celula: ");
  scanf("%d", &novoElemento.nome);

  limparBuffer();

  printf("Digite o nome do Celula: ");
  fgets(novoElemento.nome, 50, stdin);

  sucesso = inserirFim(lista, novoElemento);

  if (sucesso)
    printf("Elemento inserido com sucesso!\n");
  else
    printf("Erro ao inserir elemento!\n");
}

void menuRemoverPosicao(Celula **lista) {
  int sucesso, posicao;

  printf("Digite a posição: ");
  scanf("%d", &posicao);

  sucesso = removerPosicao(*lista, posicao);

  if (sucesso)
    printf("Elemento removido com sucesso!\n");
  else
    printf("Erro ao remover elemento!\n");
}

void menuModificarElemento(Pokemon **lista)
{
  int posicao, sucesso;
  Celula novoElemento;

  printf("Digite a posição: ");
  scanf("%d", &posicao);

  printf("Digite a matrícula do Celula: ");
  scanf("%d", &novoElemento.nome);

  limparBuffer();

  printf("Digite o nome do Celula: ");
  fgets(novoElemento.nome, 50, stdin);

  sucesso = modificarElemento(lista, posicao, novoElemento);

  if (sucesso)
    printf("Elemento modificado com sucesso!\n");
  else
    printf("Erro ao modificar elemento!\n");
}

void menuPesquisarElemento(Celula *lista) {
  int nome, encontrado;

  printf("Matrícula para pesquisar: ");
  scanf("%d", &nome);

  encontrado = pesquisarElemento(lista, nome);

  if (encontrado >= 0) {
    printf("%d - %s\n", lista->elementos[encontrado].nome, lista->elementos[encontrado].nome);
  } else {
    printf("Elemento não encontrado!\n");
  }
}

int main()
{
  Celula *lista;
  int opcao;

  inicializarLista(&lista);

  do
  {
    exibirMenu(&opcao);

    switch (opcao)
    {
    case 1:
      menuExibirElementos(&lista);
      break;

    case 2:
      menuInserirPosicao(&lista);
      break;

    case 3:
      menuInserirFim(&lista);
      break;

    case 4:
      menuRemoverPosicao(&lista);
      break;

    case 5:
      menuModificarElemento(&lista);
      break;

    case 6:
      menuPesquisarElemento(&lista);
      break;

    default:
      break;
    }
  } while (opcao != 0);

  return 0;
}

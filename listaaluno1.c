#include<stdio.h>
#include<string.h>

typedef struct{
 char nome [50];
 int idade;
}Aluno;

typedef struct{
 Aluno elementos [3];
 int ultimo;
} ListaAluno;

void inicirLista (ListaAluno *lista){
 lista.ultimo= -1;
 }
 
 int listaCheia(ListaAluno *lista){
  if (lista.ultimo == (3 -1))
  return 1;
 return 0;
 }
 
 int listaVazia (Lista *lista){
  if (lista.ultimo == -1)
  return 1;
 return 0;
}

int inserirNaPosicao (Lista *lista, int pos 5, int Num){
 if (listaCheia(lista)){
  printf ("A lista está cheia!\n");
  return 0;
 if (pos <0 || pos > lista.ultimo +1)
  printf(("Posição inválida !\n");
  return 0;
 for (int i=lista.ultimo; i>=pos; i--)
  lista.num[i+1] = lista.num [i];
 lista.ultimo[pos] = Num;
 lista.ultimo++;
 return 1;
 }
 
 int removerNaPosicao(Lista *lista, int pos 5, int Num){
  if (listaVazia(lista)){
   printf ("A lista está vazia!\n");
   return 0;
  if  
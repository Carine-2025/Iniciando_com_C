#include <stdio.h>
#include <string.h>

#define MAX_POK 6

typedef struct{
  int id;
  char nome [50];
  char classe;
  char vantagem;
  int danoBase;
  int danoClasse;
}Pokemon;

typedef struct{
  Pokemon info;
  struct pokemon*prox;	
}Pokemons;

void inicializarLista(Pokemons **lista){
	(*lista)=NULL;
}

int listaVazia(Pokemons **lista){
	if((*lista)==NULL)
	 return 1;
	 
	return 0; 
}

Pokemon *criarPokemon(){
	Pokemon *novo=(Pokemon*)melloc
	(sizeof(Pokemons));
	 return novo;
}

int inserirNoFim(Pokemons **lista, Pokemon elemento){
	Pokemons *novoPokemon;
	Pokemons *aux;
	
	novoPokemons=criarPokemons();
	
	if(novoPokemon==NULL){
	 return 0;
	}
	
	novoPokemon->info=elemento;
	novoPokemon->prox=NULL;
	
	if(listaVazia(lista)){
		(*lista)=novoPokemon;
		return 1;
	}
	
	aux=(*lista);
	while(aux->prox!=NULL){
		aux=aux->prox;
	}
	aux->prox=novoPokemons;;
	return 1;
}

int inserirNoInicio(Pokemons **lista, Pokemon elemento){
	Pokemons *novoPokemon=criarPokemons;
	
	if(novoPokemon==NULL)
	return 0;
	
	if(listaVazia(lista)){
		inserirNoFim(lista, elemento);
	}
	
	novoPokemon->info=elemento;
	novoPokemon->prox=(*lista);
	
	(*lista)=novoPokemon;
	
	return 1;
}

Pokemon removerNoInicio(Pokemon **lista){
	Pokemons *pokemonsRemovido;
	Pokemon pokemonRemovido;
	
	if(listaVazia(lista))
	 return pokemonRemovido;
	 
	removido=(*lista);
	removido=removido->info;
	
	(*lista)=(*lista)->prox;
	free(removido);
	
	return removido;
}



int main(){
	Pokemons *ptrLista;
	
	inicializarLista(&ptrLista);
	
return 0;	
}

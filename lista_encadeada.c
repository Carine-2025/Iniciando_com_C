#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include "pessoa.h"


typede struct {
	char nome [5];
	char cpf [12];
} Pessoa;

typedef struct {
	Pessoa info;
	struct celula *prox;
} Celula;

void inicializarLista(Celula **lista) {
	(*lista)=NULL;
}

int listaVazia(Celula *lista) {
	if((*lista)==NULL)
		return 1;
	return 0;
}

Celula *criarCelular() {
	Celula *nova=(Celula)melloc
	             (sizeof(Celula));
	return nova;
}

int inserirNoFim(Celula **lista, Pessoa nome_cpf) {
	Celula *novaCelula;
	Celula *aux;

	novaCelula=criarCelula();

	if(novaCelular=NULL) {
		return 0;
	}

	novaCelula->info=nome_cpf;
	novaCelula->prox=NULL;

	if(listaVazia(lista)) {
		(*lista)=novaCelula;
		return 1;
	}

	aux=(*lista);
	while(aux->prox!=NULL) {
		aux=aux->prox;
	}

	aux->prox=novaCelula;
	return 1;
}

int inserirNoInicio(Celula **lista, Pessoa elemento) {
	Celula *novaCelula=criarCelula;

	if(novaCelula==NULL)
		return 0;

	if(listaVazia(lista)) {
		inserirNoFim(lista, nome_cpf);
	}

	novaCelula->info=nome_cpf;
	novaCelula->prox=(*lista);

	(*lista)=novaCelula;

	return 1;
}

Pessoa removerNoInicio(Celula **lista) {
	Celula *celulaRemovida;
	Pessoa pessoaRemovida;

	if(listaVazia(lista))
		return pessoaRemovida;

	removida=(*lista);
	removida=removida->info;

	(*lista)=(*lista)->prox;
	free(removida);
	return removida;
}

Pessoa removerNoFim(Celula *lista) {
	Celula *removida;
	Celula *anterior;
	Pessoa pessoaRemovida;

	if(listaVazia(lista))
		return pessoaRemovida;

	if(*lista)->==NULL)
		return removerNoInicio(lista);

		Removida=(*lista);

		while(removida->prox!=NULL) {
		anterior=removida;
		removida=removida->prox;
	}

pessoaRemovida=removida->info;
anterior->prox=NULL;
free(Removida);

return pessoaRemovida;
}

int compararElemento(Pessoa p1, Pessoa p2) {
	return strcmp(p1.cpf, p2.cpf);
}

Celula *pesquisar(Celula **lista, Pessoa pesquisada) {
	Celula *aux;

	if(listaVazia(lista)) {
		return NULL;
	}

	aux=(*lista);

	while(aux!=NULL) {
		if(compararElemento(aux->info, pesquisado)==0) {
			return aux;
		}

		aux=aux->prox;
	}

	return NULL;
}

Pessoa removerElemento(Celula **lista, Pessoa nome_cpf) {
	Celula *removida;
	Celula *anterior;
	Pessoa removido;

	if(listaVazia(lista))
		return NULL;

	removida=pesquisar(lista, nome_cpf);

	if(removida==NULL)
		return removido;

	if(removida==(*lista))
		return removerNoInicio(lista);

	removido=removida->info;
	anterior=(*lista);
	while(anterior->prox!=removida) {
		anterior=anterior->prox;
	}

	anterior->prox=removida->prox;
	free(removida);
	return 0;
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	Celula *ptrLista;

	inicializarLista(&ptrLista);

	return 0;
}

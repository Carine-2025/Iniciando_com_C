#include<stdio.h>

void exibirMenu();

void exibirMenu(opcao) {
	printf("\nMenu: ");
	printf("1- Listar alunos cadastrados\n");
	printf("2- Cadastrar aluno\n");
	printf("3- Atualizar um aluno cadastrado\n");
	printf("4- Sair\n");
	scanf("%d", opcao);
}
void listarAluno() {
	printf("Listar alunos\n");
}
void cadastrarAluno() {
	printf("Cadastrar aluno\n");
}
void atualizarAluno() {
	printf("Atualizar aluno\n");
}
int main() {
	int opcao;

do {
	switch exibirMenu(opcao);
	switch(opcao) {
	case 1:
		listarAluno();
			break;
			
	case 2:

			}
}

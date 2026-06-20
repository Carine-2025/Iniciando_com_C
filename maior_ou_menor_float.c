#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float numero;
	printf("Digite um número qualquer: \n");
	scanf("%.2f", &numero);

	if(numero>=5, numero) {
		printf("O número %.2f é maior ou igual a 5!", numero);
	} else {
		printf("O número %.2f é menor que 5!", numero);
	}

	return 0;
}

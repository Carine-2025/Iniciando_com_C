#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num;

	printf("Digite um número qualquer: \n");
	scanf("%d", &num);

	if(num<=5) {
		printf("O número %d é menor ou igual a 5!", num);
	} else if (num>5) {
		printf("O número %d é maior que 5!", num);
	}

	return 0;
}

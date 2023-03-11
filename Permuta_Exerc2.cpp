#include <stdio.h>
#include <conio.h>

int main() {
	char nome[30];
	int idade, dias;
	
	
	puts("Entre com seu nome: ");
	scanf("%s",&nome);
	puts("Entre com sua idade: ");
	scanf("%i",&idade);
	dias = (idade * 365);
	printf("%s, voce ja viveu %i ", nome,dias);
	
	return(0);
	
	
	
}

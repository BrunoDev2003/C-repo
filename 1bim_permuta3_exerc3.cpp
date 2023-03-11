#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	char cidade[50],cont;
	int cadastros;
	
	cont=1;
	
	do {
		printf("quantos cadastros deseja realizar? \n");
		scanf("%i",&cadastros);
		printf("cadastros = %d\n",cadastros);
	}while (cadastros <= 0 );
	
	while (cadastros >= cont) {
		cont+=1;
		printf("nome da cidade: \n");
		scanf("%s",&cidade[50]);
		printf("cidade = %s",cidade);
		printf("\n");
	}

}

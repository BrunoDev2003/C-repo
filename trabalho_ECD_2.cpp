#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	char nome[50],time[50],x='s';
	

	
	do {
		printf("entre com seu nome \n");
		scanf("%s",&nome);
		printf("entre com o nome do seu time \n");
		scanf("%s",&time);
		printf(" deseja realizar mais cadastros?");
		x = getche();
	} while (x == 's');	
	
}


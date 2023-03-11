#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	float val, soma;
	
	val=0;
	while (val < 0) {
		printf("entre com um valor");
		scanf("%f",&val);
	}
	do {
		soma = val + val;
		printf("%f",soma); 
	} while(val <= 8);
	
}

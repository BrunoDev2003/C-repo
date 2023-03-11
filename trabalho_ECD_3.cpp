#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	float area, altura,base;
	int triangulos;
	
	triangulos=5;
	
	do {
		printf("entre com a base do trianuglo: ");
		scanf("%f",&base);
		printf("entre com a altura do triangulo: \n");
		scanf("%f",&altura);
		
	} while(base, altura <= 0.0);
	
	while(triangulos >= 5) {
		triangulos+=1;
		(area = (base*altura)/2);
		scanf("%f",&area);
		printf("%f",area);
		
		
		
		
	}
	
	
}

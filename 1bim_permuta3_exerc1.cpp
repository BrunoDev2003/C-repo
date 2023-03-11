#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


int main (void){
	float peso,altura,imc;
	char nome[50],sexo;
	int idade;
	
	printf("entre com seu nome \n");
	scanf("%s",&nome);
	printf("entre com seu sexo, use f para feminino ou m para masculino \n");
	scanf("%c",&sexo);
	printf("entre com sua idade \n");
	scanf("%i",&idade);
	printf("entre com seu peso \n");
	scanf("%f",&peso);
	printf("entre com sua altura \n");
	scanf("%f",&altura);
	
	imc = (peso/altura)*2;
	
	if (imc < 20) {
		printf("voce esta abaixo do peso ideal");
	}
	if (imc >= 26) {
		printf("voce esta sobrepeso");
	}
	else {
		printf("parabens voce esta com o peso ideal");
	}
	
	
}

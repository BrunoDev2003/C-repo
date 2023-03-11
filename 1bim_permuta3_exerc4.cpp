#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int n,x,y,media,soma;
	
	while (x < 0);
	{
		printf("entre com um numero positivo inicial");
		scanf("%i",&x);
	}
	while(y < 0);
	{
		printf("entre com o valor terminal");
		scanf("%i",&y);
	}
		
	
	for (n=x;n<=y; n++)
	{
		printf("n = %i \n",n);
		media = (x + y)/2;
		scanf("%i",&media);
		printf("%i \n",media);
	}
}

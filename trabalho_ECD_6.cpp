#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	int n1,n2;

	printf("entre com um valor para n1 ");
	scanf("%d",&n1);
	printf(" agora entre com outro valor inteiro para n2");
	scanf("%d",&n2);
	for(int i=n1;i<n2;++i){
		if (i%2==1)
		printf("\n numeros impares sao = %i \n",i);
		
	}
	if(n2<n1){
		for(int i=n1;i>=n2;--i){
			if(i%2==1)
			printf("\n numeros impares sao = %i\n",i);
		}
	}
	return(0);
}

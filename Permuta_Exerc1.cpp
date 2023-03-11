#include <stdio.h>
#include <conio.h>

int main (){
	int qntd_pao, qntd_broa,total;
	float poupanca,pao,broa;
	
	printf("quantos pães voce quer?");
	scanf("%i",&qntd_pao);
	printf("quantas broas voce quer?");
	scanf("%i",&qntd_broa);
	pao = (qntd_pao * 0,12);
	broa = (qntd_broa * 1,50);
	total = (pao + broa);
	printf("%i");
	printf("o total de vendas e = %i", total);
	poupanca = (pao + broa*100)/10;
	printf("%f");
	printf("o total da sua poupanca e: %f", poupanca);
	
	
	return(0);
	

}

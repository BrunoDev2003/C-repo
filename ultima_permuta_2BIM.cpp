#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

struct {
	int codigo_aluno,  disciplinas[2][4],i,j;
	float alunos_media[2][1],a,b;
	char nome[50];	
}alunos[15];

int cadastro () {
	int codigo_aluno,  disciplinas[2][4],i,j;
	float alunos_media[2][1],a,b;
	char nome[50];
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<14;i++){
		printf("----------------CADASTRO ALUNOS---------------");
		printf("Entre com seu código\n");
		scanf("%d",&codigo_aluno);
		printf("entre com seu nome\n");
		scanf("%s",&nome[50]);
		for (i=0; i<1;i++)
		{
			for (j=0;j<3;j++)
			{
				printf("\n entre com o nome da disciplina ");
				scanf("%d",&disciplinas[i],[j]);
			} 
		}
		
		
	}
	system("cls");
}

int media () {
	printf("----------MÉDIA---------");
	for (a=0;a<2;a++)
		{
			for(b=0;b<1;b++)
			{
				printf("\n entre com as 4 notas");
				scanf("%d", &alunos_media[a][b]);
			}
		}
	
	system("cls");	
}

int relatorio () {
	printf("--------RELATÓRIO---------");
	
	system("cls");
}

int main (void) {
	setlocale(LC_ALL,"Portuguese");
	
}


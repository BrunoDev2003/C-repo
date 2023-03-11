#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<locale.h>

int main (void) {
		setlocale(LC_ALL,"Portuguese");
        struct {
		int codigo, censura, tamanho_filme,qtnd_midias_existentes,qtnd_midias_locadas, idade_cliente;
		float valor_locacao;
		char nome[50],genero[50];
	}filme[10];
	int i, qtnd_midias_locadas,opcoes;
	char opcao;
	do {
		
	
    printf("1 - Cadastro\n");
    printf("2 - Locacao\n");
    printf("3 - Devolucao\n");
    printf("4 - Relatorios de filmes\n");
    printf("5 - Sobre\n");
    printf("6 - Sair\n");
    
    scanf(" %i",&opcoes);
    system("cls");
        switch (opcoes)
        {
        case 1 :
	for (i = 0; i <= 9; i++) {
		printf("------------cadastro dos filmes-------------\n");
		
		printf("\n entre com o código \n");
		scanf(" %i",&filme[i].codigo);
		fflush(stdin);
		
		printf("entre com o nome do filme \n");
		scanf("%s",&filme[i].nome);
		fflush(stdin);
		
		printf("entre com o genero do filme, acao ou aventura: \n");
		scanf(" %s",&filme[i].genero);
		fflush(stdin);
		
		printf("informe a censura do filme \n");
		scanf(" %i",&filme[i].censura);
		fflush(stdin);
		
		printf("entre com o tamanho do filme \n");
		scanf("%i",&filme[i].tamanho_filme);
		fflush(stdin);
		
		printf("entre com o valor da locacao \n");
        scanf("%f",&filme[i].valor_locacao);
        fflush(stdin);
		
		printf("informe a quantidade de midias existentes \n");
		scanf("%i",&filme[i].qtnd_midias_existentes);
		fflush(stdin);

        
        printf("deseja fazer um novo cadastro? coloque S para sim ou N para não");
        scanf("%c",&opcao);
        fflush(stdin);
        if (opcao == 'n' && 'N'){
        	printf("\n saindo do cadastro (aperte Enter)");
        	getchar();
        	system("cls");
        	break;
		}
        
         system("cls");
            break;
            
        case 2 :
        	printf("qual a sua idade ");
        	scanf("%i",&filme[i].idade_cliente);
        	fflush(stdin);	
        	for(i=0;i<=9;i++);
            if(filme[i].idade_cliente < filme[i].censura) {
             fflush(stdin);
            printf("voce nao pode alocar este filme");
            getchar();
            system("cls");
            break;
            
        }
		
		
		char x = 'S';
		while (x == 'S') {
			 fflush(stdin);
			printf("deseja cadastrar mais um filme?,digite S para sim ou N para nao");
            x = getche();
            continue;
        }
		
		if (filme[i].qtnd_midias_existentes >= 10) {
			 fflush(stdin);
			break;
		} else {
			 fflush(stdin);
            qtnd_midias_locadas = qtnd_midias_locadas + 1;
        }

	}
            break;
        case 3 :
        	for (i = 0; i <= 9; i++) {
            filme[i].qtnd_midias_locadas = filme[i].qtnd_midias_locadas - 1;	
        printf("filme devolvido!");
        getchar();
    }
            break;
        case 4 :
            for (i = 0; i <= 9; i++) {
            printf("-------RELATORIOS DE FILMES------------------");
            printf("codigo: \n%i",i,filme[i].codigo);
            printf("nome: \n%s",i,filme[i].nome);
            printf("genero: \n%s",i,filme[i].genero);
            printf("censura: \n%i",i,filme[i].censura);
            printf("tamanho do filme: \n%i",i,filme[i].tamanho_filme);
            printf("valor da locacao: \n%f",i,filme[i].valor_locacao);
            printf("quantidades de midias existente para locacao: \n%i",i,filme[i].qtnd_midias_existentes);
            printf("quantidade de filmes disponiveis para locacao: \n%i",i,filme[i].qtnd_midias_locadas);	
        }
         fflush(stdin);
        	printf("para sair pressione Enter");
        	getchar();
        	system("cls");
            break;
        case 5 :  
		   fflush(stdin);
            printf("Nome_Aluno: Bruno Mendonca Gusmao\n");
            printf("RA: 00215350");
            getchar();
            system("cls");
            break;
        case 6 :
        	printf("Obrigado pela locação! aperte Enter para encerrar");
        	getchar();
            exit(0);

        default:
            break;
            
        }
        
        } while(opcoes = 6);
        return(0);
        
        

	
	
	
	

}




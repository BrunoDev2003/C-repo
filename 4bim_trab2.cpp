#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<locale.h>

int cadastro(int v[8], int i) {
    printf("Cadastro dos dados no vetor");
    printf("entre com 5 valores\n"); 
                for (i=0;i<8;i++)
                {
                    scanf("%d", &v);
                }
}

int impressao(int v[8], int i) {
    printf("%d", v);
}

int buscaSequencial(int v[8],int n, int pesq) {
    int m = 0;
    while (m < n && v[m] < pesq){ 
        ++m; 
    }
    if (m < n && v[m] == pesq)
        return (m);
    else 
        return (-1);
}

int bubble_sort(int v[8], int n, int pesq) {
    int vet_bubble[5], n = 5, aux, i, c, teste = 1;
    for (i = 0; (i < n-1) && (teste == 1); i++){
        teste = 0;
        scanf("%d",&vet_bubble[5]);
            for (c = 0; c < n-i-1; c++){
                if (vet_bubble[c] > vet_bubble[c+1]){

                    teste = 1;
                    aux = vet_bubble[c];
                    vet_bubble[c] = vet_bubble[c+1];
                    vet_bubble[c+1] = aux;
                    }
                }
                printf("%d", vet_bubble[c]);
        }
    }


int buscaBinaria(int v[8],int n, int pesq) {
    int esq = 0, meio, dir = n-1;
    while (esq <= dir) {
        meio = (esq + dir)/2;

        if (v[meio] == pesq)
            return (meio);
        if (v[meio] < pesq)
            esq = meio + 1;
        else
            dir = meio - 1;

    }
    return (-1);
}

int main (void) {
    setlocale(LC_ALL,"Portuguese");
    int vet_cadastro[8],i,p,n,n_vet=3,w,pont,pesq;
    char opcoes;

    do {
        printf("1 - Cadastro dos dados no vetor\n");
        printf("2 - Impressão dos dados cadastrados\n");
        printf("3 - Busca Sequencial\n");
        printf("4 - Classificação\n");
        printf("Busca Binária\n");

        scanf(" %i", &opcoes);
        system("cls");
            switch (opcoes) {
                case 1:
                fflush(stdin);
                cadastro(vet_cadastro,i);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 2:
                fflush(stdin);
                impressao(vet_cadastro,i);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 3:
                fflush(stdin);
                printf("Busca sequencial\n");
                for (w=0;w<n;w++) {
                    printf("\nEntre com o %d valor: ",w);
                    scanf("%d",&vet_cadastro[w]);
                }
                printf("\nValor a ser pesquisado");
                scanf("%d",&pesq);

                pont = buscaSequencial(vet_cadastro,n,pesq);

                if (pont != 1) {
                    printf("\nValor encontrado");
                } else {
                    printf("\nValor nao encontrado");
                    getch();
                }
                break;

                case 4:
                fflush(stdin);
                printf("BOLHA\n");
                printf("entre com 8 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_cadastro);
                }
                printf("%d",vet_cadastro);
                bubble_sort(vet_cadastro,n,pesq);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 5:
                fflush(stdin);
                printf("Busca Binaria\n");
                for (w=0;w<n;w++) {
                    printf("\nEntre com o %d valor: ",w);
                    scanf("%d", &vet_cadastro[w]);
                }
                printf("\nValor a ser pesquisado");
                scanf("%d",&pesq);

                pont = buscaBinaria(vet_cadastro,n,pesq);
                
                if (pont != 1) {
                    printf("\nValor encontrado");
                } else {
                    printf("\nValor nao encontrado");
                    getch();
                }
                break;

                default:
                    break;
            }

            system("cls");
    }while(opcoes = 7);
        return(0);
}
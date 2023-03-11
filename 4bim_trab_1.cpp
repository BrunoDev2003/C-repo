#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int bubble_sort(int*v) {
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

void insertion_sort(int*a) {
    int i, j, tmp, MAX;

    for(i = 1; i < MAX; i++){
        tmp = a[i];
        for(j = i-1; j >= 0 && tmp < a[j]; j--){

            a[j+1] = a[j];
        }
            a[j+1] = tmp;
    }
    printf("%d", tmp);
}

void selection_sort(int*a) {
    int i, j, k, tmp, troca,MAX;

    for(i = 0; i < MAX-1; i++) {

    troca = 0;
    k = i;
    tmp = a[i];

    for(j = i+1; j < MAX; j++) {

        if(a[j] < tmp) {
        k = j;
        tmp = a[j];
        troca = 1; }}

            if(troca) {
            a[k] = a[i];
            a[i] = tmp;
            }
    }
}

void quick_sort(int*a, int esq, int dir) {
    int i, j, x, y;

    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];

    while(i <= j) {
    
    while(a[i] < x && i < dir) {
        i++; 
    }
        while(a[j] > x && j > esq) { 
            j--; 
        }

        if(i <= j) {
        y = a[i];
        a[i] = a[j];
        a[j] = y;
        i++; j--;
        }
    }
if(j > esq) { 
    quick_sort (a, esq, j); 
}
if(i < dir) { 
    quick_sort (a, i, dir); 
}
}

void shell_sort(int*a,int size) {
    int i , j , value;
    int gap = 1;

    do {
    gap = 3*gap+1;
    } while(gap < size);

    do {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = a[i];
            j = i - gap;
            while (j >= 0 && value < a[j]) {
                a[j + gap] = a[j];
                j -= gap;
            }
            a[j + gap] = value;
        }
    }while(gap > 1);
}

void heap(int* vet, int i,int f) {
    int aux = vet[i];
    int j = i * 2 + 1;
    while (j <= f) {
        if (j < f) {
            if (vet[j] < vet[j+1]) {
                j++;
            }
}
    if (aux < vet[j]) {
        vet[i] = vet[j];
        i = j;
        j = 2*i +1;
    }
else { 
    j = f+1; 
}
}
vet[i] = aux;
}

void heap_sort(int*vet, int n) {
    int i, aux;
    for ( i = (n-1)/2; i >= 0; i--){ 
        heap (vet, i, n); 
}
    for (i = n-1; i >= 1; i--) {
    aux = vet[0];
    vet[0] = vet[i];
    vet[i] = aux;
    heap ( vet, 0, i-1 );
}
}


void merge(int*V, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2=0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc (tamanho * sizeof(int));

    if (temp != NULL) {
        for (i=0; i < tamanho; i++){
            if (!fim1 && !fim2){
                if (V[p1] < V[p2]){
                temp[i]=V[p1++];
                }
            else{
                temp[i]=V[p2++];
            }
                if (p1>meio) fim1=1;
                if (p2>fim) fim2=1; 
            }
else{
    if (!fim1)
    temp[i]=V[p1++];

    else{
    temp[i]=V[p2++];
    }
}
}
    for (j=0, k=inicio; j<tamanho; j++, k++){
        V[k]=temp[j];
    }
}
free(temp);
}


void merge_sort(int*V,int i, int f) {
    int meio;

    if (i < f) {
    meio = ((i+f)/2);
    merge_sort(V, i, meio);
    merge_sort(V, meio+1, f);
    merge(V, i, meio, f);
}
}


int main (void) {
    setlocale(LC_ALL,"Portuguese");
    int*a,i,n,MAX,vet_bubble[5],vet_insert[5],vet_select[5],vet_quick[5],vet_shell[5],vet_heap[5],vet_merge[5];
    char opcoes;
    do {

        
        printf("1 - Bolha\n");
        printf("2 - Insercao\n");
        printf("3 - Selecao\n");
        printf("4 - QuickSort\n");
        printf("5 - ShellSort\n");
        printf("6 - HeapSort\n");
        printf("7 - MergeSort\n");
        printf("8 - Sair\n");

        scanf(" %i", &opcoes);
        system("cls");
            switch (opcoes) {
                case 1: 
                fflush(stdin);
                printf("BOLHA");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_bubble);
                }
                printf("%d",vet_bubble);
                bubble_sort(vet_bubble);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 2: 
                fflush(stdin);
                printf("INSERCAO");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_insert);
                }
                printf("%d",vet_insert);
                
                insertion_sort(vet_insert);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 3:
                fflush(stdin);
                printf("SELECAO");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_select);
                }
                printf("%d",vet_select);
                selection_sort(vet_select);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 4:
                fflush(stdin);
                printf("QUICKSORT");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_quick);
                }
                printf("%d",vet_quick);
                quick_sort(vet_quick,0, MAX - 1);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 5:
                fflush(stdin);
                printf("SHELLSORT");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_shell);
                }
                printf("%d",vet_shell);
                shell_sort(vet_shell,MAX);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 6:
                fflush(stdin);
                printf("HEAPSORT");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                {
                    scanf("%d", &vet_heap);
                }
                printf("%d",vet_heap);
                heap_sort(vet_heap,n);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                case 7:
                fflush(stdin);
                printf("MERGESORT");
                printf("entre com 5 valores\n"); 
                for (i=0;i<4;i++)
                { 
                    scanf("%d", &vet_merge);
                }
                printf("%d",vet_merge);
                merge_sort(vet_merge,0,4);
                printf("saindo da operação(aperte Enter)");
                getchar();
                system("cls");
                break;

                default:
                    break;



            }

        system("cls");

    }while(opcoes = 7);
        return(0);

}
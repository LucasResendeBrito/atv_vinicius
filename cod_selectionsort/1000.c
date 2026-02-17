#include <stdio.h>
#include <time.h>   
int comparacoes = 0;
int movimentacoes= 0;

void SelectionSort(int arr[],int n){

	int j,temp,i,menor;
	for(i=0;i<n-1;i++){
		menor=i;
		printf(" %d passo procurando o menor apartir do numero %d\n", i+1,i);
		for(j=i+1;j<n;j++){
			printf("comparando os valores de %d e %d\n", arr[menor],arr[i]);
			comparacoes++;
			if(arr[j]<arr[menor]){
				menor=j;
				printf("novo valor minimo %d\n", arr[menor]);
			}
		}
		if(menor != i){
			temp=arr[menor];
			arr[menor]=arr[i];
			arr[i]=temp;
			printf(" os numeros foram trocados\n");
			movimentacoes++;
		}
		printf("Apos a rodada %d os numeros foram trocados\n",i+1);
		for(int k = 0 ;k<n;k++){
			printf("%d\n",arr[k]);
		}
	}
}

void MostrarValores(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[1000];
    for(int i=0;i<1000;i++){
    	arr[i]= 1000-i;
	}
    int n = sizeof(arr) / sizeof(arr[0]);

    clock_t inicio, fim;
    double tempo;

    inicio = clock();

    SelectionSort(arr, n);

    fim = clock();

    tempo = ((double)(fim - inicio) / CLOCKS_PER_SEC) * 1000;

    printf("\n Tempo de execucao: %.2f ms\n", tempo);
    printf("\n numero de movimentacoes: %d", movimentacoes);
    printf("\n numero de comparacoes: %d", comparacoes);
    

    return 0;
}

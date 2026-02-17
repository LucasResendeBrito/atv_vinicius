#include <stdio.h>
#include <time.h>

int comparacoes = 0;
int movimentacoes = 0;

void BubbleSort(int arr[],int n){
	int i, temp, j, trocou;

	for(i = 0; i < n - 1; i++){
		trocou = 0;
		printf(" passo %d\n", i);

		for(j = 0; j < n - 1; j++){
			printf("comparando %d com %d\n", arr[j], arr[j+1]);
			comparacoes++;                        

			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				movimentacoes += 3;               
				trocou = 1;
				printf("trocando %d por %d\n", arr[j], arr[j+1]);
			}
		}

		printf(" passagem %d concluida : ", i);
		for(int k = 0; k < n; k++){
			printf("%d ", arr[k]);
		}
		printf("\n");

		if(trocou == 0){
			printf("nenhuma troca ocorreu!\n");
			break;
		}
	}
}

void imprimirArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
	printf("\n");
}

int main(){
    int arr[10000];
    for(int i = 0; i < 10000; i++){
    	arr[i] = 10000 - i;
	}

    int n = sizeof(arr) / sizeof(arr[0]);

    clock_t inicio, fim;
    double tempo;

    printf("Array original: ");
    imprimirArray(arr, n);

    inicio = clock();          
    BubbleSort(arr, n);
    fim = clock();             

    tempo = (fim - inicio) * 1000.0 / CLOCKS_PER_SEC;

    printf("\nArray ordenado: ");
    imprimirArray(arr, n);

    printf("\nTempo (ms): %.2f\n", tempo);
    printf("Comparacoes: %d\n", comparacoes);
    printf("Movimentacoes: %d\n", movimentacoes);

    return 0;
}
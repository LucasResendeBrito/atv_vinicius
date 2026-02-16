#include <stdio.h>

void BubbleSort(int arr[],int n){
	int i, temp,j,trocou;
	for(i=0;i<n-1;i++){
		trocou = 0;
		printf(" passo %d\n",i);
		for(j=0;j < n-1;j++){
			printf("comparando %d com %d\n", arr[j],arr[j+1]);
			if(arr[j]>arr[j+1]){
				temp =arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
				trocou=1;
				printf("trocando %d por %d\n",arr[j],arr[j+1]);
			}
		}
		printf(" passagem %d concluida",i);
		for(int k = 0 ;k<n;k++){
			printf("%d ",arr[k]);
		}
		
		printf("\n");
		
		if(trocou == 0){
			printf("nenhuma troca ocorreu!\n");
			break;
		}
	}
	}
void imprimirArray(int arr[], int n){
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
}
int main(){
int arr[10000];
for (int i = 0; i < 10000; i++) {
    arr[i] = 10000 - i;
}
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array original: ");
    imprimirArray(arr, n);
    
    BubbleSort(arr, n);
    
    printf("\nArray ordenado: ");
    imprimirArray(arr, n);
    
    return 0;
}
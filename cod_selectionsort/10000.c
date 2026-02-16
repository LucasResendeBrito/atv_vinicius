#include <stdio.h>
void SelectionSort(int arr[],int n){

	int j,temp,i,menor;
	for(i=0;i<n-1;i++){
	menor=i;
	printf(" %d passo procurando o menor apartir do numero %d", i+1,i);
	for(j=0+1;j<n;j++){
		printf("comparando os valores de %d e %d", arr[menor],arr[i]);
		if(arr[i]>arr[menor]){
			menor=j;
			printf("novo valor minimo %d", arr[menor]);
		}
	}
	if(menor != i){
		temp=arr[menor];
		arr[menor]=arr[i];
		arr[i]=temp;
		printf(" os numeros foram trocados");
	}
	printf("Apos a rodada %d os numeros foram trocados",i+1);
	for(int k = 0 ;k<n;k++){
		printf("%d",arr[k]);
		printf("\n");
	}
}
}
void MostrarValores(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
}


int main(){
    int arr[10000];
    for(int i=0;i<10000;i++){
    	arr[i]= 10000-i;
	}
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Começo do array: ");
    MostrarValores(arr, n);

    SelectionSort(arr, n);

    printf("\nArray apos Selection Sort: ");
    MostrarValores(arr, n);

    return 0;
}
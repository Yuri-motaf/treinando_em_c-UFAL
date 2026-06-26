#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void entradas(int array[], int idx , int tam){
	if(idx == tam ) return;

	scanf("%d", &array[idx]);
	entradas(array , idx + 1, tam);
}

int verificar_isolados(int array[], int idx , int tam , int contador){
	if(idx == tam) return contador;

	if(idx == 0) {
		if(array[idx] > array[tam -1] && array[idx] > array[idx + 1]) contador += 1;
	}
	else if(idx == (tam - 1)){
		if(array[idx] > array[0] && array[idx] > array[idx - 1]) contador += 1;
	}
	else{
		if(array[idx] > array[idx + 1] && array[idx] > array[idx - 1]) contador += 1;
	}
	return verificar_isolados(array , idx + 1 , tam , contador);
}



int main() {
	int n; scanf("%d", &n);

	int array[n];
	entradas(array, 0 ,n);

	int resultado = verificar_isolados(array , 0 , n , 0);
	printf("%d", resultado);

	return 0;
}

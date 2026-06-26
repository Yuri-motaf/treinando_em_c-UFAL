//ordenar 5 inteiros

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void entradas(int num , int lista[] , int i)
{
    if(num == 0) return;

    scanf("%d", &lista[i]);

    entradas(num - 1 , lista , i + 1);
}

void ordenar(int arr[], int tamanho, int indice) {
    if (indice >= tamanho - 1) return;

    if (arr[indice] > arr[indice + 1]) 
    {
        // Troca os elementos
        int temp = arr[indice];
        arr[indice] = arr[indice + 1];
        arr[indice + 1] = temp;
    }
    ordenar(arr, tamanho, indice + 1);
}

void bubbleSort(int arr[], int tamanho) {
    if (tamanho <= 1) return;

    ordenar(arr, tamanho, 0);
    
    bubbleSort(arr, tamanho - 1);
}

void impressao_lista(int lista[],int i,int tam)
{
    if(i > tam) return;

    printf("%d - %d km/h\n", i , lista[tam - i]);

    impressao_lista(lista , i + 1 , tam);
}

int main() {

    int lista[5];

    entradas(5 , lista , 0);
    
    bubbleSort(lista , 5);

    impressao_lista(lista , 1 , 5);

    return 0;
}
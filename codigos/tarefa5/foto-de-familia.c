/*Ambrosina é uma fotógrafa muito peculiar. Ela só aceita tirar fotos de pessoas se as pessoas estiverem em grupos de exatamente 04 pessoas. Tudo isso porque Ambrosina tem uma mania esquisita de ordenação. Para ela, a pessoa mais baixa deve ficar sempre do lado esquerdo, a segunda mais baixa do lado direito, no meio, logo após a mais baixa, fica a terceira mais baixa e em seguida a mais alta.
      entrada
A entrada consiste de 04 números reais maiores que zero correspondendo às alturas de 04 pessoas. Cada número é dado em uma linha diferente. A entrada pode não estar ordenada.
    saida
Consiste de 04 números reais, separados por um final de linha, ordenados de acordo com a mania de Ambrosina. Os números devem ser formatados com 02 casas decimais.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordenar(double arr[], int tamanho, int indice) {
    if (indice >= tamanho - 1) return;
    
    if (arr[indice] > arr[indice + 1]) 
    {
        double temp = arr[indice];
        arr[indice] = arr[indice + 1];
        arr[indice + 1] = temp;
    }
    ordenar(arr, tamanho, indice + 1);
}

void bubbleSort(double arr[], int tamanho) {
    if (tamanho <= 1) return;
    
    ordenar(arr, tamanho, 0);
    
    bubbleSort(arr, tamanho - 1);
}

void impressao_lista(double lista[], int i, int tam)
{
    if(i == tam) return;
    else{
        printf("%.2f\n", lista[i]);
        impressao_lista(lista, i + 1, tam);
    }
}

int main() {

    double alturas[4];

    scanf("%lf%lf%lf%lf", &alturas[0], &alturas[1], &alturas[2], &alturas[3]);
    
    bubbleSort(alturas, 4);

    double auxiliar;
    auxiliar = alturas[1];
    alturas[1] = alturas[2];
    alturas[2] = alturas[3];
    alturas[3] = auxiliar;

    impressao_lista(alturas, 0, 4);

    return 0;
}
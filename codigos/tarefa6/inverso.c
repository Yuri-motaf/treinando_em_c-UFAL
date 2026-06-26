/*
Seu programa deve receber um vetor de N valores inteiros e imprimir na ordem inversa.

Formato de entrada

Na primeira linha de entrada o programa recebe um valor inteiro N de entrada. A segunda linha contém N inteiros separados por espaço contendo os valores do array.

Formato de saída

Uma linha contendo os números do vetor em ordem invertida separados por espaços em branco, seguida de um final de linha.
Depois do último número, não deve existir um espaço em branco.


*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int inverter_lista(int lista[], int i, int tam)
{
    if(i == tam) return;
    else
    {
        printf("%d" , lista[tam - i]);
        return inverter_lista(lista , i+1 , tam);
    }
}

int atribuir_lista(int lista[], int i, int tam)
{
    if(i == tam){
        return 0;
    }
    else{
        scanf("%d", &lista[i]);
        return atribuir_lista(lista , i + 1, tam);
    }
}

int main(){
    int n; 
    scanf("%d" , &n);

    int lista[n];

    atribuir_lista(lista , 0 , n);

    inverter_lista(lista, 1 , n);

    return 0;
}
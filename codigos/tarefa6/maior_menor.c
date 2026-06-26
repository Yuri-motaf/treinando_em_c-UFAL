/*
Descrição
Faça um programa que imprime na tela o menor e o maior elemento de um array de 6 inteiros.

Você deve ter duas funções (uma para o menor e outra para o maior) que recebem como parâmetro um ponteiro para o array.

Formato de entrada

Os 6 valores que serão inseridos no array, linha a linha.

Formato de saída

O menor e o maior valor do array em duas linhas, respectivamente.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

int maior_lista(int lista[], int i , int tam , int maior)
{
    if(i == tam) return maior;
    else{
        if(lista[i] > maior) maior = lista[i];
        return maior_lista(lista , i + 1, tam, maior);
    }
}

int menor_lista(int lista[], int i , int tam, int menor)
{
    if(i == tam) return menor;
    else {
        if(lista[i] < menor) menor = lista[i];
        return menor_lista(lista , i + 1, tam, menor);
    }
}

int main() {
    int lista[6];
    atribuir_lista(lista, 0 , 6);

    int maior = maior_lista(lista , 0 , 6 , 0);

    int menor= menor_lista(lista , 0 , 6 , 100);

    printf("%d\n%d", menor , maior);
	return 0;
}
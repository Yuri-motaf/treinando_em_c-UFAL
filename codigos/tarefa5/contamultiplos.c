/*
Escreva um programa que receba como entrada dois números e retorne a quantidade de números positivos menores que 50 que são múltiplos de ambos.

Formato de entrada

Dois números inteiros quaisquer

Formato de saída

Um número inteiro

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conta_multiplos(int x , int y , int i , int cont)
{
    if(i == 50) return cont;

    if((i % x == 0)&& (i % y == 0)) cont += 1;

    return conta_multiplos(x , y , i + 1, cont);
}

int main() {

    int x , y;
    scanf("%d %d", &x ,&y);

    int multiplos = conta_multiplos (x , y , 1 , 0);
    
    printf("%d", multiplos);

	return 0;
}
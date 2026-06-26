/*
Formato de entrada

A entrada é dada em uma única linha contendo uma sequência de números inteiros
positivos. O último número da linha é 0 (zero).

Considere:

1 <= tamanho da sequência <= 100

1 <= número da sequência <= 100

Formato de saída

Seu programa deve imprimir o maior número dentre os números da entrada.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int comparar(int maior)
{   
    int num;
    scanf("%d", &num);

    if(num == 0) return maior;

    if(num > maior) maior = num;

    return comparar(maior);
}   


int main() {

    int mostrar = comparar(0);
    printf("%d" , mostrar);
	return 0;
}
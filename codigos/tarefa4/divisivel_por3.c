/*
O problema envolve achar a quantidade de divisores de um número que são divisíveis por 3.

Formato de entrada

Um inteiro N.

Formato de saída

Um inteiro R seguido de um final de linha, sendo R o número de divisores de N que são divisiveis por 3. Caso não tenha nenhum imprima "O numero nao possui divisores multiplos de 3!" sem as aspas e com um final de linha.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int div_3(int N, int ini, int cont)
{
    if(N < ini)
    {
        return cont;
    }
    else
    {
        if(N % ini == 0 && ini % 3 == 0) cont +=1;

        return div_3(N , ini + 1, cont);
    }
}

int main(){
    int N;
    
    scanf("%d", &N);

    int contador = div_3(N , 3 , 0);

    if(contador == 0) printf("O numero nao possui divisores multiplos de 3!");
    else printf("%d", contador);


    return 0;
}
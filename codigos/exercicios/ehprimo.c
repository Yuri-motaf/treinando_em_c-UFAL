/*
Faça um programa que dado um número indique se ele é um primo ou não.

Formato de entrada

Você irá receber uma sequência de números separados por um final de linha. A entrada termina quando o número lido for -1.

Formato de saída

Para cada número lido você deve imprimir 0 caso o número não seja primo ou 1 caso seja.

Depois de cada 0 ou 1 impresso, coloque um final de linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int primo(int n, int div, int cont){
    if(n < div)
    {
        if(cont == 2) return 1;
        else return 0;
    }
    else
    {
        if(n % div == 0) cont +=1;
        return primo(n , div + 1, cont);
    }
}

void entrada()
{
    int n ;
    scanf("%d", &n);
    if(n == -1)
    {

    }
    else
    {
        int ehprimo;
        ehprimo = primo(n , 1 , 0);
        printf("%d\n", ehprimo);
        entrada();
    }
}

int main(){
    
    entrada();
    
    return 0;
}
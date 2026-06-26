/*
Escreva uma função recursiva chamada ContaDigitosPares que receba como entrada um número e retorne a quantidade de dígitos pares que o compõem.

Ex: 234 tem 3 dígitos, mas apenas 2 são pares
*/

/*
    entrada:
    Um número inteiro
    saida:
    Um número inteiro
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contar_pares(int x, int cont)
{
    int n_analisado , resto;
    
    if(x< 10)
    {
        if(x % 2 == 0) cont +=1;
        return cont;
    }
    else
    {   n_analisado = x % 10;
        resto = x / 10; 
        if(n_analisado % 2 == 0)
        {
            cont +=1;
        }
        return contar_pares(resto, cont);
    }
}

int main(){
    int num;
    int pares;
    
    scanf("%d", &num);

    pares = contar_pares(num , 0);
    printf("%d", pares);
    return 0;
}
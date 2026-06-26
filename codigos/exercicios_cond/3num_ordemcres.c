/*
Faça um programa que leia 3 números inteiros e os imprima em ordem crescente.

entrada: 03 números inteiros separados por um final de linha.

saida : Os 03 números lidos impressos em ordem crescente, cada um em uma linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b , c ;
    
    scanf("%d %d %d", &a, &b ,&c);
    
    if(a>c || b>c)
    {
        if(a>b)
        {
            int novo_c = a;
            a = c;
            c = novo_c;
        }
        else
        {
            int novo_c = b;
            b = c;
            c = novo_c;
        }
    }
    if(a > b)
    {
        int novo_b = a;
        a = b;
        b = novo_b;
    }
    
    printf("%d\n%d\n%d\n", a , b , c);
    
    return 0;
}
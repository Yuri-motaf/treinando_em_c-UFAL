#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Calcule os fatoriais de uma sequência de números dada.

entrada: 
    O programa receberá uma sequência de inteiros n, onde 0<=n<=12.
    O programa encerra a sua execução quando o número n dado for -1.

saida: 
    Para cada n, deve-se imprimir um inteiro k seguido de um final de linha, correspondendo ao fatorial.
*/

int fatorial(int x) 
{
    if(x ==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x-1);
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
        int n_fat;
        n_fat = fatorial(n);
        printf("%d\n", n_fat);
        entrada();
    }
}


int main(){
    
    entrada();

    return 0;
}
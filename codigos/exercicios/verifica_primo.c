/*
Faça um programa que dado um número indique se ele é um primo ou não. Nesta versão iniciante não se preocupe com a eficiência. Se você consegue cumprir essa missão de forma eficiente, já tentou o problema 260 - É um número primo? ;-) Boa sorte!!

entrada
        Você irá receber uma sequência de números separados por um final de linha. A entrada termina quando o número lido for -1.

saida
        Para cada número lido você deve imprimir 0 caso o número não seja primo ou 1 caso seja.
        Depois de cada 0 ou 1 impresso, coloque um final de linha.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verifica(int n, int d) 
{    
    if (d == n) 
    {
        return 1;  
    }
    if (n % d == 0) 
    {
        return 0;  
    }
    else
    {
        return verifica(n, d + 1);
    }    
}

int Primo(int n)
{
    if(n <= 1) 
    {
        return 0;
    }
    else 
    {
        return verifica(n, 2); 
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
        int pr;
        pr = Primo(n);
        printf("%d\n", pr);
        entrada();
    }
}
int main() {
    
    entrada();
	
    return 0;
}





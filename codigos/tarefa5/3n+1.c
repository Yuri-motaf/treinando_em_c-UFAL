/*
Considere o seguinte algoritmo para gerar uma sequência de números. Comece com um inteiro n. Se n for par, divida por 2.
Se n for ímpar, multiplique por 3 e some 1. Repita esse processo com o novo valor de n, terminando quando n = 1. 
Por exemplo, a seguinte sequência de números será gerada quando n é 22:
B
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

Embora ainda não exista uma prova, os matemáticos acreditam que esse algoritmo sempre termina com n=1, para qualquer inteiro n.
Bem, para este problema aqui no Huxley, essa propriedade se mantém para qualquer inteiro menor que 1.000.000.

Para uma entrada n, o "tamanho do ciclo" de n é a quantidade de números gerados até o 1 (incluindo o próprio 1). 
No exemplo acima, o "tamanho do ciclo" de 22 é 16. 

Dado dois números i e j, determine o máximo "tamanho do ciclo" dentre todos os números entre i e j,
 incluindo tanto i quanto j.
//
    Formato de entrada
A entrada consiste de uma série de pares de inteiros i e j, um par de inteiros por linha. 
todos os inteiros serão menores que 1.000.000 e maiores que 0.

    Perceba que a entrada só termina quando não
    houveram mais números.
Descubra como fazer o seu programa funcionar nesse caso. Cada linguagem tem uma forma diferente de ler enquanto ainda houver 
entrada a ser lida.
    Formato de saída
Para cada par de inteiros i e j, imprima i e j na mesma ordem na qual eles aparecem na entrada e então imprima o máximo 
"tamanho de ciclo" encontrado. 
Esses 3 números devem ser separados por um espaço, com todos os 3 números em uma linha e sendo uma linha de saída 
para cada linha da entrada.

Veja o arquivo de exemplo para entender melhor o formato da entrada e da saída.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tamanho_ciclo(int n)
{
    if (n == 1) 
    {
        return 1;               
    }
    if (n % 2 == 0) 
    {
        return 1 + tamanho_ciclo(n / 2);   
    } 
    else 
    {
        return 1 + tamanho_ciclo((3 * n) + 1);
    }
}

int comparar(int inicio , int fim, int maior)
{
    if(inicio > fim)
    {
        return maior;
    }
    else
    {
        int novo_maior;
        novo_maior = tamanho_ciclo(inicio);
        if(novo_maior > maior)
        {
            maior = novo_maior;
        }
        return comparar(inicio + 1, fim , maior);
    }
}

void entrada()
{
    int num1 , num2; 
    if(scanf("%d", &num1) == 1 && scanf(" %d", &num2) == 1)
    {
        int maior;
        
        if(num2 < num1) maior = comparar(num2 , num1 , 0);
        else maior = comparar(num1 , num2, 0);

        printf("%d %d %d\n",num1, num2, maior );
        entrada();
    }
}

int main()
{
    entrada();
    
    return 0;
}
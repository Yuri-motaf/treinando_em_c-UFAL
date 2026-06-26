/*
Um número natural é  triangular se ele é produto de três números naturais consecutivos. Por exemplo: 120 é triangular, pois 4*5*6 = 120. O número 2730 é triangular, pois 13*14*15 = 2730. Dado um número natural (inteiro não-negativo) n, verifique se ele é triangular ou não. 

Formato de entrada

Um número natural

Formato de saída

Caso o número seja triangular, apresentar quais números formam o número triangular e a mensagem Verdadeiro. Veja exemplo a seguir:

13*14*15 = 2730

Verdadeiro

Caso o número não seja triangular, apresente a mensagem Falso.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificar(int N , int num, int condicao)
{
    int operacao = N * (N +1 ) * (N + 2);
    if(operacao > num)
    {
        printf("Falso");
        return 0;
    }
    else if(operacao == num) 
    {
        printf("%d * %d * %d = %d", N , N+1 , N + 2 , operacao);
        printf("\nVerdadeiro");
        return 0;
    }
    else return verificar(N + 1 , num , condicao );
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    if(num < 0)
    {
        printf("Falso");
    }
    else verificar(1 , num , 0);

	return 0;
}
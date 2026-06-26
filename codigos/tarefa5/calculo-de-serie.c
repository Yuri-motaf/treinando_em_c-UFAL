/*
Calcule o valor dos N elementos para a série S abaixo:

S = 1 + 

2/3 + - par

3/4 + - im

8/6 +  - par

5/16 +  - im

32/9 +  - par 

7/64 +  - im
... 


im:
numerador : primos
denominador: 4 elevado a um expoente(2 , 3 , 4 , 5 , 6)

Formato de entrada

Um número inteiro não-negativo

Formato de saída

Um número em ponto flutuante não-negativo

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo(int n, int div, int cont)
{
    if(n < div)
    {
        if(cont == 2) return 1;
        else return 0;
    }
    else
    {
        if(n % div == 0) cont +=1;
        return eh_primo(n , div + 1, cont);
    }
}

int proxPrimo(int n)
{
    n += 1;
    int verificador;
    verificador = eh_primo(n , 1/*div*/ , 0/*contador*/);
    if(verificador == 1)
    {
        return n;
    }
    else return proxPrimo(n);

}

float entradas(int n, float resultado, int i)
{
    float as;
    if(n < i) return resultado;

    if(i % 2 == 0){
        resultado += pow(2, i) / (3.0 * i);
    }
    if(i % 2 != 0){
        resultado += (double)i / pow(2, i - 1);
    }

    entradas(n, resultado , i + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    float resultado = entradas(n , 0, 1);

    printf("S: %.2f", resultado);
    return 0;
}
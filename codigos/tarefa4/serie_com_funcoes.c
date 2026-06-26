/*
Faça um programa que mostre os n primeiros termos e calcule o resultado da seguinte série:

1!/1 + 2!/2 + 3!/3 + 4!/5 + 5!/5 + 6!/7 + 7!/7 + 8!/11 + 9!/11 ...

A cada termo são apresentados no dividendo o fatorial dos números naturais não nulos. No divisor, a partir do segundo termo, temos o menor número primo que seja maior ou igual ao dividendo.

Nesse programa você deve fazer pelo menos 3 funções:

eh_primo(x): Retorna True ou False se um número é primo ou não
proximo_primo(y): Retorna o próximo número primo a partir de um número y dado
fatorial(z): Retorna o fatorial de um número
O retorno deve ser os termos da série e o resultado da soma.

Formato de entrada

Um número n que indica quantos termos devem ser calculados.

Formato de saída

Os termos da série e o resultado da soma com duas casas decimais de aproximação.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int x) 
{
    if(x == 1 || x== 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x-1);
    }
}

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

int prox_primo(int n)
{
    n += 1;
    int verificador;
    verificador = eh_primo(n , 1/*div*/ , 0/*contador*/);
    if(verificador == 1)
    {
        return n;
    }
    else return prox_primo(n);

}


double serie(int n,int ini, double resultado)
{
    if(ini > n)
    {
        return resultado;
    }
    if(ini == 1)
    {
        resultado += 1;
        printf("1!/1");
        return serie(n , ini + 1, resultado );
    }
    else
    {
        int divisor;

        int verificador = eh_primo(ini, 1, 0);
        
        if(verificador == 1)
        {
            divisor = ini; 
        }
        else
        {
            divisor = prox_primo(ini);
        }
        
        resultado += (double)fatorial(ini) / divisor;
        
        printf(" + %d!/%d", ini , divisor);

        return serie(n , ini + 1, resultado );
    }
}

int main() {

    int n;

    scanf("%d", &n);

    double final = serie(n , 1 , 0);
    
    printf("\n%.2lf", final);

    return 0;
}

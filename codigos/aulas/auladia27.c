#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    professor: paes
    assunto: mais exercicios sobre recursão.
*/

//-------EOF------
void lerAteOFinal() 
{
    int n;

    // Caso Base: se o scanf N�O conseguir ler um inteiro, ele para
    if (scanf("%d", &n) == EOF) 
    {
        return;
    }

    // Passo Recursivo
    printf("Lido: %d\n", n);
    lerAteOFinal();
}

/*---RECURS�O REGRESSIVA---*/

int fatorial(int n) 
{
    // Caso Base
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    // Passo Recursivo
    return n * fatorial(n - 1);
}

int fibonacci(int n) 
{
    // Caso Base
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Passo Recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int potencia(int base, int expoente) //REDU��O DE EXPOENTE
{
    // Caso Base
    if (expoente == 0) 
    {
        return 1;
    }
    // Passo Recursivo
    return base * potencia(base, expoente - 1);
}

int mdc(int a, int b) //EUCLIDES
{
    // Caso Base
    if (b == 0) 
    {
        return a;
    }
    // Passo Recursivo
    return mdc(b, a % b);
}


/*--------RECURS�O PROGRESSIVA--------*/

void converterBinario(int n) 
{
    // Caso Base
    if (n == 0) 
    {
        return;
    }

    // Passo Recursivo
    converterBinario(n / 2);

    // O resto da divis�o s� � impresso na volta, 
    // garantindo a ordem correta dos bits.
    printf("%d", n % 2);
}

void imprimirProgressivo(int n) 
{
    // Caso Base
    if (n <= 0) 
    {
        return;
    }

    // Passo Recursivo (Chamada vem ANTES do trabalho)
    imprimirProgressivo(n - 1);

    // O "trabalho" acontece na volta (desempilhamento)
    printf("%d ", n);
}




// int verificar_menor(int a ,int b)
// {
//     int menor = a;
//     if(menor > b )
//     {
//         menor = b;
//     }
//     return menor;
// }

//--------------------calculando de baixo para cima
int calculo_mdc(int a, int b, int temporario_mdc , int divisor)
{
    int temp_mdc = temporario_mdc;
    int div = divisor;
    if(div > b || div > a)
    {
        return temp_mdc;
    }
    else
    {
        if(a % div == 0 && b % div == 0)
        {
            temp_mdc = div;
            div ++;
            return calculo_mdc( a , b , temp_mdc , div);
        }
        else
        {
            div ++;
            return calculo_mdc( a , b , temp_mdc , div);
        }
    }
}

int main() {
    int num1, num2, div, mdc;
    printf("digite os dois numeros para achar o mdc:\n");
    scanf("%d \n%d", &num1, &num2);

    div = 1;
    mdc = 0;

    int resultado = calculo_mdc(num1 , num2, mdc , div);
    printf("%d\n", resultado);
    return 0;
}



//------------------ calculando de cima para baixo
// int calculo_mdc(int a, int b , int div)
// {
//     if(a % div == 0 && b % div == 0)
//     { 
//         return div;
//     }
//     else
//     {
//         div -=1;
//         return calculo_mdc(a , b , div);
//     }
// }


// int main() {
//     int num1, num2, div, mdc;                       
//     printf("digite os dois numeros para achar o mdc:\n");
//     scanf("%d \n%d", &num1, &num2);
    
//     int menor = num1;
//     if(menor > num2)
//     {
//         menor = num2;
//     }

//     div = menor;

//     int resultado = calculo_mdc(num1 , num2, div);
//     printf("%d\n", resultado);
//     return 0;
// }


//-------------------algorimo de euclides
int alg_euclides(int a, int b)
{
    if( a % b == 0) return b;

    else return alg_euclides(b , a % b);
} 

int main() {
    int num1, num2, div, mdc;                       
    printf("digite os dois numeros para achar o mdc:\n");
    scanf("%d \n%d", &num1, &num2);

    int resultado = alg_euclides(num1 ,num2);
    printf("%d\n", resultado);
    return 0;
}
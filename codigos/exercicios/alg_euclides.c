#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo_mdc(int a, int b)
{
    if( a % b == 0) return b;

    else return calculo_mdc(b , a % b);
} 

void entrada(int n,int cont)
{
    if(cont > n)
    {

    }
    else
    {
        int a, b ;
        scanf("%d %d", &a , &b);
        
        int mdc;
        mdc = calculo_mdc(a, b);
        printf("MDC(%d,%d) = %d\n", a , b , mdc);
        
        entrada(n ,cont + 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    entrada(n, 1);
    return 0;
}

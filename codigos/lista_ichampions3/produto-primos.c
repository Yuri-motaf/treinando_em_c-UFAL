#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// receber 4 int, fazer o produto se todos forem primos ou colocar SEM PRODUTO caso contrario
int verifica_primo(int n, int div, int cont){
    if(n < div)
    {
        if(cont == 2) return 1;
        else return 0;
    }
    else
    {
        if(n % div == 0) cont +=1;
        return verifica_primo(n , div + 1, cont);
    }
}

void inputs(int n, int prod)
{
    if(n == 0){
        printf("%d", prod);
        return;
    }
    
    int num;
    scanf("%d", &num);

    if(verifica_primo(num,1,0) == 1)
    {
        prod *= num;
    }
    else
    {
        printf("SEM PRODUTO");
        return;    
    }
    inputs(n - 1, prod);
}

int main()
{
    inputs(4 , 1);
    return 0;
}
///funções 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*

int soma(int a, int b)
{
    int soma;
    soma = a + b;
    return soma;
}


int main()
{
    int num1, num2;

    printf("digite dois num: ");

    scanf("%d\n%d", &num1 , &num2);

    printf("%d\n", soma(num1 , num2)); 
    
    return 0;
} 

*/

/*
int fatorial(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1); 
    }
}

int main(){
    int num;

    printf("digite um numero para saber seu fatorial:  ");
    
    scanf("%d", &num);

    printf("%d\n", fatorial(num));

    return 0;
}
*/

//=======================================================================

// int somatudo(int x)
// {
//     if(x == 0 )
//     {
//         return x;
//     }
//     else
//     {
//         return x + somatudo(x-1);
//     }
// }


// int main(void)
// {
//     int num;
//     printf("Digite um numero:  ");

//     scanf("%d\n", &num);

//     printf("%d\n", somatudo(num));
// }

// =-------------------=====-------------=-=-=-=-=-=

// int somatorio(int x);
// {
//     if(x == 1)
//     {
//         return 2;
//     }
//     else
//     {
//         return pow(2 , x) + somatorio(x - 1);
//     }
// }

// int main()
// {
//     int num;

//     printf("digite um numero por somatorio:  ");

//     scanf("%d", &num);

//     printf("\no somatorio é : %d\n", somatorio(num));

//     return 0;
// }

// =-=-==-=---------------------=-=-=--=-=-=fw=0fr=-wrf-=rw

// int soma(int x, int acumulado )
// {
//     if(x == 0)
//     {
//         return acumulado;
//     }
//     else
//     {
//         int num;
//         scanf("%d", &num);
//         acumulado += num;
//         return soma(x-1, acumulado);
//     }
// }

// int main()
// {
//     int a;
    
//     printf("digite uma quantidae de numeros: ");

//     scanf("%d", &a);

//     printf("%d\n", soma(a, 0));
// }


//=-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=---===--=--=-=-=-=-=-=-=-=-0-=0-48757-4857

int impressao(int x)
{
    if(x == 1)
    {
        printf("%d", x);
    }
    else
    {
        impressao(x-1);
        if(x % 5 == 0)
        {
            printf("\n");
        }
        printf("%d ", x);
    }
}

int main()
{
    int num;

    scanf("%d", &num);
    
    impressao(num);

    return 0;
}
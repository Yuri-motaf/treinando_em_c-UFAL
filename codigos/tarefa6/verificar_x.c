#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int atribuir_lista(int lista[], int i, int tam)
{
    if(i == tam){
        return 0;
    }
    else{
        scanf("%d", &lista[i]);
        return atribuir_lista(lista , i + 1, tam);
    }
}

int soma(int lista[], int i, int tam, int n, int qntd)
{
    if(i == tam)
    {
        return qntd;
    }
    else{
        if(lista[i] == n) qntd +=1;
        return soma(lista, i + 1,  tam, n, qntd);
    }

}

int main()
{
    int lista[10];

    atribuir_lista(lista , 0 , 10);    
    
    int n;
    
    scanf("%d", &n);
    
    int qntd_n = soma(lista, 0 , 10 , n , 0);
    
    printf("%d", qntd_n);

    return 0;
}
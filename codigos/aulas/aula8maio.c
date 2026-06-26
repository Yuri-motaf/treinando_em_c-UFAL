/*
aula dia 08/05/2026

assunto: revisou array e deu um pouco de introdução de ordenação.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int atribuir_lista(int lista[], int i, int tam)
{
    if(i == tam)return 0;
        
    scanf("%d", &lista[i]);
    return atribuir_lista(lista , i + 1, tam);    
}

void impressao_lista(int lista[],int i,int tam)
{
    if(i == tam)printf("fim da impressão da lista\n");

    printf("posicao num %d : %d\n", i , lista[i]);
    impressao_lista(lista , i + 1, tam);
}

int soma(int lista[], int i, int tam, int n, int qntd)
{
    if(i == tam) return qntd;
        
    if(lista[i] == n) qntd +=1;
    return soma(lista, i + 1,  tam, n, qntd);
}


void mostrar_numeros(int lista[], int inicio, int fim)
{
    if(inicio > fim) return;

    int qntd_n = soma(lista, 0 , 30 , inicio , 0);

    printf("a quantidade de %d que aparece na lista é: %d\n", inicio , qntd_n);
    mostrar_numeros(lista , inicio + 1 , 9);
}

int main()
{
    int lista[30];

    atribuir_lista(lista , 0 , 30);
    
    impressao_lista(lista, 0 , 30);
        
    mostrar_numeros(lista, 1 , 9);
    
    int nova_lista[10];
    return 0;
}


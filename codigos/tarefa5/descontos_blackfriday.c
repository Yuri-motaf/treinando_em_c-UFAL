/*
Descrição
A Black Friday é uma famosa promoção que ocorre em diversas lojas após o Dia de Ação de Graças Americano. Genésio não acredita muito nas propagandas e acha que é tudo enrolação e que os descontos não são tão bons assim.

Por isso, ele resolveu fazer uma pesquisa numa loja online. Ele anotou o preço de 5 produtos uma semana antes e no dia da promoção para ver se o desconto de 20% anunciado tinha sido realmente aplicado.

Escreva um programa que receba como entrada os preços original e com desconto de cada produto, e exiba ao final quantos realmente tiveram abatimento de pelo menos 20%.

Formato de entrada

Valores reais

Formato de saída

Um valor inteiro
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo(float precoNormal, float PrecoCdesconto)
{
    float precoHipotetico;
    precoHipotetico = precoNormal * 0.8;
    if(PrecoCdesconto <= precoHipotetico) return 1;
    else return 0;
}

int entradas(int z, int cont)
{
    if(z == 0)
    {
        return cont;
    }
    float X, Y;
    scanf("%f %f", &X , &Y);

    cont += calculo(X , Y);
    
    return entradas(z - 1, cont);
}

int main() {
    int resultado = entradas(5, 0);
    
    printf("%d", resultado);

    return 0;
}

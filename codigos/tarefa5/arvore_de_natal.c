/*
Esse ano Robson pretende montar uma bela árvore de Natal na empresa em que trabalha. Ele combinou com os outros 20 funcionários de seu setor de comprar tudo e depois ratear o valor. Pesquisando numa loja, ele encontrou a árvore prefeita e três tipos de enfeites com bons preços.

Escreva um programa que receba como entrada o valor da árvore, a quantidade e o preço unitário de cada tipo de enfeite (observe o formato de entrada), calcule e exiba o total gasto e o valor a ser pago por cada funcionário do setor.
---------------------------
Formato de entrada

Números reais no seguinte formato:

A primeira linha contém o valor da arvore;
Seguem duas linhas para cada tipo de enfeite, contendo respectivamente sua quantidade (número inteiro) e seu valor (número real).
----------------------------
Formato de saída

Dois valores reais, cada um com duas casas decimais
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma(int i ,float total)
{
    if(i == 3) return total;
    int qntd_enfeite ;
    float p_enfeite;
    scanf("%d %f",&qntd_enfeite ,&p_enfeite);

    total += qntd_enfeite * p_enfeite;
    return soma(i + 1 , total);
}

int main() {
    float vaARVORE;
    scanf("%f", &vaARVORE);

    float precoFinal = vaARVORE + soma(0 , 0);

    printf("%.2f", precoFinal);

    float precoFunc = (precoFinal / 21);
	
    printf("%.2f", precoFunc);
    
    return 0;
}
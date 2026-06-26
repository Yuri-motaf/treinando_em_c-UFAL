/*
Alguns professores do DCX adoram tomar café e decidiram adquirir uma cafeteira especial para a sala do Departamento. A cafeteira utiliza cápsulas de café de vários sabores para preparar a bebida, e cada cápsula prepara o equivalente a duas xícaras.

As cápsulas são vendidas em caixas pequenas (10 unidades) ou grandes (16 unidades), e ficou acertado que cada professor faria a doação de quantas caixas quisesse para o grupo.

Escreva um programa que receba como entrada a quantidade e o tamanho das caixas doadas por cada um dos sete professores que compartilham a cafeteira, e exiba a quantidade total de cápsulas de café doadas, e quantas xícaras cada professor poderá beber.

Formato de entrada

Um inteiro e um String (P ou p para caixas pequenas, G ou g para caixas grandes) para cada professor

Dica: os professores farão a doação de caixas, não de cápsulas avulsas

Formato de saída

Dois valores inteiros
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificar(int qntd , char tam)
{
    int capsulas;
    if(tam == 'p' || tam == 'P')
    {
        capsulas = qntd * 10 ;
    }
    else if(tam == 'g' || tam == 'G')
    {
        capsulas = qntd * 16 ;
    }

    return capsulas;
}

int entradas(int n , int total)
{
    if(n == 0) return total;
    int qntd ;
    char tam;

    scanf("%d", &qntd);
    scanf(" %c", &tam);

    int calculo_total = verificar(qntd , tam);

    return entradas( n - 1 , total += calculo_total);
}


int main() {
    int qntd_prof = 7;

    int total_capsulas = entradas(qntd_prof , 0);

    int cap_p_prof = total_capsulas / qntd_prof;
    int totalxicaras = cap_p_prof * 2;

    printf("%d\n", total_capsulas);
    printf("%d", totalxicaras);
	return 0;
}
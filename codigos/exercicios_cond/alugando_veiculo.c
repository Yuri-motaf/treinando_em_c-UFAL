/*
A Locadora de Veículos Eudora lançou uma grande promoção esse mês: pagando apenas R$ 90 por diária, o cliente pode alugar um carro de passeio. Para cada diária, o cliente recebe uma cota de quilometragem de 100 Km. Cada quilômetro a mais custará uma taxa extra de R$ 12.

Escreva um programa que receba como entrada a quantidade de dias e a quilometragem total rodada por um cliente dessa locadora e exiba o valor total a ser pago com duas casas decimais.
*/
/*
entrada : Dois valores inteiros, separados por uma quebra de linha
*/
/*
saida : Um valor real com duas casas decimais
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dias, km;
    float pagamento;
    int valor_KM = 0;

    scanf("%d %d", &dias ,&km);
    
    int kmPdia = km / dias;
    if(kmPdia > 100)
    {
        int execedido = kmPdia - 100;
        valor_KM = execedido * 12;
    } 



    pagamento = (dias * 90) + (valor_KM);
    
    printf("%.2f", pagamento);

    return 0;
}
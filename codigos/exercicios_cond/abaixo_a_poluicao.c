/*
Devido aos altos índices de poluição, uma cidade resolveu multar as casas que possuem mais de 2 veículos em R$ 12.89 por mês por cada veículo extra. Escreva um programa que receba como entrada a quantidade de veículos de várias residências, até que seja informado o valor 999, e exiba o total mensal arrecadado com as multas, e a quantidade de casas multadas.
*/
/*
Vários números inteiros
*/
/*
Um valor real com duas casas decimais, seguido por uma quebra de linha e um valor inteiro
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verificação(int cont, float multa)
{
    int n ;
    scanf("%d", &n);
    if(n == 999)
    {
        printf("%.2f\n", multa);
        printf("%d", cont);
    }
    else
    {
        if(n > 2){
            int veiculo_extra = n - 2;
            multa = multa + (veiculo_extra * 12.89);
            cont +=1;  
        }   
        verificação(cont, multa);
    }
}


int main() {
    verificação(0, 0);
	return 0;
}
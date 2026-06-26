/*
Escrever programa para exibir os múltiplos de N contidos entre os valores A e B, sendo N, A e B definidos pelo utilizador.

entrada: Três valores inteiros.  Cada um em uma linha distinta.  O primeiro valor, N,  corresponde ao número do qual se deseja verificar se há múltiplos.  Os outros dois valores, A e B inclusivos, correspondem aos limites do intervalo de valores a serem validados como múltiplos ou não de N

saida: 
Valores contidos entre A e B, que sejam múltiplos de N.

Caso não haja múltiplos de N, entre A e B, exibir: INEXISTENTE.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verifica_multiplico(int N, int ini , int fim, int cont)
{
    if(ini > fim)
    {
        if(cont == 0)
        {
            printf("INEXISTENTE");
        }
    }
    else
    {
        if(ini % N == 0)
        {
            cont += 1;
            printf("%d", ini);
        }
        return verifica_multiplico(N , ini + 1 , fim , cont);
    }
}
int main() {    
    int N , inicio , fim;
    scanf("%d %d %d", &N, &inicio , &fim);
    
    verifica_multiplico(N , inicio , fim , 0);

	return 0;
}
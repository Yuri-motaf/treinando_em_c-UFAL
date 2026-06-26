/*
João e Maria são dois irmãos muito briguentos. Um belo dia, o pai deles, o Sr. Carlos, comprou várias figurinhas do álbum da copa. João disse que por ser menino tinha direito a mais figurinhas. Obviamente, Maria não concordou e propôs um acordo de risco. Eles iriam dividir as figurinhas da seguinte maneira:

João ficaria com todas as figurinhas cujo número de série for par e Maria com as ímpares. O Sr. Carlos gostou da idéia e propôs um pequeno bônus:

- Aquele que obtivesse o maior valor somando os números de séries das figurinhas ganharia como bônus mais R$10,00 reais para comprar figurinhas só para ele.

Formato de entrada

Consiste de um número inteiro n indicando a quantidade de figurinhas a serem lidas, seguido de n inteiros correspondendo ao número de série de cada
figurinha. Todas as figurinhas possuem números de série diferentes. Note que as figurinhas podem ser repetidas. Neste caso, só devemos considerar na soma do número de série uma única vez, mas contamos na quantidade de figurinhas.

Considere:

 n <= 10.000
Cada inteiro <= 13.000


Formato de saída

Consiste dos números inteiros J, M e S, indicando respectivamente, o número de figurinhas que ficaram com o João, o número de figurinhas que ficaram com Maria e a soma dos números de série do irmão que ganhou o bônus do Sr. Carlos.

Depois de cada número da saída coloque um final de linha.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int somaJ = 0, somaM = 0;
int qntdJ = 0, qntdM = 0;
int listaJ[10000] = {0};
int listaM[10000] = {0};
int indexJ = 0, indexM = 0;

int x_in_list(int num, int lista[], int tamanho, int indice)
{
    if(indice == tamanho) return 0;
    if(lista[indice] == num) return 1;
    return x_in_list(num, lista, tamanho, indice + 1);
}

void entradas(int n)
{
    if(n == 0) return;

    int x;
    scanf("%d", &x);
    
    if(x % 2 == 0)
    {
        qntdJ += 1;
        if(!x_in_list(x, listaJ, indexJ, 0))
        {
            somaJ += x;
            listaJ[indexJ] = x;
            indexJ += 1;
        }
    }
    else
    {
        qntdM += 1;
        if(!x_in_list(x, listaM, indexM, 0))
        {
            somaM += x;
            listaM[indexM] = x;
            indexM += 1;
        }
    }

    entradas(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    entradas(n);

    printf("%d\n", qntdJ);
    printf("%d\n", qntdM);
    
    if(somaJ > somaM)
        printf("%d\n", somaJ);
    else
        printf("%d\n", somaM);

	return 0;
}
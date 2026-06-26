/*
Descrição
"Pega ladrão! Pega ladrão"

Roubaram a bolsa de uma inocente senhora que caminhava na praia da Nlogônia e o ladrão fugiu em direção ao mar. Seu plano parece óbvio: ele pretende pegar um barco e escapar!

O fugitivo, que a essa altura já está a bordo de sua embarcação de fuga, pretende seguir perpendicularmente à costa em direção ao limite de águas internacionais, que está a 12 milhas náuticas de distância, onde estará são e salvo das autoridades locais. Seu barco consegue percorrer essa distância a uma velocidade constante de VF nós.

A Guarda Costeira pretende interceptá-lo, e sua embarcação tem uma velocidade constante de VG nós. Supondo que ambas as embarcações partam da costa exatamente no mesmo instante, com uma distância de D milhas náuticas entre elas, será possível a Guarda Costeira alcançar o ladrão antes do limite de águas internacionais?

Assuma que a costa da Nlogônia é perfeitamente retilínea e o mar bastante calmo, de forma a permitir uma trajetória tão retilínea quanto a costa.

Formato de entrada

A entrada é composta por diversos casos de teste. Cada caso de teste é descrito em um linha contendo três inteiros, D, VF e VG, indicando respectivamente a distância inicial entre o fugitivo e a Guarda Costeira, a velocidade da embarcação do fugitivo e a velocidade da embarcação da Guarda Costeira.

A entrada encerra quando D, VF e VG forem -1

Restrições:

1<= D <= 100
1 <= VF <= 100
1 <= VG <= 100
Formato de saída

Para cada caso de teste imprima uma linha contendo 'S' se for possível que a Guarda Costeira alcance o fugitivo antes que ele ultrapasse o limite de águas internacionais ou 'N' caso contrário.
*/
/*
exemplo
entrada:
5 1 12
12 10 7
12 9 10
10 5 5
9 12 15
-1 -1 -1
saida:
S
N
N
N
S

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int D, VF , VG;
    scanf("%d%d%d", &D, &VF, &VG);
    if(D == -1 && VF == -1 && VG == -1) return 0;


    float distG;
    distG = sqrt((pow(D,2)) + (pow(12,2)));

    float tempoF = (float) 12.0/ VF;
    float tempoG = (float) distG/ VG;

    if(tempoF >= tempoG) printf("S\n");
    else printf("N\n");
    
    return main();
}

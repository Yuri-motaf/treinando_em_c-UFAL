/*
A Taylor Swift é uma grande colecionadora de figurinhas. Seus fãs, sabendo disso, 
decidiram presenteá-la ao longo de várias semanas. Para cada tipo de figurinha, Taylor já possui uma quantidade inicial de figurinhas e, 
a cada semana, recebe uma quantidade crescente, seguindo um padrão bem organizado:

Na primeira semana, recebe Fᵢ figurinhas;

Na segunda semana, recebe Fᵢ + Rᵢ figurinhas;

Na terceira semana, recebe Fᵢ + 2·Rᵢ figurinhas;

E assim por diante, até completar Sᵢ semanas.

Como Taylor tem muitos tipos de figurinhas e uma coleção enorme, ela não quer perder tempo contando tudo sozinha. 
Você, como um grande fã, deve ajudá-la a calcular o total final de figurinhas de cada tipo após todas as semanas.

*/

/*
ENTRADA:
A primeira linha contém um inteiro N, o número de tipos de figurinhas.

Em seguida, seguem N linhas, cada uma contendo três inteiros Fᵢ Sᵢ Rᵢ, onde:

Fᵢ = quantidade inicial de figurinhas do tipo i;

Sᵢ = número de semanas que Taylor recebe figurinhas desse tipo;

Rᵢ = incremento de figurinhas a cada semana do tipo i.
*/

/*
SAIDA:
Para cada tipo de figurinha, imprimir um único número inteiro representando o total final de figurinhas, seguido de uma quebra de linha.


*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int calculo_de_fig(int qntd_fig , int incremento , int total_semanas , int aux,int result)
{
    printf("%d %d %d %d %d\n", qntd_fig, incremento , total_semanas , aux ,result);
    if(total_semanas == aux)
    {
        return result;
    }
    else
    {
        result = qntd_fig + (qntd_fig + (aux * incremento));
        
    
        aux += 1;
        calculo_de_fig(qntd_fig , incremento , total_semanas , aux, result);
    }
}


void entradas(int N)
{
    if(N == 0)
    {}
    else
    {
    int Fi, Si, Ri;
    int qntdInicial;

    qntdInicial = Fi;
    scanf("%d %d %d", &Fi, &Si, &Ri);

    int figurinhas;
    figurinhas = calculo_de_fig(Fi, Ri, Si, 0, 0);
    
    printf("%d", figurinhas);
    entradas(N-1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    entradas(N);

    return 0;
}
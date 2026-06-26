/*
    Rick e Morty resolveram realizar outra aventura no mundo dos sonhos, no entanto, dessa vez eles vão utilizar um dispositivo diferente que necessita de uma calibração manual,da quantidade de energia que deve ser utilizada por esse dispositivo, essa calibração deverá ser feita de acordo com a seguinte série:

    Uma série numérica, seguindo o padrão: fica alternando entre adicionar 3 e adicionar o resto da divisão por 5 do numero anterior começando com um valor N dado.Onde N é o tempo em que a primeira pessoa está dormindo. E a cada pessoa que entramos dentro do sono passamos pro elemento seguinte da série.

    Faça um algoritmo, recursivo, que calcula qual será o número que será colocado no dispositivo em função do tempo inicial do sonho e a camada dos sonhos que eles estão.

    Exemplo:

    caso N seja 0, a série terá o formato:
    0 3 6 9 13 16 17 20 20 23 26 29 33 36 37 40 40 43 46...
*/

/*
    entrada:
    N T
    A entrada consiste de um inteiro T, que será a camada que eles se encontram, precedida de um inteiro N, a quantidade de tempo que a primeira pessoa está dormindo, que será o número inicial da série, onde: 0 corresponde à camada inicial; 1 à camada depois da primeira iteração da série; 2 à camada depois da segunda, etc.
*/

/*
    saida:
    R
    A saída consiste de um inteiro R, que é o T-ésimo inteiro retornado pela série.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rickception(int n, int t, int camada)
{
    if (camada > t)
    {
        return n;
    }
    if (camada > 0)
    {
        if (camada % 2 == 1)
        {
            n += 3;
            return rickception(n , t, camada + 1);
        }
        else
        {
            n += (n % 5);
            return rickception(n, t, camada + 1);
        }
    }

    return rickception(n, t, camada + 1);
}

int main()
{
    int N , T ;
    scanf("%d %d", &N ,&T);

    int r = rickception(N , T , 0);
    printf("%d" , r);
    return 0;
}

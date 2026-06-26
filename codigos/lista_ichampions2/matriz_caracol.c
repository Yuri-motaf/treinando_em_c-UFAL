/*
Ambrosino, um programador aposentado, começou a criar caracois. Mas não são caracóis comuns, eles vieram de um planeta distante onde os caracois sabem  falar e ler. Entretanto, Ambrosino começou a perceber que os caracois estão exibindo um comportamento muito estranho. Eles estão andando em um movimento espiral. Rapidamente, ele se lembrou dos primeiros algoritmos para percorrer matrizes. Normalmente o seu professor de programação mostrava como percorrer uma matriz horizontalmente (linha por linha) ou verticalmente (coluna por coluna). Então ele pensou, e se eu quiser percorrer a matriz da mesma maneira que os caracóis estão andando?

Você irá receber a dimensão e depois os números inteiros de uma matriz quadrada como entrada. Mas os números serão dados na ordem do "caminho de caracol". As figuras abaixo mostram como seria esse caminho. Sua missão é receber essa matriz e depois imprimir linha por linha.

No primeiro caso, na matriz 2X2, você receberá
2 8 5 3 7

e deve imprimir:
8 7 5 3

Já na matriz 4x4 você receberá:
4 3 1 6 12 14 30 20 15 77 76 
56 34 2 8 9 65

e deve imprimir:
3 34 56 76 1 2 65 77
6 8 9 15 12 14 30 20

Formato de entrada

Consiste de um número n representando a dimensão de uma matriz n X n. Depois, serão dados os n*n números inteiros de acordo com o "caminho de caracol".

Formato de saída

Imprima a matriz, linha por linha, da esquerda para a direita, um número por linha.

Exemplos de:
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void consertar_lista(int lista[], int tamanho , int i)
// {
//     if(i == tamanho) return;

// }

void impressao_lista(int lista[],int i,int tam)
{
    if(i == tam)
    {
        printf("fim da impressão da lista\n");
    }
    else{
        printf("posicao num %d : %d\n", i , lista[i]);
        impressao_lista(lista , i + 1, tam);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int tamanho = n * n;
    
    int lista[tamanho];

    for(int i = 0; i <= tamanho - 1; i++)
    {
        scanf("%d", &lista[i]);
    }

    //consertar_lista(lista , tamanho , 0 );

    impressao_lista(lista , 0 , tamanho);
    return 0;
}
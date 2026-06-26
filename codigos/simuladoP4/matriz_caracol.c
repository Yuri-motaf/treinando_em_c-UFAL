/*
Ambrosino, um programador aposentado, começou a criar caracois. Mas não são caracóis comuns, eles vieram de um planeta distante onde os caracois sabem  falar e ler. Entretanto, Ambrosino começou a perceber que os caracois estão exibindo um comportamento muito estranho. Eles estão andando em um movimento espiral. Rapidamente, ele se lembrou dos primeiros algoritmos para percorrer matrizes. Normalmente o seu professor de programação mostrava como percorrer uma matriz horizontalmente (linha por linha) ou verticalmente (coluna por coluna). Então ele pensou, e se eu quiser percorrer a matriz da mesma maneira que os caracóis estão andando?

Você irá receber a dimensão e depois os números inteiros de uma matriz quadrada como entrada. Mas os números serão dados na ordem do "caminho de caracol". As figuras abaixo mostram como seria esse caminho. Sua missão é receber essa matriz e depois imprimir linha por linha.


No primeiro caso, na matriz 2X2, você receberá
2
8
5
3
7

e deve imprimir:
8
7
5
3

Já na matriz 4x4 você receberá:
4
3
1
6
12
14
30
20
15
77
76
56
34
2
8
9
65

e deve imprimir:
3
34
56
76
1
2
65
77
6
8
9
15
12
14
30
20

Formato de entrada

Consiste de um número n representando a dimensão de uma matriz n X n. Depois, serão dados os n*n números inteiros de acordo com o "caminho de caracol".

Formato de saída

Imprima a matriz, linha por linha, da esquerda para a direita, um número por linha.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n; scanf("%d", &n);
    int arr[n*n];
    int matriz[n][n];

    //ler a matriz num array
    for(int i = 0; i < n*n ;i++) scanf("%d", &arr[i]);


    int inicioL = 0, inicioC = 0, fimL = n - 1, fimC = n - 1; 
    
    int idx = 0; //idx para controlar qual termo do arr vai p matriz
    for(int k = 0; k < n * n; k++){
        
        //1 situação
        for(int i = inicioL; i < fimL; i++){
            matriz[i][inicioC] = arr[idx];
            idx += 1;
        }        

        //2 situaçao
        for(int i = inicioC; i < fimC; i++){
            matriz[fimL][i] = arr[idx];
            idx += 1;
        }

        //3 situação
        for(int i = fimC; i > inicioL; i--){
            matriz[i][fimC] = arr[idx];
            idx += 1;
        }
        
        //4 situação
        for(int i = fimC; i > inicioL; i--){
            matriz[inicioL][i] = arr[idx];
            idx += 1; 
        }

        if(inicioL == fimL && inicioC == fimC && idx < n*n) {
            matriz[inicioL][inicioC] = arr[idx];
            break;
        }
        //atualiza as restrições
        inicioC +=1;
        inicioL +=1;
        fimL -= 1;
        fimC -= 1;
    }

    

    //printar td
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\n", matriz[i][j]);
        }
    }
    return 0;
}



/*
    4situações
    ler a linha de cima p baixo so muda o i ++ e deixa o j estatico
    ler a coluna da esquerda p direita i est e j variado ++
    ler a linha de baixo p cima i varia -- e j est
    ler a coluna da diretia p esquerda i est e j --
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Aula sobre arrays em C
/*
array(vetores) é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo. estruturas homogeneas unidimensionais, ou seja, possuem apenas uma linha e várias colunas. O acesso aos elementos do array é feito por meio de índices, onde o primeiro elemento tem índice 0, o segundo elemento tem índice 1, e assim por diante.
 
os elementos de um array são armazenados em posições contíguas de memória, o que permite acesso rápido e eficiente aos dados. arrays são amplamente utilizados em programação para armazenar e manipular grandes quantidades de dados de forma organizada e eficiente.

o nome do array é um ponteiro para o primeiro elemento do array, ou seja, o nome do array é equivalente ao endereço do primeiro elemento. por exemplo, se temos um array de inteiros chamado "numeros", o nome "numeros" é um ponteiro para o primeiro elemento do array, ou seja, "numeros[0]". isso significa que podemos acessar os elementos do array usando a notação de índice, como "numeros[0]", "numeros[1]", etc., ou usando a notação de ponteiro, como "*numeros", "*(numeros + 1)", etc.
*/

/* -> Declaração de um array:
    tipo nome_do_array[tamanho]; array possuem tamanho fixo, ou seja, o número de elementos deve ser definido no momento da declaração.
exemplos:
int main(){

    float notas[5]; // declaração de um array de 5 elementos do tipo float

    int idades[3] = {20, 30, 40}; // declaração e inicialização de um array de 3 elementos do tipo int
 
    char nomes[4][20] = {{"João"}, {"Maria"}, {"Pedro"}}; // declaração e inicialização de um array de 4 elementos do tipo char, onde cada elemento é uma string de até 20 caracteres
}
*/


//=================================================
//exercicio 3: Escreva um programa em C que declare um array de 10 notas de um aluno, preencha o array com valores fornecidos pelo usuário e, em seguida, calcule e exiba a média dos valores.
// int main(){
//     float notas[10];

//     for(int i = 0; i < 10 ; i++){
//         scanf("%f", &notas[i]);
//     }
//     float somanotas;
//     for(int i = 0 ; i < 10 ; i++){
//         somanotas += notas[i];
//     }
//     float media = somanotas/ 10.0;
//     printf("%.2f", media);
// }
//=================================================




//==================================================
// int main(){
//     int numeros[11];
//     printf("digite os numeros do vetor:");
//     for(int i = 0; i < 10; i++){
//         scanf("%d",&numeros[i]);
//     }
//     printf("digite o numero a ser procurado: ");
//     int n; scanf("%d", &n);
//     int idx_sentinela = 10;

//     for(int i = 0; i < 11 ;i++ ){
//         if(numeros[i] == n && i != idx_sentinela){
//             printf("achei na posição %d", i);
//             break;
//         }
//         if(i == idx_sentinela) printf("não achado\n");
//     }
//     return 0;
// }
//=================================================





/*
array bidimensional: um array bidimensional é uma estrutura de dados que armazena uma coleção de elementos organizados em linhas e colunas. é como uma tabela, onde cada elemento é identificado por dois índices: um para a linha e outro para a coluna. a declaração de um array bidimensional em C é feita da seguinte forma:
tipo nome_do_array[linhas][colunas];
exemplo:
int main(){
    int matriz[3][4]; // declaração de um array bidimensional de 3 linhas e 4 colunas do tipo int
*/

// int main(){
//     int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; // declaração e inicialização de um array bidimensional de 3 linhas e 4 colunas do tipo int

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }  

void adicionar_elementos(int inicio[], int destino[], int idx , int fim){
    if(idx == fim) return;

    destino[idx] = inicio[idx];

    adicionar_elementos(inicio , destino, idx + 1 , fim);
}


int main(){
    int n = 3;int arrayA[n];
    int b = 4; int arrayB[b];

    int arrayC[b+n];


    adicionar_elementos(arrayA , arrayC , 0 , n - 1);

    adicionar_elementos(arrayB, arrayC , n , b - 1);
}


#include <stdio.h>

// fibonaci
// int main() {
//     int sequencia[10] = {1, 1, 1, 2, 3, 3, 4, 1, 1, 1}; // Exemplo de blocos
//     int pontuacao_total = 0; // Este é o seu acumulador
//     int combo_atual = 1;

//     // Laço para varrer o array simulando o jogo
//     for (int i = 1; i < 10; i++) {
//         if (sequencia[i] == sequencia[i - 1]) {
//             combo_atual++;
//         } else {
//             // Se o combo quebrou, calcula os pontos acumulados até aqui
//             if (combo_atual >= 3) {
//                 pontuacao_total += combo_atual * 100; // Acumulando os pontos
//             }
//             combo_atual = 1; // Reseta o contador de combo para o próximo bloco
//         }
//     }
    
//     // Tratamento para caso o combo termine no último elemento do array
//     if (combo_atual >= 3) {
//         pontuacao_total += combo_atual * 100;
//     }

//     printf("Pontuacao Final: %d\n", pontuacao_total);
//     return 0;
// }



// code crush
// #include <stdio.h>

// // Definimos um limite máximo seguro para o tamanho do array
// #define TAM_MAX 61

// int main() {
//     // Usamos unsigned long long porque Fibonacci cresce muito rápido e estoura o int comum
//     unsigned long long int fib[TAM_MAX];
//     int termos_solicitados, posicao;

//     // 1. Inicialização dos Casos Base
//     fib[0] = 0;
//     fib[1] = 1;

//     // 2. Preenchimento do Array usando a memória dos passos anteriores
//     for (int i = 2; i < TAM_MAX; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     // 3. Leitura de quantas consultas o professor vai rodar no teste
//     printf("Quantas consultas deseja fazer? ");
//     scanf("%d", &termos_solicitados);

//     // 4. Loop para responder as consultas instantaneamente
//     for (int i = 0; i < termos_solicitados; i++) {
//         printf("Digite a posicao do termo que quer consultar (0 a 60): ");
//         scanf("%d", &posicao);

//         if (posicao >= 0 && posicao < TAM_MAX) {
//             // %llu é o especificador de formato para unsigned long long int
//             printf("Fib(%d) = %llu\n", posicao, fib[posicao]);
//         } else {
//             printf("Posicao fora do limite simulado (0 a 60).\n");
//         }
//     }

//     return 0;
// }
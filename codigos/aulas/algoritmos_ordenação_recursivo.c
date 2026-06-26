/*

tipos de ordenação/ "sort"


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*bubble sort
Bubble Sort é um algoritmo de classificação simples que funciona trocando repetidamente elementos adjacentes se eles estiverem na ordem errada. Ele é usado principalmente para pequenos conjuntos de dados onde a facilidade de implementação é preferível à velocidade. 
*/
// Função recursiva que compara e ordena elementos
// Retorna o índice para continuar

// void ordenar(int arr[], int tamanho, int indice) {
//     // Caso base: chegou ao final
//     if (indice >= tamanho - 1) return;
    
//     // Compara o elemento atual com o próximo
//     if (arr[indice] > arr[indice + 1]) 
//     {
//         // Troca os elementos
//         int temp = arr[indice];
//         arr[indice] = arr[indice + 1];
//         arr[indice + 1] = temp;
//     }
//     // Chama recursivamente para o próximo elemento
//     ordenar(arr, tamanho, indice + 1);
// }

//     // Função recursiva que controla as passadas
// void bubbleSort(int arr[], int tamanho) {
//     // Caso base: array com 1 elemento está ordenado
//     if (tamanho <= 1) return;
    
//     // Faz uma passada completa
//     ordenar(arr, tamanho, 0);
    
//     // Reduz o tamanho e faz nova passada
//     bubbleSort(arr, tamanho - 1);
// }

// // Função para imprimir array
// void imprimir(int arr[], int tamanho, int i) 
// {
//     if (i >= tamanho) {
//         printf("\n");
//         return;
//     }
    
//     printf("%d ", arr[i]);
//     imprimir(arr, tamanho, i + 1);
// }

// int main() {
//     int numeros[8] = {50, 30, 80, 10, 90, 20, 40, 70};
//     int n = 8;
    
//     printf("Array antes da ordenação:\n");
//     imprimir(numeros, n, 0);
    
//     bubbleSort(numeros, n);
    
//     printf("Array depois da ordenação:\n");
//     imprimir(numeros, n, 0);
    
//     return 0;
// }
//=--------------===-=-=-=-=-=-=-=-=-=-=-=------------------------------




/*Merge sort
Merge Sort é um algoritmo de classificação eficiente que segue a abordagem de divisão e conquista. Ele divide o array em subarrays menores, ordena cada subarray recursivamente e, em seguida, mescla os subarrays ordenados para produzir o array final ordenado. Merge Sort é especialmente eficaz para grandes conjuntos de dados e é estável, o que significa que mantém a ordem relativa dos elementos iguais.
*/
// Função recursiva que mescla dois subarrays ordenados
// void mesclar(int arr[], int esquerda, int meio, int direita, int temp[]) {
//     int i = esquerda;
//     int j = meio + 1;
//     int k = esquerda;
    
//     // Compara elementos dos dois subarrays e copia o menor
//     if (i <= meio) {
//         if (j <= direita) {
//             if (arr[i] <= arr[j]) {
//                 temp[k] = arr[i];
//                 mesclar(arr, i + 1, meio, direita, temp);
//             } else {
//                 temp[k] = arr[j];
//                 mesclar(arr, esquerda, meio, j + 1, temp);
//             }
//             return;
//         } else {
//             // Se j ultrapassou, copia elementos da esquerda
//             temp[k] = arr[i];
//             mesclar(arr, i + 1, meio, direita, temp);
//             return;
//         }
//     } else {
//         if (j <= direita) {
//             // Se i ultrapassou, copia elementos da direita
//             temp[k] = arr[j];
//             mesclar(arr, esquerda, meio, j + 1, temp);
//             return;
//         } else {
//             // Ambos terminaram, retorna
//             return;
//         }
//     }
// }

// // Função que copia temp para arr
// void copiar(int arr[], int temp[], int esquerda, int direita, int pos) {
//     if (pos > direita) {
//         return;
//     }
    
//     arr[pos] = temp[pos];
//     copiar(arr, temp, esquerda, direita, pos + 1);
// }

// // Função recursiva que divide o array
// void mergeSort(int arr[], int esquerda, int direita, int temp[]) {
//     // Caso base: subarray com um elemento
//     if (esquerda >= direita) {
//         return;
//     }
    
//     // Calcula o meio
//     int meio = esquerda + (direita - esquerda) / 2;
    
//     // Ordena metade esquerda
//     mergeSort(arr, esquerda, meio, temp);
    
//     // Ordena metade direita
//     mergeSort(arr, meio + 1, direita, temp);
    
//     // Mescla as duas metades
//     mesclar(arr, esquerda, meio, direita, temp);
    
//     // Copia temp para arr
//     copiar(arr, temp, esquerda, direita, esquerda);
// }

// // Função para imprimir array
// void imprimir(int arr[], int tamanho, int i) {
//     if (i >= tamanho) {
//         printf("\n");
//         return;
//     }
    
//     printf("%d ", arr[i]);
//     imprimir(arr, tamanho, i + 1);
// }

// int main() {
//     int numeros[10] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50};
//     int temp[10];
//     int n = 10;
    
//     printf("Array antes da ordenação:\n");
//     imprimir(numeros, n, 0);
    
//     mergeSort(numeros, 0, n - 1, temp);
    
//     printf("Array depois da ordenação:\n");
//     imprimir(numeros, n, 0);
    
//     return 0;
// }
//////

//ALGORITMO ENTROU EM LOOP INFINITO

//////




///quick sort
/*
quick Sort é um algoritmo de classificação eficiente que segue a abordagem de divisão e conquista. Ele seleciona um elemento como pivô e particiona o array em torno do pivô, colocando os elementos menores à esquerda e os maiores à direita. Em seguida, ele recursivamente ordena as subpartições. Quick Sort é amplamente utilizado devido à sua eficiência média e desempenho em grandes conjuntos de dados.

*/
// Função recursiva que reorganiza elementos em torno do pivô
int particionar(int arr[], int esquerda, int direita, int pivo_idx, int esq_atual) {
    // Caso base: terminou de particionar
    if (esq_atual > direita) return pivo_idx;
    
    // Se elemento é menor que o pivô, move para esquerda
    if (arr[esq_atual] < arr[pivo_idx]) 
    {
        // Troca
        int temp = arr[esq_atual];
        arr[esq_atual] = arr[pivo_idx];
        arr[pivo_idx] = temp;
        pivo_idx = esq_atual;
        esq_atual++;
    } 
    else
    {
        // Elemento é maior, deixa onde está
        esq_atual++;
    }
    
    // Continua particionando
    particionar(arr, esquerda, direita, pivo_idx, esq_atual);
    return pivo_idx;
}

// Função recursiva que ordena usando pivô
void quickSort(int arr[], int esquerda, int direita) 
{
    // Caso base: subarray com 0 ou 1 elemento
    if (esquerda >= direita) return;
    
    // Escolhe o primeiro elemento como pivô
    int pivo_idx = esquerda;
    
    // Particiona o array
    int novo_pivo = particionar(arr, esquerda, direita, pivo_idx, esquerda + 1);
    
    // Ordena subarray esquerdo
    quickSort(arr, esquerda, novo_pivo - 1);
    
    // Ordena subarray direito
    quickSort(arr, novo_pivo + 1, direita);
}

// Função para imprimir array
void imprimir(int arr[], int tamanho, int i) 
{
    if (i >= tamanho) {
        printf("\n");
        return;
    }
    
    printf("%d ", arr[i]);
    imprimir(arr, tamanho, i + 1);
}

int main() {
    int numeros[10] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50};
    int n = 10;
    
    printf("Array antes da ordenação:\n");
    imprimir(numeros, n, 0);
    
    quickSort(numeros, 0, n - 1);
    
    printf("Array depois da ordenação:\n");
    imprimir(numeros, n, 0);
    
    return 0;
}





/*
alocação de memoria em c

estatica: na alocação estatica de memoria, os tipos de dados tem tamanho predefinido, isso é, não é possivel modificar o tamanho. Na pratica, a alocação estatica é feita em tempo de compilação, tendendo a causar uma perda de recursos de memoria, já que nem sempre é possível determinar previamente qual é o espaço necessário para armazenar as informações, fazendo com que o programador exagere e aloque mais memoria do que o necessário.

dinamica: na alocação dinamica, podemos alocar espaços durante a execução do programa, ou seja, a alocação é feita em tempo de execução. Essa alocação permite que o programador aloque apenas a memoria nescessária no programa, podendo aumentar ou diminuir a qntd de memoria alocada.
FUNÇÕES:
    -sizeof(): determina o num de bytes p um determinado tipo de dados
    -malloc(): aloca um espaço de memoria e retorna um ponteiro do tipo void p o inicio do espaço de memoria alocado.
    -realloc(): aloca um novo espaço de memoria, podendo aumentar ou diminuir o tamanho do espaço de memoria alocado.
    -free(): libera o espaço de memoria alocado,tornando-o disponível para nova alocação.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    float *v;
    int i, num_componentes;
    printf("Digite o numero de componentes do vetor: ");
    scanf("%d", &num_componentes);
    /* ------------- Alocando dinamicamente o espaço necessário -------------
  
    1 - Calcular o número de bytes necessários
    primeiramente multiplicamos o número de componentes do vetor pela
    quantidade de bytes que é dada pelo comando sizeof,
    portanto temos:
    num_componentes * sizeof(float)
  
    2 - Reservar a quantidade de memória
    usamos malloc para reservar essa quantidade de    memória,
    então temos:
    malloc(num_componentes * sizeof(float))
  
    3 - Converter o ponteiro para o tipo de dados desejado
    como a função malloc retorna um ponteiro do tipo void,
    precisamos converter esse ponteiro para o tipo da nossa variável, no caso float,
    por isso usamos o comando de conversão explicita:
    (float *)
  
    4 - juntando tudo e atribuindo em v temos o comando abaixo: */
    v = (float *)malloc(num_componentes * sizeof(float));
    if(v == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    //Armazenando os dados em um vetor
    for(i = 0; i < num_componentes; i++){
        printf("\nDigite o valor do componente %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    //Imprimindo os dados do vetor
    printf("\nValores armazenados no vetor:\n");
    for(i = 0; i < num_componentes; i++){
        printf("Componente %d: %.2f\n", i + 1, v[i]);
    }
    
    // Liberando a memória alocada
    free(v);

    getchar();
    return 0;
}
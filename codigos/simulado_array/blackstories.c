/*
Os monitores estavam com tempo vago pois ninguém apareceu para monitoria de programação, então decidiram jogar um novo jogo de investigação para passar o tempo, o objetivo do jogo era achar o maior grupo de indivíduos suspeitos a partir dos depoimentos dos NPC's.

Um grupo é considerado suspeito se uma testemunha disser que viu esse grupo cometendo o crime da história atual. Quando uma testemunha depõe, ela aponta o intervalo de indivíduos que foram vistos cometendo o crime e esses indivíduos somam um ponto de suspeita. No fim do jogo, é verificado qual foi o maior ponto de suspeita e os grupos (intervalos) de indivíduos que possuem a maior ponto de suspeita são levados para prestar depoimento. Irá ganhar aquele que apontar o grupo com o maior número de suspeita, caso haja um empate (dois ou mais monitores apontaram grupos com a maior pontuação de suspeita), ganha aquele que escolher o grupo com o maior número de indivíduos com a maior pontuação de suspeita.

O jogo pode ter muitos indivíduos e muitas testemunhas o que pode dificultar na hora de conferir quem ganhou o jogo, por isso, foi pedido a você que crie um programa que determine os resultados finais do jogo.

Formato de entrada

A primeira linha de entrada é formada por 2 inteiros S e T, sendo S o número de suspeitos e T o número de testemunhas. (1 <= S,T <= 10000).

As T linhas seguintes contém os depoimentos de cada testemunha, este é formado por dois inteiros L e R, sendo L o primeiro da sequencia do grupo e R o ultimo. (0 <= L < R < S)

Formato de saída

A primeira linha contém a pontuação de cada individuo separada por espaço (perceba que o ultimo não tem um espaço depois)

A segunda linha contém a maior pontuação de suspeito.

As k linhas seguintes consistem dos grupos que houveram a maior pontuação de suspeita.

Na linha seguinte ao ultimo intervalo de maior pontuação o tamanho da maior sequencia de indivíduos com a maior pontuação de suspeita, nas linhas abaixo (como descrito nos casos de exemplo), imprima o começo e o fim da referida sequencia.

Obs: nunca haverá duas sequências com a maior pontuação e a maior quantidade de indivíduos.
*/
/*
entrada:
10 2
1 5
7 9

saida:
0 1 1 1 1 1 0 1 1 1
1
1 5
7 9
maior sequencia: 5
comeca em: 1
termina em: 5
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void impressao_lista(int lista[],int i,int tam)
{
    if(i == tam) return;
    
    if(i == 0) printf("%d", lista[i]);
    else printf(" %d" , lista[i]);

    return impressao_lista(lista , i + 1, tam);
}

int atribuir_lista(int lista[], int i, int tam)
{
    if(i == tam) return 0;

    lista[i] = 0;

    return atribuir_lista(lista , i + 1, tam);
}

int adicionar_pontos(int lista[],int inicio , int fim)
{
    if(inicio > fim) return 0;

    lista[inicio] += 1;

    return adicionar_pontos(lista , inicio + 1, fim);
}

int verificar_maior(int lista[], int index , int fim , int maior)
{
    if(index > fim) return maior;

    if(maior < lista[index]) maior = lista[index];
    
    return verificar_maior(lista, index + 1, fim , maior);
}

int encontrar_fim_sequencia(int lista[], int index , int tam , int valor)
{
    if(index >= tam || lista[index] != valor) return index - 1;
    
    return encontrar_fim_sequencia(lista, index + 1, tam, valor);
}

void imprimir_intervalos(int lista[], int index , int tam , int maior)
{
    if(index >= tam) return;
    
    if(lista[index] == maior)
    {
        int fim = encontrar_fim_sequencia(lista, index, tam, maior);
        printf("%d %d\n", index, fim);
        
        return imprimir_intervalos(lista, fim + 1, tam, maior);
    }
    
    return imprimir_intervalos(lista, index + 1, tam, maior);
}

void encontrar_maior_sequencia(int lista[], int tam , int maior , int resultado[], int index)
{
    if(index >= tam) return;
    
    if(lista[index] == maior)
    {
        int fim = encontrar_fim_sequencia(lista, index, tam, maior);
        int tamanho = fim - index + 1;
        
        if(tamanho > resultado[0])
        {
            resultado[0] = tamanho;
            resultado[1] = index;
            resultado[2] = fim;
        }
        
        return encontrar_maior_sequencia(lista, tam, maior, resultado, fim + 1);
    }
    
    return encontrar_maior_sequencia(lista, tam, maior, resultado, index + 1);
}


void entradas(int n , int lista[])
{
    if(n == 0) return ;
    int inicio ,fim;
    scanf("%d %d", &inicio , &fim);

    adicionar_pontos(lista , inicio , fim);
     
    entradas(n - 1 , lista);
}

int main() {
    int tam, ind;
    scanf("%d %d", &tam , &ind);
    int lista_suspeitos[tam];

    atribuir_lista(lista_suspeitos , 0 , tam);

    entradas(ind , lista_suspeitos);

    impressao_lista(lista_suspeitos , 0 , tam);
    
    int maior = verificar_maior(lista_suspeitos , 0 , tam - 1 , 0);

    printf("\n%d\n", maior);
    
    imprimir_intervalos(lista_suspeitos, 0, tam, maior);
    
    int resultado[3] = {0, 0, 0};
    encontrar_maior_sequencia(lista_suspeitos, tam, maior, resultado, 0);
    
    printf("maior sequencia: %d\n", resultado[0]);
    printf("comeca em: %d\n", resultado[1]);
    printf("termina em: %d\n", resultado[2]);

    return 0;
}
/*
Descrição
Túlio e Pedro finalmente vão resolver o maior confronto que o RU já viu. Dessa vez, cartas foram descartadas e o instrumento de luta é o novo assunto estudado em P1, isso mesmo, Arrays.

Nesse confronto, Túlio e Pedro possuem um array, com números inteiros positivos (Em cada rodada, um array diferente). O número com maior frequência em cada array (Mais vezes que aparece), é o número escolhido pelo duelista. Quando ambos escolhem seu número, vence aquele que possui o maior valor.

Varias rodadas acontecem, e no final, aquele com mais vitórias, é o vencedor.

obs: Caso mais de um número apresente mesma frequência, escolha aquele com o maior valor.
*/
/*
entrada:
Primeiro é fornecido um inteiro K indicando o número de rodadas.

Para cada rodada é fornecido:

2 inteiros M e N, indicando o tamanho do array de Pedro e Túlio, respectivamente.

São dados M inteiros positivos, sendo esse o array de Pedro.

São dados N inteiros positivos, sendo esse o array de Túlio.
*/
/*
Formato de saída: 
Em cada rodada deve-se indicar o número escolhido por cada participante, seguindo o seguinte padrão:

"pedro: %d tulio: %d"

No final, é preciso indicar o vencedor, ou que teve empate:

"Pedro foi vitorioso com %d pontos" // Vitória de Pedro

"Túlio foi vitorioso com %d pontos" //Vitória de Túlio

"Túlio e Pedro empataram com %d pontos" //Empate
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void atribuir_lista(int lista[], int i, int tam)
{
    if(i == tam) return ;

    scanf("%d", &lista[i]);

    atribuir_lista(lista , i + 1, tam);
}

int soma(int lista[], int i, int tam, int n, int qntd)
{
    if(i == tam) return qntd;
        
    if(lista[i] == n) qntd +=1;
    return soma(lista, i + 1,  tam, n, qntd);
}


int maior_frequencia(int lista[], int idx, int idx_freq , int maior_freq , int num_maior_freq , int tam)
{
    if(idx == tam) return num_maior_freq;

    idx_freq = soma(lista , 0 , tam , lista[idx], 0);

    if(idx_freq > maior_freq) 
    {
        maior_freq = idx_freq; 
        num_maior_freq = lista[idx];
    }
    else if(idx_freq == maior_freq && lista[idx] > num_maior_freq) num_maior_freq = lista[idx];

    return maior_frequencia(lista , idx + 1, 0 , maior_freq ,num_maior_freq ,tam);
}


void entradas(int n , int pontP , int pontT)
{
    if(n == 0)
    {
        if(pontP > pontT) printf("Pedro foi vitorioso com %d pontos", pontP);
        else if(pontT > pontP) printf("Túlio foi vitorioso com %d pontos", pontT);
        else printf("Túlio e Pedro empataram com %d pontos", pontP);
        return;
    }

    int tamPedro, tamTulio;

    scanf("%d %d", &tamPedro, &tamTulio);

    int arrayPedro[tamPedro];
    atribuir_lista(arrayPedro, 0 , tamPedro);

    int arrayTulio[tamTulio];
    atribuir_lista(arrayTulio, 0 , tamTulio);

    int maiorP , maiorT;
    maiorP = maior_frequencia(arrayPedro , 0 , 0 , 0 , 0 ,tamPedro);

    maiorT = maior_frequencia(arrayTulio , 0 , 0 , 0 , 0 ,tamTulio);

    if(maiorP > maiorT) pontP +=1;
    if(maiorT > maiorP) pontT +=1;

    printf("pedro: %d tulio: %d\n" , maiorP , maiorT);
    
    entradas(n - 1 , pontP , pontT);
}


int main() {
    int n;
    scanf("%d", &n);
    entradas(n , 0 , 0);

    return 0;
}
/*
Os alunos do último ano resolveram organizar uma quermesse para arrecadar fundos para a festa de formatura. A festa prometia ser um sucesso, pois o pai de um dos formandos, Teófilo, dono de uma loja de informática, decidiu doar um computador para ser sorteado entre os que comparecessem. Os alunos prepararam barracas de quentão, pipoca, doces, ensaiaram a quadrilha e colocaram à venda ingressos numerados sequencialmente a partir de 1. O número do ingresso serviria para o sorteio do computador. Ficou acertado que Teófilo decidiria o método de sorteio; em princípio o sorteio seria, claro, computadorizado.

O local escolhido para a festa foi o ginásio da escola. A entrada dos participantes foi pela porta principal, que possui uma roleta, onde passa uma pessoa por vez. Na entrada, um funcionário inseriu, em uma lista no computador da escola, o número do ingresso, na ordem de chegada dos participantes. Depois da entrada de todos os participantes, Teófilo começou a trabalhar no computador para preparar o sorteio. Verificando a lista de presentes, notou uma característica notável: havia apenas um caso, em toda a lista, em que o participante que possuia o ingresso numerado com i, havia sido a i-ésima pessoa a entrar no ginásio. Teófilo ficou tão encantado com a coincidência que decidiu que o sorteio não seria necessário: esta pessoa seria o ganhador do computador.

Conhecendo a lista de participantes, por ordem de chegada, sua tarefa é determinar o número do ingresso premiado, sabendo que o ganhador é o único participante que tem o número do ingresso igual à sua posição de entrada na festa.

Formato de entrada

A entrada é composta de vários conjuntos de teste. A primeira linha de um conjunto de teste contém um número inteiro positivo N que indica o número de participantes da festa. A linha seguinte contém a sequência, em ordem de entrada, dos N ingressos das pessoas que participaram da festa.O final da entrada é indicado quando N = 0. Para cada conjunto de teste da entrada haverá um único ganhador.

Formato de saída

Para cada conjunto de teste da entrada seu programa deve produzir três linhas. A primeira linha identifica o conjunto de teste, no formato "Teste n", onde n é numerado a partir de 1. A segunda linha deve conter o número do ingresso do ganhador, conforme determinado pelo seu programa. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int operacao(int lista[],int idx ,int tam)
{
	if(idx == tam) return 0;
	if(idx + 1 == lista[idx]) return lista[idx];

	operacao(lista , idx + 1 , tam);
}

void lerarray(int lista[], int i, int tam)
{
    if(i == tam) return;
	
	scanf("%d", &lista[i]);
    lerarray(lista , i + 1, tam);
}

void teste(int i)
{
	int n;
	scanf("%d", n);
	if(n == 0) return 0;

	int arr[n];
	lerarray(arr, 0 , n);

	int ganhador = operacao(arr, 0 , n);	
	printf("teste %d", i);
	printf("%d", ganhador);
	printf("\n");

	teste(i+1);
}

int main() {
	teste(1);
}

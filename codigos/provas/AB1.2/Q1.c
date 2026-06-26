/*
Descrição
O “Desafio do Ciclista Sem Fôlego” é uma competição de ciclismo organizada por Ryan, onde os participantes
precisam percorrer uma certa distância de acordo com sua idade e seu sexo.
Para tornar a disputa mais justa, cada ciclista possui uma meta de distância personalizada. 
Mirian, responsável pela organização, precisa de um programa que analise o desempenho dos participantes.

Inicialmente, deve ser lido um número inteiro X, que representa a quantidade de participantes da corrida.
Em seguida, serão fornecidos os dados de cada ciclista, como sexo, idade e distância percorrida.

A meta de distância é calculada da seguinte forma:

Para participantes do sexo masculino (M):

De 18 a 29 anos: meta = idade * 1,4
De 30 a 49 anos: meta = idade * 1,2
De 50 anos ou mais: meta = idade * 1,0


Para participantes do sexo feminino (F):

De 18 a 29 anos: meta = idade * 1,2
De 30 a 49 anos: meta = idade * 1,0
50 anos ou mais: meta = idade * 0,9

Para cada ciclista, o programa deve determinar se a distância percorrida foi suficiente para atingir a meta.

Formato de entrada

A entrada é composta por um número inteiro X, que representa a quantidade de ciclistas.

Em seguida, são fornecidos os dados de cada ciclista, um por linha, contendo:

um caractere (M ou F), indicando o sexo;
um número inteiro, representando a idade (maior ou igual a 18);
um número real, representando a distância percorrida (em quilômetros).
Formato de saída

Para cada ciclista, deve ser exibida uma linha no formato:

Ciclista i: <situação>
Onde i representa a ordem de entrada (começando em 1), e <situação> deve ser:

"Atingiu a meta", ou
"Nao atingiu a meta"
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void entradas(int x , int cont)
{
	if(x < cont) return;

	int id;
	char sex;
	float dist;

	scanf(" %c %d %f",&sex , &id ,&dist );

	float meta;

	if(sex == 'M')
	{
		if(id >= 18 && id <= 29) meta = id * 1.4;
		if(id >= 30 && id <= 49) meta = id * 1.2; 
		if(id >= 50) meta = id ;
	}
	else if(sex == 'F')
	{
		if(id >= 18 && id <= 29) meta = id * 1.2;
		if(id >= 30 && id <= 49) meta = id; 
		if(id >= 50) meta = id * 0.9;
	}

	if(meta > dist) printf("Ciclista %d: Nao atingiu a meta\n", cont);
	if(meta <= dist) printf("Ciclista %d: Atingiu a meta\n", cont);

	return entradas(x , cont +1);
}

int main() {

	int x;
	scanf("%d" , &x);

	entradas(x , 1);
	return 0;
}
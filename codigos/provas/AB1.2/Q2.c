#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int operacao(int numTeto, int numUsado ,int resultado)
{
	if(numTeto < numUsado) {
		if(resultado < 0){
			resultado = resultado * -1;
		}
		return resultado;
		printf("%d" , resultado);
	}

	if(numUsado % 3 == 1) resultado += numUsado;
	if(numUsado % 3 == 2) resultado += (numUsado * ( numUsado + 1));
	if(numUsado % 3 == 0) resultado -= (numUsado * numUsado);
	

	return operacao(numTeto , numUsado +1 , resultado);
}


void entradas(int x , int cont)
{
	if(x < cont) return;

	int n;
	scanf("%d" , &n);

	char caractere;
	caractere = (65 + operacao(n , 1 , 0));
	
	printf("%c" , caractere);

	return entradas(x , cont +1);
}

int main() {
	int n;
	
	scanf("%d" , &n);
	

	entradas(n , 1);
	return 0;
}
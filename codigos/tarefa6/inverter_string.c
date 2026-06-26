/*
Descrição
Leia uma string e inverta o seu conteúdo. Exemplo: Se a string digitada for "JANELA", então você deve imprimir: "ALENAJ".

Formato de entrada

Você receberá uma única linha contendo uma string com no máximo 255 caracteres.

Formato de saída

Imprima a string recebida com os seus caracteres invertidos também em uma única linha, seguida de um final de linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int inverter_lista(char lista[], int i, int tam)
{
    if(i > tam) return  0;
    else
    {
        printf("%c" , lista[tam - i]);
        return inverter_lista(lista , i+1 , tam);
    }
}

int main() {

    char mensagem[255];

    scanf("%s", mensagem);

    int tam = strlen(mensagem);
    
    inverter_lista(mensagem , 1 , tam );
    return 0;
}
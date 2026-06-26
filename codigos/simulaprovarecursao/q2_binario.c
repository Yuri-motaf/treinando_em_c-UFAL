#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int p_decimal(int bit, int pot)
{
    int op = bit * pow(2 , pot);
    return op;
}

int transformar(int pot)
{
    if(pot < 0) return 0;

    int bit;
    scanf("%d", &bit);

    return p_decimal(bit, pot) + transformar(pot -1);
}


void ler(int tamanho)
{
    if (tamanho == 0) return;

    char letra = transformar(6);
    
    printf("Letra decodificada: %c\n", letra);
    
    ler(tamanho -=1);
}

int main() {
    char equipe;
    int tam;
    
    scanf(" %c ", &equipe);
    scanf("%d" , &tam);

    ler(tam);

    switch (equipe)
    {
    case 'A':
        printf("Equipe Alpha recebeu a mensagem!");
        break;
    case 'B':
        printf("Equipe Bravo recebeu a mensagem!");
        break;
    case 'C':
        printf("Equipe Charlie recebeu a mensagem!");
        break;
    case 'D':
        printf("Equipe Delta recebeu a mensagem!");
        break;
    }

    return 0;
}
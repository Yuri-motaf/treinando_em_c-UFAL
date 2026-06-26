#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verificar_somas(char lista[], int i, int tam, int soma_atual, int maior_soma)
{
    if(i == tam){
        if(soma_atual > maior_soma) maior_soma = soma_atual;
        return maior_soma;
    }

    if(lista[i] == '.');
    else if(lista[i] == 'o') soma_atual += 1;
    else if(lista[i] == 'A')
    {
        if(soma_atual > maior_soma) {
            maior_soma = soma_atual;
            soma_atual = 0;
        }
        else soma_atual = 0;
    }
    return verificar_somas(lista, i + 1, tam, soma_atual, maior_soma);
}

void ler_array_normal(char lista[], int inicio, int i, int n)
{
    if(i == n) return;

    scanf(" %c", &lista[inicio + i]);
    
    return ler_array_normal(lista, inicio, i + 1, n);
}

void ler_array_contrario(char lista[], int inicio, int i)
{
    if(i < 0) return;

    scanf(" %c", &lista[inicio + i]);
    return ler_array_contrario(lista, inicio, i - 1);
}

void lerarray(char lista[], int n, int linha)
{
    if(linha == n) return;

    int inicio = linha * n;
    
    if(linha % 2 == 0)
    {
        ler_array_normal(lista, inicio, 0, n);
    }
    else
    {
        ler_array_contrario(lista, inicio, n - 1);
    }

    return lerarray(lista, n, linha + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int tamanho = n * n;
    char tabuleiro[tamanho];

    lerarray(tabuleiro, n, 0);

    int resultado = verificar_somas(tabuleiro, 0, tamanho, 0, 0);
    printf("%d\n", resultado);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void lerarray(int lista[], int tam, int idx)
{
    if(idx == tam) return;
    int x;
    
    scanf("%d", &x);
    lista[idx] = x;
    return lerarray(lista , tam , idx + 1);
}

void inicializarArray(int arr[], int tam, int idx)
{
    if(idx == tam) return;
    
    arr[idx] = 0;

    return inicializarArray(arr, tam, idx + 1);
}

void marcarCiclo(int lista[], int visitado[], int buraco_inicio, int buraco_atual)
{
    visitado[buraco_atual] = 1;
    int proximo = lista[buraco_atual];
    
    if(proximo == buraco_inicio) return;
    
    return marcarCiclo(lista, visitado, buraco_inicio, proximo);
}

int contarTocas(int lista[], int visitado[], int tam, int idx, int tocas)
{
    if(idx == tam) return tocas;
    
    if(visitado[idx] == 1)
    {
        return contarTocas(lista, visitado, tam, idx + 1, tocas);
    }
    
    marcarCiclo(lista, visitado, idx, idx);
    tocas += 1;
    
    return contarTocas(lista, visitado, tam, idx + 1, tocas);
}

int main() {
    int n;
    scanf("%d", &n);
    int buracos[n];
    int visitado[n];
    
    lerarray(buracos, n, 0);
    inicializarArray(visitado, n, 0);
    
    int resultado = contarTocas(buracos, visitado, n, 0, 0);
    
    printf("%d", resultado);
    
    return 0;
}
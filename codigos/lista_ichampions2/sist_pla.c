/*
Rodrigo, como excelente pai, está construindo com seu filho uma maquete de um sistema planetário. No início todos estão alinhados, ele observou e anotou que o tempo de translação em cada planeta era diferente. Seu filho curioso perguntou a ele depois de quanto tempo os planetas estarão alinhados novamente. Como o Rodrigo anda muito atarefado, ele requisitou aos seus alunos um programa que dado a quantidade de planetas e o tempo de translação de cada um mostraria o tempo mínimo para o alinhamento.

Formato de entrada

Duas linhas, a primeira N inteiro representando a quantidade de planetas e a segunda linha terá N valores reais com uma casa decimal representando o tempo de translação um planeta em minutos.

1 <= N <= 100

0.1 <= Ti <= 1000.0

Formato de saída

Será uma string no formato: "O tempo para o alinhamento dos planetas e X minutos". Onde X é um valor real com uma casa decimal.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void leituras(float lista[], int n, int i)
{
    if(i == n) return;
    
    scanf("%f", &lista[i]);
    
    return leituras(lista, n, i + 1);
}

int mdc(int a, int b)
{
    if(b == 0) return a;
    
    return mdc(b, a % b);
}

int mmc(int a, int b, int mdc_val)
{
    int res = (a * b) / mdc_val;
    return res;
}

int calculo_total(int lista[], int i, int n, int resultado)
{
    if(i == n) return resultado;
    
    if(i == 0)
    {
        resultado = lista[0];
    }
    else
    {
        resultado = mmc(resultado, lista[i], mdc(resultado, lista[i]));
    }
    
    return calculo_total(lista, i + 1, n, resultado);
}

// Função para converter float para inteiro (multiplicar por 10)
void converter_para_inteiro(float lista_float[], int lista_int[], int n, int i)
{
    if(i == n) return;
    
    lista_int[i] = (int)(lista_float[i] * 10);
    
    return converter_para_inteiro(lista_float, lista_int, n, i + 1);
}

int main() {
    int n_planetas;
    scanf("%d", &n_planetas);
    
    float numeros_reais[50];
    int numeros_inteiros[50];
    
    leituras(numeros_reais, n_planetas, 0);
    
    // Converte os números reais para inteiros (multiplicando por 10)
    converter_para_inteiro(numeros_reais, numeros_inteiros, n_planetas, 0);
    
    // Calcula o MMC dos inteiros
    int alinhamento_inteiro = calculo_total(numeros_inteiros, 0, n_planetas, 0);
    
    // Converte de volta para real dividindo por 10
    float alinhamento = alinhamento_inteiro / 10.0;
    
    printf("O tempo para o alinhamento dos planetas e %.1f minutos", alinhamento);
    
    return 0;
}
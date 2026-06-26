/*
Mariana agora deve fazer um programa a partir de uma tabela que sua mãe usava para anotações por quase um ano. Nesta tabela, a Dona Marta anotou a quantidade de dias e, em seguida, o dinheiro gasto a cada dia com estas frutas. Considere que cada fruta pesa 1Kg.

Formato de entrada

Você vai receber um número N (0 < N < 20), correspondendo ao número de testes.

Para cada teste, você receberá duas linhas. A primeira linha contém um número de ponto flutuante V (0,10 ≤ V ≤ 20,00), indicando o montante gasto com a segunda linha contém o nome de cada fruta que Dona Marta comprou, separados por espaço.

Formato de saída

Imprima quantos quilos de frutas Dona Marta comprou em cada dia, com a mensagem correspondente, como no exemplo de entrada.
No final, imprima o consumo médio em kg por dia com 2 números decimais e a média de dinheiro gasto por dia, como no exemplo de entrada.
Ao fim da saida, deve existir uma quebra de linha.

ex:
Entrada
3
9.58
Mamao Maca Melao
2.65
Melancia
9.54
Pera Uva Goiaba

Saída
dia 1: 3 kg
dia 2: 1 kg
dia 3: 3 kg
2.33 kg por dia
R$ 7.26 por dia
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAM_MAX 70

int main(){
    int n;
    scanf("%d", &n);
    
    int totalKg = 0;
    double totalGasto = 0.0;
    
    for(int i = 1; i <= n; i++){
        double gasto;
        scanf("%lf", &gasto);
        
        getchar(); 
        
        char linha[TAM_MAX];
        fgets(linha, sizeof(linha), stdin);
        
        int kg = 0;
        for(int i = 0; i < strlen(linha); i++)
        {
            if(i == 0 && linha[i] != '\n') kg = 1;

            if(linha[i] == ' ' && i + 1 < strlen(linha) && linha[i + 1] != '\n'){
                kg++;
            }
        }
        
        printf("dia %d: %d kg\n", i, kg);
        
        totalKg += kg;
        totalGasto += gasto;
    }
    
    double mediaKg = (double)totalKg / n;
    double mediaGasto = totalGasto / n;
    
    printf("%.2lf kg por dia\n", mediaKg);
    printf("R$ %.2lf por dia\n", mediaGasto);
    
    return 0;
}
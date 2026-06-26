/*
O jogo da adivinhação foi criado por um engenheiro de telecomunicações chamado Mordechai Meirovitz, na Romênia em 1971. O jogo ganhou o prestigiado prêmio do "Jogo do Ano" em 1974 e foi um enorme sucesso comercial, sendo vendido em mais de 40 países.

Trata-se de um jogo de lógica cujo seu objetivo como jogador é descobrir a senha secreta escolhida por um oponente. A senha a ser descoberta é formada por uma seqüência de caracteres de algum alfabeto. Para descobrir qual foi a senha, você "chuta" uma provável senha para o seu oponente. O chute é uma sequência de caracteres com o mesmo número de caracteres da senha. E os caracteres devem pertencer ao mesmo alfabeto.

Após cada chute seu, você receberá uma resposta, que consiste de 2 inteiros (E,B) indicando o quão bom foi o seu chute. Se um caractere do chute existe na senha na mesma posição (da string), então ele conta como "excelente" (E). Caso contrário, se o caractere existe na senha, mas em uma posição diferente, ele conta como "bom" (B). Um dado caractere do chute não é contado duas vezes (ou seja, se ele foi contado como excelente, não é contado como bom). A tabela abaixo ilustra o jogo com alguns exemplos.

Baseado nas respostas recebidas, o jogador pode deduzir qual foi a senha escolhida pelo oponente. O objetivo do jogo é encontrar a senha com o número mínimo de chutes.

Já o seu objetivo é um pouco mais simples: escrever um programa que receba a senha do primeiro jogador e em seguida recebe os chutes do segundo jogador. Você deve fornecer as respostas de acordo com o explicado acima.

entrada:
A primeira linha da entrada consiste de um número K representando o número de jogos que serão realizados. A próxima linha consiste de um número N, [0 < N < 8], representando o tamanho da senha a ser utilizada no próximo jogo. A próxima linha contém uma senha contendo dígitos, entre 1 e 7, com exatamente N caracteres que será utilizada no jogo em questão.

As próximas linhas contêm os chutes dados pelo segundo jogador e, portanto, consistem de uma sequência de dígitos, entre 1 e 7, com exatamente N caracteres. Cada jogo termina quando a senha é acertada ou quando o jogador desiste de tentar digitando uma seqüência de N caracteres '0'. Após cada jogo, o próximo jogo tem inicio a partir da leitura de uma linha contendo um inteiro indicando o tamanho da próxima senha. Na linha seguinte é dada a nova senha e o jogo prossegue com os chutes.

saida:
Para cada chute, seu programa deve imprimir (E,B), correspondendo ao número de excelentes e bons respectivamente.
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tudo_zero(char s, int i, int n){
    if(i == n) return 1;
    if(s[i] != '0') return 0;
    return all_zero(s, i+1, n);
}

int verificar_excelentes(int senha[], int tentativa[] , int i , int tam , int excelentes){
    if(i == tam) return excelentes;

    if(senha[i] == tentativa[i]) excelentes += 1;
    return verificar_excelentes(senha , tentativa , i + 1, tam  ,excelentes);
}

int verificar(int num, int senha[] , int i, int tam){
    if(i == tam) return 0;
    if(num == senha[i]) return 1;
    
    return verificar(num , senha , i + 1, tam);
}

int verificar_bons(int senha[], int tentativa[], int i ,int tam, int bons){
    if(i == tam) return bons;
    
    if(verificar(tentativa[i], senha, 0 , tam) == 1 && tentativa[i] != senha[i]) bons += 1; 

    return verificar_bons(senha , tentativa , i + 1, tam , bons);
}


void transformar_p_arr(char str[], int arr[], int i , int tam){
    if(i == tam) return;
    arr[i] = str[i];
    transformar_p_arr(str , arr , i + 1, tam);
}

void advinhacao(int tam , int senha[]){

    int tentativa[tam];
    char str[tam + 1];
    scanf("%s" , str);
    transformar_p_arr(str , tentativa , 0 , tam);
    
    int array_zerado[tam]; preencher_zeros(array_zerado , 0 , tam);

    int excelentes = verificar_excelentes(senha , tentativa , 0 , tam, 0);
    
    int bons = verificar_bons(senha , tentativa , 0 , tam , 0);

    printf("(%d,%d)\n", excelentes , bons);
    
    if(excelentes == tam && bons == 0) return;
    
    advinhacao(tam , senha);
}

void jogos(int k){
    if(k == 0) return;
    int tam; scanf("%d", &tam);
    
    int senha[tam]; 
    char str[tam + 1];
    scanf("%s", str);
    transformar_p_arr(str , senha , 0 , tam);    

    advinhacao(tam , senha);

    jogos(k - 1);
}

int main(){
    int K; scanf("%d" , &K);
    jogos(K);

    return 0;
}
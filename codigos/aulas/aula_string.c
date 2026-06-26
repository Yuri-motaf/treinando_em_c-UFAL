/*
    leitura de strings
- scanf("%d", nome) não colocamos &
ler ate encontrar um espaço em branco 

- gets(variavel) ler uma srting do tamanho que a gente quiser e 
so para quando encontrar um \n (enter)

- fgets(variavel, tamanho, stdin) ler uma string do tamanho que a gente quiser e so para quando encontrar um \n (enter) ou quando chegar no tamanho maximo da string.
*/

/*
    funcoes para manipular strings
strlen(variavel) retorna o tamanho da string ; ignora o caracter de terminação \0

char strcpy(destino, origem) copia a string da origem para a string destino

char strcat(destino, origem) concatena a string da origem com a string do destino

int strcmp(string1, string2) compara as duas strings e retorna 0 se forem iguais, um valor negativo se a string1 for menor que a string2 e um valor positivo se a string1 for maior que a string2

char strchr(string, caractere) retorna um ponteiro para a primeira ocorrencia do caractere na string ou NULL se o caractere nao for encontrado

int strstr (string, substring) retorna um ponteiro para a primeira ocorrencia da substring na string ou NULL se a substring nao for encontrada

tolower(string) converte a string para minusculo pelo idx do caractere na string -> fazer uma função recursiva para converter a string para minusculo

toupper(string) converte a string para maisculo pelo idx do caractere na string -> fazer uma função recursiva para converter a string para maisculo

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//exercicio 1- ler um nome completo , um endereco e um cpf e imprimir na tela
// #define TAM_NOME 50
// #define TAM_ENDERECO 100
// #define TAM_CPF 15 // toda string termina com o caracter \0

// int main(){
//     char nome[TAM_NOME], endereco[TAM_ENDERECO], cpf[TAM_CPF];
    
//     printf("Digite seu nome: \n");
//     fgets(nome , TAM_NOME , stdin);
//     nome[strlen(nome) - 1] = '\0';

//     printf("Digite seu endereco: \n");
//     fgets(endereco , TAM_ENDERECO , stdin);
//     endereco[strlen(endereco) - 1] = '\0';

//     printf("Digite seu cpf: \n");
//     fgets(cpf , TAM_CPF , stdin); 
    
//     printf("seus dados: \n");
//     printf("nome: %s\n", nome);
//     printf("endereco: %s\n", endereco);
//     printf("cpf: %s\n", cpf);
//     printf("=-=--=-=-=-=-=-=-=-=-=-\n");
//     return 0;
// }
//====================================================


/*
string
tipo de dado que armazena uma sequencia de caracteres
toda string termina com o caracter \0 (null) (caracter de terminação)
strings são um agrupamento(array) de caracteres
para declarar uma string, precisamos declarar um array de caracteres

ex: char nome[50]; // string de 50 caracteres

internamente são ponteiros de memoria, ou seja, o nome da string é um ponteiro para o primeiro caractere da string

nas strings, os comparadores de igualdade (==) e desigualdade (!=) comparam os endereços de memoria, ou seja, se as strings estão apontando para o mesmo local na memoria, e não o conteudo das strings. para comparar o conteudo das strings, precisamos usar a função strcmp() da biblioteca string.h

*/


//=============================================================
//exercicio 2
//crie um programa que le duas string e imprime:
//o tamanho das duas
//a primeira em minusculo
// a segunda em maisculo
// as duas strings em ordem alfabetica crescente
//a segunda concatenada com a primeira

#define TAM_STRING 50

int main(){
    char str1[TAM_STRING];
    char str2[TAM_STRING];
    
    fgets(str1 , TAM_STRING , stdin);
    fgets(str2 , TAM_STRING , stdin);

    printf("tamanhos: primeira str: %d ; segunda: %d ",strlen(str1) , strlen(str2));
    // printf("primeira str em minusculo: %d", tolower(str1));
    // printf("segunda str em maisculo: %d", toupper(str2));
    
    if(strcmp(str1, str2) < 0){
        printf("ordem alfabetica crescente: %s ||| %s", str1, str2);
    } else {
        printf("ordem alfabetica crescente: %s ||| %s", str2, str1);
    }

    printf("segunda str concatenada com a primeira: %s", strcat(str2, str1));

    return 0;
}
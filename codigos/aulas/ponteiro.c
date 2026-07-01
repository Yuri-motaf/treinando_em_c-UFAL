/*
ponteiros em c

ponteiros são variaveis que aramazenam o endereço de memoria de outras variaveis

dizemos que o ponteiro "aponta" para uma variavel quando contem o endereço da mesma
podem apontar para qualquer tipo de variavel

O uso de ponteiros é muito utili quando uma variavel tem que ser acessada em diferentes partes de um programa. Nesse caso, o codigo pode ter ponteiros espalhados por diversas partes do programa, apontando para a variavel que contem o valor desejado

situações onde o uso do ponteiro são uteis:
-alocação dinamica de memoria
-manipulação de arrays
-para retornar mais de um valor para uma função
-referência para listas, pilhas, arvores e grafos

sintaxe da declaração
tipo *nome_ponteiro

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
  int valor = 27;
  
  int *ptr; //inicializando um ponteiro do tipo inteiro
  
  ptr = &valor;
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereço da variavel valor: %x \n", valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", *ptr);

  getchar();
  return 0;
}
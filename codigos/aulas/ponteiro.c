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

// int main(void)
// {
//   int valor = 27;
//   int *ptr; //inicializando um ponteiro do tipo inteiro
//   ptr = &valor;
//   printf("Utilizando ponteiros\n\n");
//   printf ("Conteudo da variavel valor: %d\n",  valor);
//   printf ("Endereço da variavel valor: %x \n", valor);
//   printf ("Conteudo da variavel ponteiro ptr: %x", *ptr);

//   getchar();
//   return 0;
// }

// int main()
// {
//   int x = 10;
//   int *ponteiro;
//   ponteiro = &x;

//   int y = 20;
//   *ponteiro = y;
  
//   printf("%d\n%d ", x , y);
//   return 0;
// }

// int main(){
//   int x = 1;
//   double y = 20.50;
//   char z = 'a';

//   int *pX = &x;
//   double *pY = &y; 
//   char * pZ = &z;

//   printf("End x = %i ; valor x= %i", pX , *pX);
//   printf("End Y = %i ; valor Y= %lf", pY , *pY);
//   printf("End z = %i ; valor z= %c", pZ , *pZ);

//   return 0;
// }
//no compilador roda mas por alguma porra no vsc não


int main(){
  struct horario
  {
    int hora;
    int minuto;
    int segundo;
  };

  struct horario agora, *depois;

  depois = &agora;

  // (*depois).hora = 1;
  // (*depois).minuto = 60;
  // (*depois).segundo = 60;
  
  depois -> hora = 1;
  depois -> minuto = 60;
  depois -> segundo = 60;

  printf("%d : %d : %d", agora.hora, agora.minuto , agora.segundo );
  
  printf("\n");

  int soma = 100;
  struct horario antes;
  
  antes.hora = soma + depois -> segundo;
  antes.minuto = agora.hora + depois -> minuto;
  antes.segundo = soma + depois -> hora + depois-> minuto;
  
  printf("%d : %d : %d", antes.hora, antes.minuto , antes.segundo );

  return 0;
}
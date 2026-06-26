/*
8 3 4 3 2 3 5 9 2 3

3
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int atribuir_lista(int lista[], int i, int tam)
// {
//     if(i == tam){
//         printf("fim da atribuição\n");
//         return 0;
//     }
//     else{
//         scanf("%d", &lista[i]);
//         return atribuir_lista(lista , i + 1, tam);
//     }
// }

// void impressao_lista(int lista[],int i,int tam)
// {
//     if(i == tam)
//     {
//         printf("fim da impressão da lista\n");
//     }
//     else{
//         printf("posicao num %d : %d\n", i , lista[i]);
//         impressao_lista(lista , i + 1, tam);
//     }
// }

// int soma(int lista[], int i, int tam, int n, int qntd)
// {
//     if(i == tam)
//     {
//         return qntd;
//     }
//     else{
//         if(lista[i] == n) qntd +=1;
//         return soma(lista, i + 1,  tam, n, qntd);
//     }

// }

// int main()
// {
//     int lista[10];

//     printf("adicione a lista:\n");

//     atribuir_lista(lista , 0 , 10);
    
//     impressao_lista(lista, 0 , 10);
    
//     int n;
    
//     printf("digite um numero para ser verificado:\n");
    
//     scanf("%d", &n);
    
//     int qntd_n = soma(lista, 0 , 10 , n , 0);
    
//     printf("a quantidade de %d que aparece na lista é: %d\n", n , qntd_n);

//     return 0;
// }




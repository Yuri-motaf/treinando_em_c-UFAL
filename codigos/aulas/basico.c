// c é uma linguuagem compilada, ou seja precisa ser transformada em um arquivo binario executável para ser rodado.

// ELF - Executable and Linkable Format, é o formato de arquivo binário usado em sistemas operacionais Unix e Unix-like, como Linux. Ele é usado para armazenar código executável, bibliotecas compartilhadas e outros tipos de arquivos binários.

// O processo de compilação em C envolve várias etapas, incluindo pré-processamento, compilação, montagem e linkedição. O pré-processamento é a etapa em que as diretivas de pré-processamento são processadas, como #include e #define. A compilação é a etapa em que o código-fonte é traduzido para código de máquina. A montagem é a etapa em que o código de máquina é convertido em um arquivo objeto. A linkedição é a etapa final em que os arquivos objeto são combinados para criar um arquivo executável.

// C é frequentemente considerada de baixo a médio nível, pois combina a eficiência e o controle direto de hardware (memória, registradores) típicos do baixo nível, com estruturas de abstração de alto nível. Ela permite manipular bits e ponteiros, sendo essencial para sistemas operacionais, enquanto mantém uma sintaxe legível e suporte a estruturas de dados complexas, o que a torna adequada para uma ampla gama de aplicações.

//Um codigo em C é composto por dados e funçoes. Os dados podem ser variáveis, constantes, arrays, estruturas, etc. As funções são blocos de código que realizam tarefas específicas e podem ser chamadas para executar essas tarefas. O ponto de entrada de um programa em C é a função main(), onde a execução do programa começa.


//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

//#include <stdio.h> //diretiva de pré-processamento, inclui a biblioteca de entrada e saída padrão.

//#define PI 3.14 //diretiva de pré-processamento, define uma constante chamada PI com o valor 3.14.

//int main(int argc, char *argv[]) { //função principal do programa, onde a execução começa.

//    const char *mensagem = "Olá, mundo!"; //declaração de uma variável constante do tipo ponteiro para char, que armazena a string "Olá, mundo!".

//    printf("%s\n", mensagem); //imprime a mensagem armazenada na variável mensagem.

//    printf("O valor de PI é: %lf\n", PI);
//
//    return 0;
//}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


//exercicio the huxley bombons
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>

//int main() {
    //int pre_av , pre_car , pre_pass;
  //  int qntd_av , qntd_car, qntd_pass;
//    int precoTotal;
    
  //  scanf("%d %d %d", &pre_av , &pre_car , &pre_pass );
	
//	scanf("%d %d %d", &qntd_av , &qntd_car, &qntd_pass  );
	
//	precoTotal = (pre_av * qntd_av) + (pre_car * qntd_car) + (pre_pass * qntd_pass);
	
//	printf("Valor: R$%d.00", precoTotal);
	
//	return 0;
//}


//-=-=-=-=-=---=-=-=----------=-=-=-=-=-=-=-


//exercicio raios dos circulos
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14

//float main() {
//    float r1, r2;
//    float a1, a2;
//    r1 = 2;
//    r2 = 3;
//    a1= PI * (r1 * r1);
//    
//    a2= PI * (r2 * r2);
//    
//    if (a1 > a2) {
//        printf("Primeiro circulo");
//    } else if (a2 > a1) {
//        printf("Segundo circulo");
//    } else {
  //      printf("Iguais");
//    }
//	return 0;
//}


//__________________________________________________________

//Escreva um programa que leia a idade de uma pessoa em anos e informe quantos segundos ela viveu.
//Obs: Considere que um ano sempre tem 365 dias.
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int idade_an;
//     int idade_seg;
    
//     scanf("%d", &idade_an);
    
//     idade_seg = idade_an * 365 * 24 * 60 * 60;
    
//     printf("%d", idade_seg);
    
//     return 0;
// // }


//------------------------------------------------------------------------------
//Escreva um programa que leia três números inteiros e os imprima em ordem crescente.

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int num1, num2, num3;
//     scanf("%d %d %d", &num1 ,&num2, &num3);
//     if(num1 > num2 && num1 > num3)
//     {
//         if(num2 > num3)
//         {
//             printf("%d\n%d\n%d", num3 , num2 , num1 );
//         }
//         else
//         {
//             printf("%d\n%d\n%d", num2 , num3 , num1);
//         }
//     }
//     if(num2 > num1 && num2 > num3)
//     {
//         if(num1 > num3)
//         {
//             printf("%d\n%d\n%d", num3 , num1 , num2 );
//         }
//         else
//         {
//             printf("%d\n%d\n%d", num1 , num3 , num2);
//         }
//     }
//     if(num3 > num2 && num3 > num1)
//     {
//         if(num1 > num2)
//         {
//             printf("%d\n%d\n%d", num2 , num1 , num3 );
//         }
//         else
//         {
//             printf("%d\n%d\n%d", num1 , num2 , num3);
//         }
//     }


// 	return 0;
// }

//=------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int num;
    
//     scanf("%d", num);
    
//     if(num%7 == 0)
//     {
//         if(num%4 == 0)
//         {
//             if(num % 5 != 0)
//             {
//                 printf("sim");
//             }
//         }
//     }else{
//         printf("nao");
//     }
// 	return 0;
// }



//----------------------------------------------------------------------------


// Faça um programa que indique se um número que o usuário digitou é divisível por 4 e por 7 ao mesmo tempo mas não divisível por 5.
// A saída deve ser um mensagem 'sim' ou 'nao' (minúsculos e sem o til).
//entrada: um número inteiro
//saída: 'sim' ou 'nao' (minúsculos e sem o til)
// int main() {
//     int num;
    
//     scanf("%d", &num);
    
//     if(num % 4 == 0 && num % 7 == 0 && num % 5 != 0)
//     {
//         printf("sim");
//     } else {
//         printf("nao");
//     }
    
//     return 0;
// }

//----------------------------------------------------------------------------
//A locadora de carros SAI DA FRENTE está fazendo uma promoção e está alugando carros no período junino por R$ 30,00 a diária. Além disso, a locadora cobra R$ 0,01 por quilômetro rodado. Como é período de São João, a locadora quer fidelizar os clientes e está dando 10% de desconto no valor total do aluguel de qualquer carro.
// //O usuário deve digitar quantos dias ficou com o carro e quantos quilômetros ele rodou.
// O programa deve exibir o valor total que a pessoa deve pagar pelo aluguel do carro, imprimindo na tela os valores abaixo:

// Digite a quantidade de dias de locacao:

// Digite a quantidade de km rodados:

// Valor a pagar pelo aluguel: R$ n

//entrada
// 7
// 174

//saída
// Digite a quantidade de dias de locacao:
// Digite a quantidade de km rodados:
// Valor a pagar pelo aluguel: R$ 190.566000

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {
//     int dias, km;
//     float valor;
    
//     scanf("%d", &dias);
//     scanf("%d", &km);
    
//     valor = (dias * 30) + (km * 0.01);
//     valor = valor - (valor * 0.10);
    
//     printf("Valor a pagar pelo aluguel: R$ %.6f", valor);
    
//   return 0;
// }


// =======----------------------------------------


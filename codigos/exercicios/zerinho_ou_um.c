/*
Todo mundo provavelmente sabe que o jogo Zerinho ou um, usado para determinar um vencedor entre três ou mais jogadores.

Para aqueles não familiarizados, o jogo funciona da seguinte maneira:

Cada jogador escolhe um valor entre zero ou um; solicitado por um comando (geralmente um dos competidores anuncia " Zerinho ou.... Um!")
Todos os participantes mostram uma mão: se o valor escolhido é um, o competidor mostra uma mão com um dedo estendido, se o valor escolhido for zero, o competidor mostra uma mão com todos os dedos fechados. O ganhador é o único que optou por um valor diferente de todos os outros. Se não houver nenhum jogador com um valor de diferentes de todas as outras ( por exemplo, todos os jogadores escolhem zero, ou alguns jogadores escolhem zero e alguns jogadores escolheram um), não há nenhum vencedor. 
 

Alice, Beto e Clara são grandes amigos e jogam Zerinho ou Um o tempo todo, para determinar quem vai comprar a pipoca durante a sessão de cinema, quem vai entrar na natação primeiro etc. Eles jogam tanto que eles decidiram fazer um plugin para jogar Zerinho ou Um no Facebook. Mas eles não sabem como programar, então dividiram as tarefas entre os amigos que sabem, inclusive você.

Dadas os três valores escolhidos por Alice, Beto e Clara, cada valor de zero ou um, escrever um programa que determina se há um vencedor, e, nesse caso, determinar quem é o vencedor.

*/

/*
    entrada:
    A entrada contém três inteiros A, B e C (cada um pode ser 0 ou 1), indicando, respectivamente, os valores escolhidos por Alice, Beto e Clara.
*/

/*
    saida:
    Seu programa deve imprimir uma linha, com um caracter em maiúsculo. Se Alice é o vencedor do personagem deve ser 'A', se Beto é o vencedor do personagem deve ser 'B', se Clara é o vencedor do personagem deve ser 'C', e se não houver vencedor o personagem deve ser '* '(asterisco).

No final, imprimir uma quebra de linha.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int al, be, cl;
    scanf("%d %d %d", &al, &be, &cl);
    
    if(al == 0)
    {
        if(be == 0)
        {
            if(cl == 0){
                printf("* \n");
                return 0; // a0 b0 c0
            }
            else{
                printf("C\n");
                return 0; // a0 b0 c1
            }       
        }
        else{
            if(cl == 0){
                printf("B\n");
                return 0; // a0 b1 c0
            }
            else{
                printf("A\n");
                return 0;// a0 b1 c1
            }
        }
    }
    
    if(al == 1)
    {
        if(be == 0)
        {
            if(cl == 0)
            {
                printf("A\n");
                return 0;//a1 b0 c0
            }
            else{
                printf("B\n");
                return 0; //a1 b0 c1
            }
        }else{
            if(cl == 0)
            {
                printf("C\n");
                return 0; //a1 b1 c0
            }
            else{
                printf("* \n");
                return 0; //a1 b1 c1
            }
        }
    }
    return 0;
}

/*
    Túlio e Pedro estavam decidindo quem iria levar as bandejas depois do almoço no RU. Depois de muita argumentação eles pensaram em resolver essa disputa com uma partida de "Armague".

    Esse jogo consiste em três duelos entre as cartas dos jogadores.

    Cada carta possui 3 atributos: Classe, Ataque e Vida. O jogo segue a seguinte ordem: Em cada duelo, a carta com menos vida ataca primeiro (Caso sejam iguais, Pedro começa). Se a carta que sofreu o ataque não morrer, ela irá atacar de volta, encerrando o duelo com apenas um ataque de cada.



    Antes do começo do duelo, as cartas podem receber bonus de ataque ou vida, isso é dado seguindo a relação entre as classes:

    Caso 1: Duelo entre Guerreiro e Arqueiro. O guerreiro recebe um aumento de 30% em relação a sua vida.

    Caso 2: Duelo entre Arqueiro e Mago. O arqueiro recebe um aumento de 25% em relação ao seu ataque.

    Caso 3: Duelo entre Mago e Guerreiro. O mago recebe um aumento de 15% em sua vida e em seu ataque.



    O vencedor do duelo é aquele cuja carta conseguir matar a carta inimiga. Em casos em que nenhuma carta foi eliminada, o vencedor é aquele com mais pontos de vida. Caso ainda tenha empates, o vencedor será aquele com maior pontos de ataque.

    É garantido que os ataques nunca serão iguais.
    OBSERVAÇÕES

    obs1: Um ataque consiste em subtrair a vida do inimigo pelos pontos de ataque do agressor.

    obs2: Considere que para uma carta morrer, ela deve ter pontos de vida <= 0.
    Em cada duelo, você deve indicar quem foi o vitorioso.

    No final da partida também é preciso indicar quem foi o jogador vencedor.

    Leia a descrição de saída para mais detalhes.


*/
/*
    entrada: 
    Os dados das cartas são dados nessa ordem: Classe, Ataque e vida.

Classe é um inteiro podendo ser: 1 (Guerreiro), 2 (Mago) ou 3 (Arqueiro).

Ataque e vida são variáveis do tipo Double.

OBS: Ataque e vida são > 0.



Primeiro vem as 3 cartas do Pedro, seguidas pelas 3 cartas do Túlio.

classe1 ataque1 vida1

classe2 ataque2 vida2

classe3 ataque3 vida3



classe4 ataque4 vida4

classe5 ataque5 vida5

classe6 ataque6 vida6
*/

/*  
    saida:

    Para cada duelo, deve informar o vencedor seguindo o exemplo: "RodadaX:  _nome do ganhador_" 

    Onde X indica a rodada atual, começando na rodada 1 e indo até a rodada 3.

    Os nomes dos ganhadores são: "Pedro" ou "Tulio".

    obs1: Tem um espaço depois do ":"

    obs2: Não tem um espaço entre rodada e o número dela.

    No fim dos 3 duelos, deve indicar o jogador vencedor, sendo esse aquele que mais venceu duelos.

    "Tulio vitorioso" ou "Pedro vitorioso"

    obs3: Toda linha da saída deve ser seguida por uma quebra de linha.


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void aplicar_bonus(int *Cp, double *Ap, double *Vp, int *Ct, double *At, double *Vt)
{
    if(*Cp == 1 && *Ct == 3){
        *Vp *= 1.3;
    }   
    else if(*Ct == 1 && *Cp == 3){
        *Vt *= 1.3;
    }
    else if(*Cp == 2 && *Ct == 3){
        *At *= 1.25;
    }
    else if(*Ct == 2 && *Cp == 3){
        *Ap *= 1.25;
    }
    else if(*Cp == 1 && *Ct == 2){
        *At *= 1.15;
        *Vt *= 1.15;
    }
    else if(*Ct == 1 && *Cp == 2){
        *Ap *= 1.15;
        *Vp *= 1.15;
    }
}

int determinar_vencedor(double Vp, double Vt, double Ap, double At)
{
    if(Vp > Vt) return 0;
    else if(Vt > Vp) return 1; 
    else if(Ap > At) return 0; 
    else return 1; 
}

int combate(int Cp, double Ap, double Vp, int Ct, double At, double Vt, int rodada)
{
    aplicar_bonus(&Cp, &Ap, &Vp, &Ct, &At, &Vt);

    if(Vp < Vt || Vp == Vt)
    {
        Vt = Vt - Ap;
        if(Vt <= 0)
        {
            printf("Rodada%d: Pedro\n", rodada);
            return 0;
        }
        
        Vp = Vp - At;
        if(Vp <= 0)
        {
            printf("Rodada%d: Tulio\n", rodada);
            return 1;
        }
        
        int vencedor = determinar_vencedor(Vp, Vt, Ap, At);
        if(vencedor == 0)
        {
            printf("Rodada%d: Pedro\n", rodada);
        }else if(vencedor == 1)
        {
            printf("Rodada%d: Tulio\n", rodada);
        }
        return vencedor;
    }
    else
    {

        Vp = Vp - At;
        if(Vp <= 0)
        {
            printf("Rodada%d: Tulio\n", rodada);
            return 1;
        }
        
        Vt = Vt - Ap;
        if(Vt <= 0)
        {
            printf("Rodada%d: Pedro\n", rodada);
            return 0;
        }
        
        int vencedor = determinar_vencedor(Vp, Vt, Ap, At);
        if(vencedor == 0)
        {
            printf("Rodada%d: Pedro\n", rodada);
        }else if(vencedor == 1)
        {
            printf("Rodada%d: Tulio\n", rodada);
        }
        return vencedor;
    }
}

int main() 
{
    int classeP1 , classeP2, classeP3;
    double ataqueP1 , ataqueP2 , ataqueP3;
    double vidaP1 , vidaP2 , vidaP3;

    scanf("%d %lf %lf", &classeP1, &ataqueP1 , &vidaP1);
    scanf("%d %lf %lf", &classeP2, &ataqueP2 , &vidaP2);
    scanf("%d %lf %lf", &classeP3, &ataqueP3 , &vidaP3);

    int classeT1 , classeT2, classeT3;
    double ataqueT1 , ataqueT2 , ataqueT3;
    double vidaT1 , vidaT2 , vidaT3;

    scanf("%d %lf %lf", &classeT1, &ataqueT1 , &vidaT1);
    scanf("%d %lf %lf", &classeT2, &ataqueT2 , &vidaT2);
    scanf("%d %lf %lf", &classeT3, &ataqueT3 , &vidaT3);
    
    
    int pontP = 0, pontT = 0;

    int rodada1 = combate(classeP1, ataqueP1, vidaP1, classeT1, ataqueT1, vidaT1, 1);
    if(rodada1 == 0) pontP += 1; 
    else pontT += 1;

    int rodada2 = combate(classeP2,ataqueP2, vidaP2, classeT2 ,ataqueT2, vidaT2, 2);
    if(rodada2 == 0) pontP += 1; 
    else pontT += 1;
    
    int rodada3 = combate(classeP3, ataqueP3, vidaP3, classeT3, ataqueT3, vidaT3, 3);
    if(rodada3 == 0) pontP += 1; 
    else pontT += 1;
    
    if(pontP > pontT)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso\n");
    }
    return 0;
}
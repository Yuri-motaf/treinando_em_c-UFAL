/*
Um bombeiro precisa subir um prédio para resgatar pessoas presas em andares em chamas.
Cada andar é descrito por uma string de 5 caracteres, onde:

. — espaço vazio
F — fogo! O bombeiro para imediatamente nesse andar
P — pessoa aguardando resgate
O bombeiro sobe andar por andar.
 Se encontrar F em qualquer posição do andar, ele para e não sobe mais. 
 Conte quantas pessoas ele resgatou antes disso.

entrada:
Um inteiro N (1 ≤N ≤ 10): número de andares.

N strings de exatamente 5 caracteres (., F ou P).


saida:
Se resgatou ao menos uma pessoa: Resgatados: X

Se o fogo bloqueou antes de qualquer resgate: Impossivel!

Se não há fogo nem pessoas: Predio vazio
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n; sccanf("%d", &n);


    int cont = 0;
    bool fogo = false;

    char andar[6];

    for(int i = 0 ; i < n ; i++)
    {
            scanf(" %5s", andar);            
            for(int j = 0; j < 5; j++){
            if(andar[j] == 'P') cont++;

            if(andar[j] == 'F'){
                fogo = true;
                break;
            }
        }

        if(fogo == true) break;
    }
    
    if(cont == 0 && fogo == false) printf("Predio vazio");
    if(cont == 0 && fogo == true) printf("Impossivel!");
    if(cont > 0) printf("Resgatados: %d", cont);
    return 0;
}
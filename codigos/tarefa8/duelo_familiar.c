
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM_M 3
#define DANO 15

bool valida_Principal(int matriz[TAM_M][TAM_M]) {
    for(int i = 0; i < TAM_M; i++) {
        for(int j = 0; j < TAM_M; j++) {
            if(i == j) {
                if(matriz[i][j] != 1) return false;
            } else {
                if(matriz[i][j] != 0) return false;
            }
        }
    }
    return true;
}

bool valida_Secundaria(int matriz[TAM_M][TAM_M]) {
    for(int i = 0; i < TAM_M; i++) {
        for(int j = 0; j < TAM_M; j++) {
            if(i + j == TAM_M - 1) {
                if(matriz[i][j] != 1) return false;
            } else {
                if(matriz[i][j] != 0) return false;
            }
        }
    }
    return true;
}

int validaGolpe(int matriz[TAM_M][TAM_M]){
    if(valida_Principal(matriz)) return 1;

    if(valida_Secundaria(matriz)) return 2;

    return 0;
}

int main() {
    int vidaL , vidaV; scanf("%d%d", &vidaL, &vidaV);
    getchar();

    for(int  z = 0; z < 10 && vidaL > 0 && vidaV > 0 ; z++){
        int matrizLuke[TAM_M][TAM_M];
        int matrizVader[TAM_M][TAM_M];

        //matriz do luke
        for(int i = 0; i < TAM_M; i++){
            for(int j = 0; j < TAM_M; j++){
                scanf("%d", &matrizLuke[i][j]);
            }
        }

        getchar();
        

        //matriz do vader
        for(int i = 0; i < TAM_M; i++){
            for(int j = 0; j < TAM_M; j++){
                scanf("%d", &matrizVader[i][j]);
            }
        }

        int validoLuke = validaGolpe(matrizLuke);
        int validoVader = validaGolpe(matrizVader);        

        if(validoLuke > 0 && validoVader > 0) {
            if(validoLuke == validoVader) {
                vidaL -= DANO;
                vidaV -= DANO;
            }
        } else if(validoLuke > 0 && validoVader == 0) {
            vidaV -= DANO;
        } else if(validoLuke == 0 && validoVader > 0) {
            vidaL -= DANO;
        }
    }

    if(vidaL == vidaV) printf("Houve empate.\n");
    if(vidaL > vidaV) printf("Luke Skywalker venceu.\n");
    if(vidaV > vidaL) printf("Darth Vader venceu.\n");
    return 0;
}
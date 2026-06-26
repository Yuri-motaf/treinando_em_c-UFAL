#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char tipo; scanf(" %c ", &tipo);

    int tam; scanf("%d", &tam);

    int linha, coluna;

    if(tipo == 'T'){
        if(tam == 1) 
        {
            linha = 9;
            coluna = 16;
        }
        if(tam == 2) 
        {
            linha = 18;
            coluna = 32;
        }
    }
    if(tipo == 'M'){
        if(tam == 1) 
        {
            linha = 6;
            coluna = 10;
        }
        if(tam == 2) 
        {
            linha = 12;
            coluna = 20;
        }
    }
    
    int matriz[linha][coluna];

    for(int i = 0 ; i < linha; i++ ){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    getchar();
    
    char op;
    while(true)
    {
        scanf("%c" , &op);
        if(op == 'F') break;

        if (op == 'O') {
            for (int i = 1; i < linha; i += 2){
                for (int j = 0; j < coluna; j++){
                  matriz[i][j] = 1;  
                } 
            }
        }    
        else if(op == 'E')
        {
            for(int i = 0; i < linha ; i+=2){
                for(int j = 0; j < coluna; j++){
                    if(matriz[i][j] == 0) matriz[i][j] = 1;
                }
            }
        }
        else if(op == 'S')
        {
            for(int j = 0; j < coluna ; j++){
                int i  = 0;
                matriz[i][j] = 1;
            }  
            for(int j = 0; j < coluna; j++){
                int i = linha - 1;
                matriz[i][j] = 1;
            }
            for(int i = 0; i < linha; i++){
                int j = 0;
                matriz[i][j] = 1;
            }
            for(int i = 0; i < linha; i++){
                int j = coluna - 1;
                matriz[i][j] = 1;
            }
        }
        else if(op == 'H')
        {
            if(matriz[0][0] == 0){
                for(int i = 0; i < ((linha/2)); i++){
                    for(int j = 0; j < coluna; j++){
                        matriz[i][j] = 1;
                    }
                }
            }
            else if(matriz[0][0] == 1){
                for(int i = (linha/2); i < linha; i++){
                    for(int j = 0; j < coluna; j++){
                        matriz[i][j] = 1;
                    }
                }
            }
        }
        else if(op == 'R')
        {
            for(int i = 0 ; i < linha; i++ ){
                for(int j = 0; j < coluna; j++){
                    if((i + j) % 2 == 0) matriz[i][j] = 1;
                }
            }   
        }
        else if(op == 'Q'){
            for(int i = 0 ; i < linha; i++ ){
                for(int j = 0; j < coluna; j++){
                    if(matriz[i][j] == 0) matriz[i][j] = 1;
                    else matriz[i][j] = 0; 
                }
            }
        }
        
    }

    float tpixels = linha * coluna;
    float cont = 0;
    
    for(int i = 0 ; i < linha; i++ ){
        for(int j = 0; j < coluna; j++){
            if(matriz[i][j] == 1) cont +=1;
        }
    }

    float p =(float) cont / tpixels;

    p = p * 100;

    for(int i = 0 ; i < linha; i++ ){
        for(int j = 0; j < coluna; j++){
            if(j == coluna - 1) printf("%d", matriz[i][j]);
            else printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }
    
    printf("Porcentagem de pixels funcionais: %.2f%%\n", p);
    printf("Status: ");
    if(p >= 0 && p <= 40) printf("Repara��o Ineficaz");
    if(p > 40 && p <= 70) printf("Reparado Parcialmente");
    if(p > 70 && p <= 99) printf("Reparado em sua Maioria");
    if(p == 100) printf("Reparado Totalmente");
    
    return 0;
}
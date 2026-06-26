#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_MAX 100

int main(){
    int n;
    scanf("%d", &n);
    getchar(); 
    
    int apostas[n][10];
    int qtdNumeros[n]; 
    
    for(int i = 0; i < n; i++){
        char aposta[TAM_MAX];
        fgets(aposta, TAM_MAX, stdin);
        
        
        aposta[strcspn(aposta, "\n")] = '\0';
        
        int j = 0; 
        int numero = 0;
        
        for(int k = 0; k <= strlen(aposta); k++){
            if(aposta[k] == ',' || aposta[k] == '\0'){
                if(numero > 0){
                    apostas[i][j] = numero;
                    j++;
                    numero = 0;
                }
            }
            else if(aposta[k] >= '0' && aposta[k] <= '9'){
                numero = numero * 10 + (aposta[k] - '0');
            }
        }
        qtdNumeros[i] = j; 
    }
    
    int resultado[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &resultado[i]);
    }
    
    int ganhadores = 0;
    
    for(int i = 0; i < n; i++){
        int acertos = 0;
        
        for(int j = 0; j < qtdNumeros[i]; j++){
            for(int k = 0; k < 6; k++){
                if(apostas[i][j] == resultado[k]){
                    acertos++;
                    break;
                }
            }
        }

        if(acertos == 6){
            ganhadores++;
        }
    }
    
    printf("Total de ganhadores: %d\n", ganhadores);
    
    return 0;
}
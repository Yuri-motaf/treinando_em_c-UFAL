#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d", &input);
    
    switch(input){
        case 0:
            printf("rosa rosa verde rosa");
            break;
        case 1:
            printf("verde rosa verde rosa");
            break;
        case 2:
            printf("verde verde verde rosa");
            break;
        case 3:
            printf("rosa verde verde rosa");
            break;
        case 4:
            printf("rosa rosa rosa verde");
            break;
        case 5:
            printf("verde rosa rosa verde");
            break;
        case 6:
            printf("verde verde rosa verde");
            break;
        case 7:
            printf("rosa verde rosa verde");
            break;
        case 8:
            printf("verde verde verde verde");
            break;
        case 9:
            printf("rosa rosa rosa rosa");
            break;
        case 10:
            printf("rosa rosa verde verde");
            break;
        case 11:
            printf("verde verde rosa rosa");
            break;
    }
        
    return 0;
}
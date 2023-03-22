
#include <stdio.h>

int main(void){

    int n = 6;

    while(n>0){
        if(n>1){
            printf("%d", n%2);
            n = n/2;
        }
        else{
            printf("%d", 1);
            n = n/2;
        }
    }
    printf("\nleer de derecha a izquierda");

    
}

#include <stdio.h>

int main(void){

    char escalon = '#';
    int i;
    char espacio = ' ';

    /*
    for(int n=0; n<10; n++){
        for(i=0; i<n; i++){
            printf("%c", escalon);
        }
        i = 0;
        printf("\n");
    }
    */

    /*
    char x[10];
    for(int n=0; n<10; n++){
        for(int k=0; k<n; k++){
            x[k] = '#';
            printf("%c", x[k]);
        }
        printf("\n");
    }
    */
    
    /*escalera mario bros*/
    
    //n = numero de escalones
    for(int n=10; n>0; n--){
        for(i=1; i<n; i++){
            printf("%c", espacio);
        }
        for(int k=i; k<=10; k++){
            printf("%c", escalon);
        }
        printf("\n");
    }
}
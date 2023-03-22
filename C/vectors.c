//vectores

#include <stdio.h>

int main(void){

    int y[16];
    //int y[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<16; i++){
        y[i] = i;
    }
    
    for(int i=0; i<16; i++){

        printf("Y-value  = 0x%x = %d\n", y[i], y[i]);

    }

}
//más sobre punteros y arrays

#include <stdio.h>
int main(void){

    short X[10];//sizeof(short) = 2bytes
    int Y[10];

    for(int i=0; i<10;i++){
        X[i] = i;
        Y[i] = 2*i;
    }

    for(int i=0; i<10; i++){
        printf("X[%d] = %d | Y[%d] = %d\n", i, X[i], i, Y[i]);
    }

    printf("address of the first element of X (X[0]) = 0x%X and its value %d\n", X, X[0]);
    printf("address of the third element of X (X[2]) = 0x%X and its value %d\n", X+2, *(X+2));
    printf("address of the first element of Y (Y[0]) = 0x%X and its value %d\n", Y, Y[0]);
    printf("address of the third element of Y (Y[2]) = 0x%X and its value %d\n", Y+2, *(Y+2));
}
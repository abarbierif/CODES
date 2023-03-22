//código para verificar posiciones de memoria en hex

#include <stdio.h>
int main(void){

    int A[20];

    for(int i=0; i<20; i++){
        printf("address of A[%d]: 0x%X\n", i, &A[i]);
    }

    
    printf("--------------------------------------------------------------\n");
    printf("the address of A[8] = 0x%X\n", A+8);

    printf("0x%X\n", (A - 1));

    int *pa = (A-1);

    printf("the value of pa = %d (is an address)\n", pa);
    printf("the address 32bytes after = %d\n", pa+8);
    
    int b, c;
    b = 6422132;//address of pa
    c = 6422164;//address of pa+8
    
    printf("bytes difference = %d\n", (c-b));
    printf("bytes difference = 0x%X\n", (c-b));


    





}
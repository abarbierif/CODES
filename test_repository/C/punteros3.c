//mas cosas sobre punteros

#include <stdio.h>

int main(void){

    int a, b;

    int *pa, *pb;
    
    a = 23;
    b = 4;
    pa = &a;
    pb = pa - 1;

    printf("--------------Basic variables and pointers operations--------------\n");
    printf("the value of a = %d\n", a);
    printf("the address of a = 0x%X\n", &a);
    printf("the value of the variable pointed by pointer pa = %d\n", *pa);
    printf("the value of the pointer pa = 0x%X (is an address)\n", pa);
    printf("the address of the pointer pa = 0x%X (is an address)\n", &pa);
    printf("\n");
    printf("the value of b = %d\n", b);
    printf("the address of b = 0x%X\n", &b);
    printf("the value of the variable pointed by pointer pb = %d\n", *pb);
    printf("the value of the pointer pb = 0x%X (is an address)\n", pb);
    printf("the address of the pointer pb = 0x%X (is an address)\n", &pb);
    printf("-------------------------------End----------------------------------\n");


  

    int c = 10;
    int d = 15;
    int *pc = &c;
    int *pd = &d;


}
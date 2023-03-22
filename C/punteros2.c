//punteros con arrays y sizeof()

#include <stdio.h>
int main(void){

    int A[5] = {1, 2, 3, 4, 5};

    printf("size of int: %d\n", sizeof(int));

    int b = sizeof(A);//bytes de todo el array
    printf("bytes of A: %d\n", b);

    int size = sizeof(A)/sizeof(A[0]);// (bytes/array)/(bytes/elemnto) = elementos/array se calcula la cant. de elementos
    printf("size of array: %d\n", size);

    for(int i=0; i<=size; i++){
        printf("address of A[%d]: %p\n", i, &A[i]);//se separan de 4bytes porque sizeof(int) = 4
    }
    
    printf("\nA as pointer: %p\n", A);
    /*se puede ver que al imprimir A usando formato %p (puntero) se obtiene
      la dirección del primer elemento del array, se puede decir entonces que
      el nombre del array(A) es un puntero a la dirección de su primer elemento*/

    //pero no es un puntero como tal. veamos el siguiente ejemplo

    int C;
    int *B = &C;
    printf("address of C: %p\n", B);
    //Se crea un puntero B que apunta a la direccion de c

    B++;//se dirrecciona a la siguiente direccion de memoria o registro
    printf("the pointer is now at: %p and the address of C is still: %p\n", B, &C);

    //lo mismo deberia pasar con A si fuese un puntero como tal

    //A++;
    //esta operación no es posible

    //pero se puede trabajar asociandole a un puntero lo que hay en A, se pasa a un puntero el contenido de A

    int *a = A;
    printf("'a' contains: %p\n", a);
    a++;
    printf("now 'a' contains: %p\n", a);
    printf("address of pointer is: %p\n", &a);

    

}
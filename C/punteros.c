//punteros: variable que almacena una direccion

#include <stdio.h>

int main(void){

    printf("ejemplo 1\n");
    
    int a = 10;
    
    printf("\nel valor de a es: %d\n", a);
    printf("la direccion de a es: %p\n", &a);
    //'&' para obtener la direccion en memoria de la variable
    

    int *dira = &a;
    //es importante poner '*' para indicar que es un puntero

    printf("direccion de a: %p\n", dira);
    //se puede ver que de ambas formas se obtiene lo mismo

    printf("\nejemplo 2, el valor de 'a' no cambia\n");
    //                    otro ejemplo
    /*cuando se usa una variable en una función esa variable
      no mantiene el valor que obtuvo en la función, sino que
      recupera el valor que tenia antes*/

    void suma(int n){
        n = n + n;//se realiza la operación: a = a + a = 10 + 10 = 20
        printf("\n%d\n", n);//se imprime el nuevo valor de 'a'
    }

    suma(a);
    printf("%d\n", a);
    /*como se puede ver, cuando se imprime la variable 
      dentro de la función esta tiene un valor dado por 
      la operacion que se realizó, pero terminada la función
      vuelve a su valor original*/

    printf("\nejemplo 3, el valor de 'a' cambia\n");
    /*ahora veamos que pasa si a la misma función se le
      da como argumento un puntero*/
    
    void suma_(int *n){
        int b = *n;//se lee en 'b' el contenido del registro '*n' en este caso contenido de 'a'
        b = b + b;//se realiza la misma operación: a = a + a = 10 + 10 = 20
        *n = b;//se escribe el valor de 'b' en el registro '*n' que corresponde a la dirección donde se almacena 'a'
        printf("\n%d\n", b);//se imprime el nuevo valor de 'a'
    }

    suma_(dira);
    printf("%d\n", a);
    /*como se puede ver, ahora si se modifico el contenido 
      de la variable ya que se le asigno el nuevo resultado
      al registro que almacena la variable*/
}
/*Número mayor que cero y par*/
#include <stdio.h>
int main(){
    int N;
    printf("Ingrese el numero: ");
    scanf("%d",&N);
    if(N>0 && (N%2==0)){
    printf("El numero es mayor que cero y par");
    }
    else{
    printf("El numero no es mayor que cero y par");
    }
    return 1;
}
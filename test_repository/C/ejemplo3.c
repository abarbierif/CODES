/*División de dos números*/
#include <stdio.h>
int main(){
    float a=0.0, b=0.0, c;// las variables se separan entre ','
    printf("Ingrese a: ");
    scanf("%f",&a);
    printf("Ingrese b: ");
    scanf("%f",&b);
    if(b!=0){//es importante abrir llaves
    c = a/b;
    printf("c = %f",c);//'%f' indica donde se imprimirá la variable
    }
    else{
    printf("No se puede calcular");
    }
    return 1;
}

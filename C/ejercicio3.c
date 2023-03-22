/*Crear un programa donde se ingresen 3 numeros y los ordene de menor a mayor*/
#include <stdio.h>
int main(){
    float a, b, c;
    float u;
    printf("Ingrese el primer numero: ");
    scanf("%f",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%f",&c);
    if(a>b){
        u = a;
        a = b;
        b = u;
    }
    if(b>c){
        u = b;
        b = c;
        c = u;
    }
    if(a>b){
        u = a;
        a = b;
        b = u;
    }
    printf("%f, %f, %f",a,b,c);
    return 1;
}
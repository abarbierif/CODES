/*Crear un programa que permita calcular la ecuación cuadrática*/
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    float x1, x2;
    printf("Ingrese a: ");
    scanf("%f",&a);
    printf("Ingrese b: ");
    scanf("%f",&b);
    printf("Ingrese c: ");
    scanf("%f",&c);
    if(a!=0 && ((b*b)-(4*a*c))>=0){
        x1 = ((-b + sqrt((b*b)-(4*a*c)))/(2*a));
        x2 = ((-b - sqrt((b*b)-(4*a*c)))/(2*a));
        printf("Las raices son %f y %f",x1,x2);
    }
    else{
        printf("No se puede calcular");
    }
    return 1;
}
/*Crear un programa donde se ingresen 3 números y muestre el mayor y el menor*/
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&c);
    if(a>b && a>c){
        if(b>c){
            printf("%d es el mayor y %d es el menor",a,c);
        }
        else{
        printf("%d es el mayor y %d es el menor",a,b);
        }
    }
    else{
        if(a>b){
            printf("%d es el mayor y %d es el menor",c,b);
        }
        else{
            if(a>c){
                printf("%d es el mayor %d es el menor",b,c);
            }
            else{
                printf("%d es el mayor y %d es el menor",b,a);
            }
        }
    }
    return 1;
}
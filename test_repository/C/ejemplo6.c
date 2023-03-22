/*Ejemplo de ciclos anidados*/
#include <stdio.h>
int main(){
    int i, N, j, suma=0, pot=1;
    printf("Ingrese N: ");
    scanf("%d",&N);
    if(N>0){
        for(i=1; i<=N; i++){
            pot=1;
            for(j=1; j<=i; j++){
                pot=pot*i;
            }
            suma=suma+pot;
        }    
        printf("%d",suma);
    }
    else{
        printf("Error");
    }
    return 1;
}
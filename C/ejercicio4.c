#include <stdio.h>
int main(){
    int i, j, k, N, suma=0, suma2, pot;
    printf("Ingrese N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        for(j=0; j<i; j++){
            suma2=0;
            suma2=suma2+i+(i-1);
        }
        pot=1;
        for(k=1; k<=(N-(i-1)); k++){
            pot=pot*suma2;
        }
        suma=suma+pot;
    }
    printf("%d", suma);
}
#include <stdio.h>
int main(){
    int suma=0, N;
    printf("Ingrese N: ");
    scanf("%d",&N);
    for(int k=0; k<N; k++){
        int base = (2*k) + 1;
        int pot = 1;
        for(int j=1; j<=N-k; j++){
            pot=pot*base;
        }
        suma=suma+pot;
    }
    printf("%d", suma);
    return 1;
}
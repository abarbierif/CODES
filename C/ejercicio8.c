#include <stdio.h>
int main(){
    int N, i, j, u, k, suma=0, suma2, pot, fact;
    printf("Ingrese N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        fact=1;
        if(i%2!=0){
            for(j=1; j<=i; j++){
                fact=fact*j;
            }
            suma=suma+fact;
        }
        else{
            suma2=0;
            for(k=1; k<=i; k++){
                suma2=suma2+k;
            }
            pot=1;
            for(u=1; u<=i; u++){
                pot=pot*suma2;
            }
            suma=suma+pot;
        }
    }
    printf("%d", suma);
    return 1;
}
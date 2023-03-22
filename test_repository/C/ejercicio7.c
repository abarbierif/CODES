#include <stdio.h>
int main(){
    int N, i, j, suma=0, pot;
    printf("Ingrese N: ");
    scanf("%d",&N);
    if(N%2==0){
        for(i=1; i<=N; i++){
            if(i%2!=0){
                suma=suma+i;
            }
            else{
                pot=1;
                for(j=1; j<=i; j++){
                    pot=pot*i;
                }
                suma=suma+pot;
            }
        }
        printf("%d", suma);
    } 
    else{
        printf("Error");
    }
    return 1;
}
#include <stdio.h>
int main(){
    int N, i, j, k;
    float suma=0, pot, mult, pot2, fact, frac;
    printf("Ingrese N: ");
    scanf("%d",&N);
    if(N%2==0){
        for(i=1; i<=N; i++){
            if(i%2!=0){
                pot=1;
                for(j=1; j<=i; j++){
                    pot=pot*i;
                }
                suma=suma+pot;
            }
            else{
                mult=1;
                for(k=i; k>0; k=k-2){
                    mult=mult*k;
                }
                pot2=1;
                for(k=1; k<=i; k++){
                    pot2=pot2*mult;
                }
                fact=1;
                for(k=1; k<i; k++){
                    fact=fact*k;
                }
                frac=pot2/fact;
                suma=suma+frac;
            }
        }
        printf("%f", suma);
    }
    else{
        printf("Error");
    }
    return 1;
}
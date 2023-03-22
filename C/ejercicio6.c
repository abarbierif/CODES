#include <stdio.h>
int main(){
    int n, k, i, j, u;
    float fact1=1, fact2=1, fact3=1, result=1;
    printf("Ingrese n: ");
    scanf("%d",&n);
    printf("Ingrese k: ");
    scanf("%d",&k);
    if(k>n){
        printf("Error");
    }
    else{
        for(i=1; i<=n; i++){
            fact1=fact1*i;
        }
        for(j=1; j<=k; j++){
            fact2=fact2*j;
        }
        for(u=1; u<=(n-k); u++){
            fact3=fact3*u;
        }
        result=fact1/(fact2*fact3);
        printf("%f", result);
    }
    return 1;
}
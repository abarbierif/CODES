#include <stdio.h>
int main(){
    int N, i, j;
    float num=0, den=1, result;
    printf("Ingrese N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        num=num+i;
    }
    for(j=1; j<=N; j++){
        den=den*j;
    }
    result=num/den;
    printf("%f", result);
    return 1;
}
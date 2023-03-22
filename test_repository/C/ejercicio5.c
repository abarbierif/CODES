#include <stdio.h>
int main(){
    int suma=0, N, i, j, k;
    float num=1, den=1, div;
    printf("Ingrese N: ");
    scanf("%d",&N);
    if(N%2==0){
       printf("Error");
    }
    else{
        for(i=N-1; i>0; i=i-2){
            num=num*i;
        }
        for(j=1; j<=N; j=j+2){
            suma=suma+j;
        }
        for(k=1; k<=N; k++){
            den=den*suma;
        }
        div=num/den;
        printf("%f", div);
    }    
    return 1;
}

/*#include <stdio.h>
int main(){
    float a=5, b=2;
    float c;
    c=a/b;
    printf("%f", c);
    return 1;
}*/
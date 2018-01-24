#include <stdio.h>
int main(){
    int k,n;
    scanf("%d", &k);
    n=1;
    while(S(n)<=k){
        printf("%d", S(n));
        n++;
    }
    printf("%d", n);
}

double S(int a){
    double s=0;
    int i;
    for(int i=1;i<=a;i++){
        s+=(1/a);
    }
    return s;
}
#include <stdio.h>
int a,b,c,d;
double x[2];
int n=0;
int main(){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    solve();
    printf("%.2f %.2f %.2f", x[0], x[1], x[2]);
}

double calc(double x){
    double value;
    value = a*x*x*x + b*x*x + c*x + d;
    return value;
}

void solve(){
    int i;
    for (int i=-100;i<=100;i+=10){
        printf("i:%d\n", i);
        if((calc(i)*calc(i+10))<=0){
            double j;
            for(double j=i;j<=(i+10);j+=0.01){
                printf("j:%d\n", j);
                if(calc(j)==0){
                    x[n]=j;
                    printf("x%d=%d\n", n, j);
                    n++;
                }
            }
        }
    }
}

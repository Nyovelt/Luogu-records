#include <stdio.h>
int a;
int b;
int s=-1;
int day = 1;

int main(){
    for (int i=0;i<7;i++){
        scanf("%d %d", &a, &b);
        if((a+b)>s){
            s = a+b;
            day = i+1;
        }
    }
    printf("%d", day);

    getchar();
    getchar();
}


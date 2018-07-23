#include <stdio.h>
int n; //用电量
float result;

void judge();

int main()
{
    scanf("%d", &n);
    
    judge();
    printf("%2.1f", result);
    getchar();
    getchar();
}

void judge()
{
    if(n<= 150){
        result = n * 0.4463;
    }
    else if(n <= 400){
        result = (n-150) * 0.4663 + 150 * 0.4463;
    }
    else{
        result = (n-400) * 0.5663 +(401 - 151)*0.4663 + 150 * 0.4463;
    }
}


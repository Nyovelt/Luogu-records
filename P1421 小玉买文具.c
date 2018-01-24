#include <stdio.h>
#include <math.h>
    int _a , _b;

    int main (){
        _a = 1;
        _b = 9;
        long int a;
        long int b;
        scanf("%d %d", &a, &b);
        int result;
        result =0;
        result = calc(a,b);
        printf("%d", result);
        return 0;
    }

    int calc(int c, int d){
        int e;
        e = floor(10*c+d)/(10*_a + _b);
        return e;
    }

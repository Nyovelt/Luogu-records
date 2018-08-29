#include <stdio.h>
int n = 0;
int main()
{
    while (1)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        n++;
        if (b >= 0)
            printf("Case %d: %lld + %lld = %lld\n", n, a, b, a + b);
        if (b < 0)
            printf("Case %d: %lld - %lld = %lld\n", n, a, -b, a + b);
    }
}
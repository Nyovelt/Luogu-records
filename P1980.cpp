#include <stdio.h>
#include <math.h>
long long int ans = 0;
long long int n;
int x;

int main()
{
    scanf("%lld %d", &n, &x);

    for (long int i = 1; i <= n; i++)
    {
        long int num;
        num = i;
        while (num != 0)
        {
            if ((num % 10) == x)
                ans++;
            num /= 10;
        }
    }

    printf("%lld\n", ans);

    getchar();
    getchar();
}

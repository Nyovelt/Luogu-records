#include <stdio.h>

int day[7] = {250, 250, 250, 250, 250, 0, 0};
long long int ans = 0;
long int x, n;

void week();

int main()
{
    scanf("%ld%ld", &x, &n);

    while (n > 0)
    {
        ans += day[x - 1];
        x++;
        week();
        n--;
    }

    printf("%lld", ans);

    getchar();
    getchar();
}

void week()
{
    if (x > 7)
        x = 1;
}
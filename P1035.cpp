#include <stdio.h>

int k;
double n = 1;
double s = 0;

int main()
{
    scanf("%d", &k);

    while (!(s > k))
    {
        s += 1 / n;
        n++;
    }
    n--;
    printf("%1.0f", n);
    getchar();
    getchar();
}
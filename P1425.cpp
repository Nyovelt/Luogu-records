#include <stdio.h>
int a, b, c, d;
int e, f;

void calc();

int main()
{
    scanf("%d %d %d %d", &a, &b, &c, &d);
    calc();
    printf("%d %d", e, f);
    getchar();
    getchar();
}

void calc()
{
    e = c - a;
    f = d - b;
    if (f < 0)
    {
        f += 60;
        e--;
    }
    else if (f == 60)
    {
        f = 0;
        e++;
    }
}

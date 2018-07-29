#include <stdio.h>

int n = 0;
int height;
int apple[10];
int main()
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &apple[i]);
    }
    scanf("%d", &height);
    height += 30;

    for (int i = 0; i < 10; i++)
    {
        if (apple[i] <= height)
            n++;
    }

    printf("%d\n", n);

    getchar();
    getchar();
}
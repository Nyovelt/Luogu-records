#include <stdio.h>

long int num[120];
int n = -1;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        scanf("%ld", &num[i]);
        if (num[i] == 0)
        {
            break;
        }
        else
        {
            n++;
            printf("n:%d \n", n);
        }
    }

    for (int i = n; i >= 0; i--)
    {
        printf("%ld ", num[i]);
    }

    getchar();
    getchar();
}
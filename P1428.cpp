#include <stdio.h>

int n;
int fish[999];

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int cute;
        scanf("%d", &cute);
        fish[i] = cute;
        //printf("fish:%d,cute:%d\n", i, cute);
        int ans = 0;
        for (int j = 0; j < i; j++)
        {

            if (fish[j] < cute)
            {
                ans++;
            }
        }
        printf("%d ", ans);
    }

    getchar();
    getchar();
}
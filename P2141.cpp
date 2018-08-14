#include <stdio.h>
#include <iostream>
#include <algorithm>

int n;

int main()
{
    scanf("%d", &n);
    long int num[n];
    for (int i = 0; i < n; i++)
    {
        long int temp = 0;
        scanf("%ld", &temp);

        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (num[j] == temp)
            {
                flag = 1;
                //printf("flag:1\n");
            }
        }

        if (flag == 0)
        {
            num[i] = temp;
            //printf("%d to num%d\n", temp, i);
        }
        else if (flag == 1)
        {
            n--;
            i--;
            continue;
        }
    }

    std::sort(num, num + n);

    for (int i = 0; i < n; i++)
    {
        //printf("number%d:%d\n", i, num[i]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {

                if (num[j] + num[k] == num[i])
                {
                    ans++;
                    //printf("%d+%d=%d\n",num[j],k,i);
                }
                else
                {
                    //printf("%d+%d!=%d\n",j,k,i);
                }
            }
        }
    }

    printf("%d\n", ans);

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}
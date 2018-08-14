#include <stdio.h>
#include <iostream>
#include <algorithm>

int n; //数字

int main()
{
    scanf("%d", &n); //有多少数

    long int num[n]; //定义数组
    for (int i = 0; i < n; i++)
    {
        long int temp = 0;
        scanf("%ld", &temp);

        int flag = 0;
        for (int j = 0; j < i; j++) //去重操作
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

    std::sort(num, num + n); //排序

    for (int i = 0; i < n; i++) //模拟
    {
        //printf("number%d:%d\n", i, num[i]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; (j < i) && (flag == 0); j++)
        {
            for (int k = 0; k < j; k++)
            {

                if (num[j] + num[k] == num[i])
                {
                    ans++;
                    flag = 1;
                }
                else
                {
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
}
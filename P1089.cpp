#include <stdio.h>
#include <stdlib.h>
int money = 0;
int month = 1;
int bank = 0;
int flag = 0;
int main()
{
    while (month != 13)
    {
        int outcome;
        scanf("%d", &outcome);
        money += 300;
        money -= outcome;
        if (money < 0)
        {
            printf("%d", -month);
            flag = 1;
            break;
        }
        else
        {
            bank += int(money / 100) * 100;
            money = money % 100;
        }
        month++;
    }
    if (flag == 0)
    {
        printf("%1.0f", float(float(money) + float(bank) * 1.2));
    }

    getchar();
    getchar();
}
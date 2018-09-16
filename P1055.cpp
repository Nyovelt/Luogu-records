#include <stdio.h>

char isbn[14];
int sum = 0;
int j = 1;

//#define X 10

int main()
{
    gets(isbn);

    if (isbn[12] == 'X')
        isbn[12] = 10 + '0';

    //printf("%c", isbn[1]);

    for (int i = 0; i < 14; i++)
    {
        if (isbn[i] == '-')
            continue;

        sum += (isbn[i] - '0') * j;
        //printf("%d\n", sum);
        j++;
        if (j == 10)
            break;
    }

    if (sum % 11 == (isbn[12] - '0'))
    {
        printf("Right");
    }
    else
    {
        if ((sum % 11) < 10)
        {
            isbn[12] = (sum % 11) + '0';
        }
        else{
            isbn[12] = 'X';
        }

        puts(isbn);
    }
    //printf("%d", sum);
    getchar();
    getchar();
}
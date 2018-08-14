#include <stdio.h>
#include <algorithm>

long long n, today, yesterday, days, _days;

int main()
{

    days = 0;
    _days = 0;
    yesterday = 1000000001;

    scanf("%lld", &n);
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &today);
        if (today > yesterday)
        {
            days++;
        }
        else
        {
            _days = std::max(_days, days);
            days = 1;
        }
        yesterday = today;
    }

    days = std::max(days, _days);
    printf("%lld", days);
    getchar();
    getchar();
}
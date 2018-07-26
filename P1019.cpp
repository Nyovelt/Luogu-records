#include <stdio.h>

using namespace std;

int main()
{
    long long int n, m, ans = 0xffffffff;

    scanf("%lld", &n);
    //printf("%lld\n", n);
    for (int i = 0; i < 3; i++)
    {
        long long int a, b;
        scanf("%lld%lld", &a, &b);
        //printf("a:%lld ,b:%lld\n", a, b);
        if (n % a == 0)
        {
            m = n / a;
        }
        else
        {
            m = (n / a);
            m++;
        }
        //printf("m:%lld\n", m);
        //printf("m*b:%lld\n", m * b);

        if ((m * b) < ans)
        {
            //printf("<\n");
            ans = m * b;
        }
        //printf("ans:%lld\n", ans);
    }

    printf("%lld\n", ans);
    getchar();
    getchar();
    
}
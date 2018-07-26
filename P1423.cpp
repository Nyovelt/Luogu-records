#include <stdio.h>
#include <math.h>
float distence;

int main()
{
    scanf("%f", &distence);
    printf("distence:%f\n", distence);
    int i = 0;
    double s = 0;
    while (s < distence)
    {
        s += 2 * (pow(0.98, i));
        i++;
        printf("s:%f ,i:%d\n", s, i);
    }
    printf("%d\n", i);
    getchar();
    getchar();
}
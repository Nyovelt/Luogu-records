#include <stdio.h>

int tree[11000];
int L;
int M;

void flash();

int main()
{

    scanf("%d%d", &L, &M);
    flash();
    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (tree[i] == 1)
                tree[i] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i <= L; i++)
    {
        if (tree[i] == 1)
            ans++;
    }

    printf("%d\n", ans);

    getchar();
    getchar();
}

void flash()
{
    for (int i = 0; i <= L; i++)
    {
        tree[i] = 1;
    }
}
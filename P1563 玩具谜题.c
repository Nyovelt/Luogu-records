#include <stdio.h>
/*Black history*/

int careerr = 0;
int face[100001];
char career[100001][11];
int n, m;
int convert(int e)
{
	if (e < 0)
	{
		e += (n);
		return e;
	}
	else if (e > (n - 1))
	{
		e -= (n);
		return e;
	}
	return e;
}

int x(int c, int d)
{
	if (c == 0)
	{
		if (face[careerr] == 0)
		{
			careerr -= d;
		}
		else if (face[careerr] == 1)
		{
			careerr += d;
		}
	}
	if (c == 1)
	{
		if (face[careerr] == 0)
		{
			careerr += d;
		}
		else if (face[careerr] == 1)
		{
			careerr -= d;
		}
	}
	//printf("%d\n", careerr);
	careerr = convert(careerr);
	//printf("%d\n", careerr);
	//printf("%c#\n", career[careerr]);
	return careerr;
}

int main()
{

	scanf("%d %d", &n, &m);

	int i = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &face[i], &career[i]);
	}
	for (i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		careerr = x(a, b);
	}

	printf("%s", career[careerr]);
}

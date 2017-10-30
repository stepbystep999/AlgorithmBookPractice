#include<stdio.h>
#include<string.h>
int main()
{
	int m, n, x, y, num;
	int a[50][50]; 
	while(scanf("%d%d", &m, &n) != EOF)
	{
		memset(a, 0, sizeof(a));
		x = n - 1;
		y = 0;
		num = 1;
		a[y][x] = num;	
		while(num < m * n)
		{
			while(y < m - 1 && !a[y + 1][x])	a[++y][x] = ++num;
			while(x > 0 && !a[y][x - 1])	a[y][--x] = ++num;
			while(y > 0 && !a[y - 1][x])	a[--y][x] = ++num;
			while(x < n - 1 && !a[y][x + 1])	a[y][++x] = ++num;
		}
		printf("num此时的值为：%d\n", num);
		for(y = 0; y < m; y++)
		{
			for(x = 0; x < n; x++)
				printf("%3d", a[y][x]);
			printf("\n");
		}
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int n, i, a[105], flag;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		flag = 0;
		for(i = n - 1; i >= 0; i--)
			if(flag == 0)
			{
				printf("%d", a[i]);
				flag = 1;
			}		
			else
				printf(" %d", a[i]);
		printf("\n");
	}
	return 0;	
} 

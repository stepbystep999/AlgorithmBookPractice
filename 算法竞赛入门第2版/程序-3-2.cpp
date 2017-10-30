#include<stdio.h>
#include<string.h>
int main()
{
	int n, k, i, pos, a[1005];
	while(scanf("%d%d", &n, &k) != EOF)
	{
		memset(a, 0, sizeof(a)); 
		for(i = 1; i <= k; i++) 
		{
			pos = i;
			while(pos <= n)
			{
				if(a[pos] == 0)
					a[pos] = 1;
				else
					a[pos] = 0;
				pos += i;				
			}
		}
		pos = 0;
		for(i = 1; i <= n; i++)
			if(a[i] == 1)
			{
				if(pos == 0)
				{ 
					printf("%d", i);
					pos = 1; 
				} 
				else
					printf(" %d", i);
			}			
		printf("\n");
	} 
	return 0;
} 

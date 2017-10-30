#include<stdio.h>
#include<string.h>
int main()
{
	int len, abc, de, x, y, z, i, flag, count;
	char s[20], buf[101]; 
	while(scanf("%s", s) != EOF)
	{
		count = 0;
		for(abc = 111; abc <= 999; abc++)
			for(de = 11; de <= 99; de++)
			{
				x = abc * (de % 10);
				y = abc * (de / 10);
				z = abc * de;
				sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
				len = strlen(buf);
				flag = 0;
				for(i = 0; i < len; i++)
				{
					if(strchr(s, buf[i]) == NULL)
					{
						flag = 1;
						break;
					}
				}
				if(!flag)
				{
					count++;
					printf("<%d>\n%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", count, abc, de, x, y, z);
				}
			}
		printf("\nThe number of solutions = %d\n", count);
	}
	return 0;
}

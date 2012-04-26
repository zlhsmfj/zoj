#include<stdio.h>

int main()
{
	int T,n,i,j;
	char c,str[10000];
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		c=getchar();
		for(i=0;i<n;i++)
		{
			str[0]='\0';
			j=0;
			while(c=getchar())
			{
				if(c=='\n')
				{
					for(j=j-1;j>=0;j--)
						putchar(str[j]);
					putchar(c);
					break;
				}
				else if(c==' ')
				{
					for(j=j-1;j>=0;j--)
						putchar(str[j]);
					putchar(c);
					j=0;
				}
				else
					str[j++]=c;
			}
		}
		if(T)
			putchar('\n');
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int base,num,sum;
	char str[100];
	int T,i;

	scanf("%d",&T);
	while(T--)
	{
		while(scanf("%d",&base))
		{
			if(base==0)
				break;
			scanf("%s",str);
			num=0;sum=0;
			for(i=0;str[i]!='\0';i++)
			{
				num=num*base+str[i]-'0';
				sum=sum+str[i]-'0';
			}
			if(num%sum==0)
				printf("yes\n");
			else
				printf("no\n");
		}
		if(T)
			printf("\n");
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int x,y,tmp,sum,i;
	
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		tmp=y-x;
		sum=0;
		for(i=0;sum<tmp;i++)
			sum+=i/2+1;
		printf("%d\n",i);		
	}
	return 0;
}

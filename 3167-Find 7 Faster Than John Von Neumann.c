#include<stdio.h>

int main()
{
	int k,m;
	int i,j;
	int ans[1002],pp;
	
	while(scanf("%d%d",&k,&m)!=EOF)
	{
		ans[0]=1;
		for(i=1;i<1002;i++)
			ans[i]=0;
		for(i=1;i<=100;i++)
		{
			pp=0;
			for(j=0;j<1002;j++)
			{
				ans[j]=ans[j]*m+pp;
				pp=ans[j]/10;
				ans[j]%=10;
			}
			if(ans[k-1]==7)
				break;
		}
		printf("%d\n",i);
	}
	return 0;
}

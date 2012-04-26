#include<stdio.h>

int ff(int n)
{
	int ans=0;
	int tmp=n;
	while(tmp>=1)
	{
		if(tmp%2)
			ans++;
		tmp/=2;
	}
	return n-ans;
}

int main()
{
	int n,i,tmp;
	
	while(scanf("%d%d",&n,&i)!=EOF)
	{
		tmp=n-i;
		if(tmp==0||tmp==n)
			printf("1\n");
		else
		{
			if(ff(n)>ff(n-i)+ff(i))
				printf("0\n");
			else 
				printf("1\n");
		}
	}
	return 0;
}

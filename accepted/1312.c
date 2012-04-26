#include<stdio.h>
#include<math.h>
int ispr(int n)
{
	int i,m=sqrt((double)n);
	if(n<=3) return 1;
	else 
	{
		for(i=2;i<=m;i++)
			if(n%i==0) return 0;
		return 1;
	}
}
int main()
{
	int count[10000],prime[4000],n,c,i,p,q,j;
	
	for(p=0,q=0,i=1;i<=10000;i++)
		if(ispr(i))
		{
			prime[p++]=i;
			count[i]=++q;
		}
		else count[i]=q;
	
	while(scanf("%d%d",&n,&c)!=EOF)
	{
		if(n>1000||n<1||c>n||c<1) break; 
		i=count[n];
		p=2*c-i%2;
		j=(i-p)/2;

		printf("%d %d: ",n,c);
		if(j<0)
		{
			for(j=0;j<i-1;j++)
				printf("%d ",prime[j]);
			printf("%d\n",prime[j]);
		}
		else
		{
			for(i=0;i<p-1;i++)
				printf("%d ",prime[i+j]);
			printf("%d\n",prime[i+j]);
	
		}
		printf("\n");
	}
	return 0;
}
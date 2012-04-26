#include<stdio.h>

int main()
{
	int n,m,i,j;
	int number[10001],rem[5001];
	int sum,ans,re;
	
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&number[i]);
		sum=0;
		ans=0;
		for(i=0;i<m;i++)
			rem[i]=0;
		for(i=0;i<n;i++)
		{
			sum+=number[i];
			re=sum%m;
			if(re==0)
				ans++;
			rem[re]++;
		}
		for(i=0;i<m;i++)
			ans+=rem[i]*(rem[i]-1)/2;
		printf("%d\n",ans);
	}
	return 0;
}

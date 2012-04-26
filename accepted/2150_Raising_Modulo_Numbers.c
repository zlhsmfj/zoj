#include<stdio.h>
#include<string.h>

int abm(int a,int b,int m)
{
	int tmp=1;
	int i;
	int re[33];
	int ans=1;

	re[0]=a%m;
	for(i=1;;i++)
	{
		tmp*=2;
		if(tmp>b)
			break;
		re[i]=(re[i-1]*re[i-1])%m;
	}
	for(tmp=tmp/2,i--;tmp>0;i--)
	{
		if(b>=tmp)
		{
			b=b-tmp;
			ans=(ans*re[i])%m;
		}
		tmp/=2;
	}
	return ans;
}

int main()
{
	int cas,m,n,a,b;
	int i,ans,tmp;
	
	scanf("%d",&cas);
	while(cas--)
	{
		ans=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			tmp=abm(a,b,m);
			ans+=tmp;
			ans=ans%m;
		}
		printf("%d\n",ans);
	}
	return 0;
}

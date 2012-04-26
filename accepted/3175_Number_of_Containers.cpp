#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,T;
	long long ans,re;
	
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		re=0;
		scanf("%d",&n);
		for(i=1;i*i<=n;i++)
			ans+=n/i;
		for(i=1;i<n/i;i++)
			re+=i*(n/i-n/(i+1));
		ans=ans+re-n;
		printf("%lld\n",ans);
	}
	return 0;
}

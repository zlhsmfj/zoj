#include<stdio.h>

int main()
{
	int n,i;
	double ans;
	
	printf("# Cards  Overhang\n");
	while(scanf("%d",&n)!=EOF)
	{
		ans=0;
		for(i=1;i<=n;i++)
			ans+=1.0/(2*i);
		printf("%5d     %.3lf\n",n,ans);
	}
	return 0;
}

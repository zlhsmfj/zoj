#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int comp(const void *a,const void *b)
{
	return *(int *)b-*(int *)a;
}

int main()
{
	int weight[100];
	int i,n;
	double ans;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&weight[i]);
		qsort(weight,n,sizeof(int),comp);
		ans=weight[0]/4.0;
		for(i=0;i<n;i++)
			ans=2*sqrt(ans*weight[i]);
		printf("%.3lf\n",ans);
	}
	return 0;
}

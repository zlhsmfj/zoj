#include<stdio.h>

int a[10000],b[10000][2];

int main()
{
	int i,j;
	int N,M,ans;
	
	while(scanf("%d%d",&N,&M)!=EOF)
	{
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
		for(i=0;i<M;i++)
		{
			scanf("%d",&b[i][0]);
			b[i][1]=0;
		}
		ans=0;
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
				if(b[j][1])
					continue;
				else if(a[i]==b[j][0])
				{
					ans++;
					b[j][1]=1;
					break;
				}
		printf("%d\n",ans);
	}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int i,j,ans[101][101],tmp[101][101];
	int N,M;
	int cas=0;
	
	while(scanf("%d%d",&N,&M)&&!(N==0&&M==0))
	{
		cas++;
		printf("Case %d:\n",cas);
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
				scanf("%d",&ans[i][j]);
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
			{
				scanf("%d",&tmp[i][j]);
				ans[i][j]+=tmp[i][j];
			}
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
			{
				scanf("%d",&tmp[i][j]);
				ans[i][j]+=tmp[i][j];
				if(j==M-1)
					printf("%d\n",ans[i][j]/3);
				else printf("%d,",ans[i][j]/3);
			}			
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int n,m,c;
	int cur[22],flag[22];
	int i,j;
	int device;
	int max,tmp;
	int seq=0,is_blow;
	
//	freopen("fuses.in","r",stdin);
//	freopen("fuses.out","w",stdout);

	while(scanf("%d%d%d",&n,&m,&c)&&!(n==0&&m==0&&c==0))
	{
		seq++;
		is_blow=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&cur[i]);
			flag[i]=0;
		}
		tmp=0;
		max=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&device);
			if(flag[device]==0)
			{
				flag[device]=1;
				tmp=tmp+cur[device];
				if(tmp>c)
					is_blow=1;
				else if(tmp>max)
					max=tmp;
			}
			else
			{
				flag[device]=0;
				tmp=tmp-cur[device];
			}
		}
		printf("Sequence %d\n",seq);
		if(is_blow)
			printf("Fuse was blown.\n");
		else
		{
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n",max);
		}
		printf("\n");
	}
	return 0;
}

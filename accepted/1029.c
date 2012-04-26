#include<stdio.h>

int main()
{
	int shared[401];
	int i,max,min,ans;
	int T,rooms,room1,room2;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&rooms);
		for(i=1;i<401;i++)
			shared[i]=0;
		ans=0;
		while(rooms--)
		{
			scanf("%d%d",&room1,&room2);
			if(room1>room2)
			{
				max=room1;
				min=room2;
			}
			else 
			{
				max=room2;
				min=room1;
			}
			max=(max-1)/2*2+1;
			min=(min-1)/2*2+1;
			for(i=min;i<=max;i++)
			{
				shared[i]++;
				if(ans<shared[i])
					ans=shared[i];
			}
		}
		printf("%d0\n",ans);
	}
	return 0;
}

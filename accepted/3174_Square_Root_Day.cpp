#include<stdio.h>
#include<math.h>

int Squareif(int year)
{
	for(int i=1;i<13;i++)
		if(i*i==year)
			return 1;
	return 0;
}

int main()
{
	int years,yeart;
	int i;
	int n,ans;
	
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			ans=0;
			scanf("%d%d",&years,&yeart);
			for(i=years;i<=yeart;i++)
			{
				if(Squareif(i%100))
					ans++;
				if(i%1000!=i%100&&Squareif(i%1000))
					ans++;
			}
			printf("%d\n",ans);
		}
	}
}

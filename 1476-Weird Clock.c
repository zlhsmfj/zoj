#include<stdio.h>

int main()
{
	int start,d;
	int i,tmp,canfind;
	int flag[60];
	
	while(scanf("%d%d",&start,&d)&&!(start==0&&d==0))
	{
		for(i=0;i<60;i++)
			flag[i]=0;
		canfind=0;
		tmp=start;
		while(1)
		{
			if(tmp==0)
			{
				printf("%d\n",canfind);
				break;
			}
			else
			{
				if(flag[tmp])
				{
					printf("Impossible\n");
					break;
				}
				flag[tmp]=1;
				start=d*tmp;
				tmp=tmp+start;
				tmp=tmp%60;
			}
			canfind++;
		}
	}
	return 0;
}

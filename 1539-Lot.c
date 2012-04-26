#include<stdio.h>

int main()
{
	int N,tmp;
	int near2n;
	
	while(scanf("%d",&N)!=EOF)
	{
		tmp=N;
		near2n=1;
		while(tmp>1)
		{
			tmp=tmp/2;
			near2n*=2;
		}
		tmp=N-near2n;
		if(tmp<=near2n/2)
			printf("%d\n",tmp);
		else
			printf("%d\n",near2n*2-N);
	}
	return 0;
}

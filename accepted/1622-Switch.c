#include<stdio.h>

int main()
{
	int N,i,p,q;
	int a[10000];
	while(scanf("%d",&N)!=EOF)
	{
		p=0;
		q=0;
		for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
			if(i%2==a[i])  p++;
			if(i%2!=a[i])  q++;
		}
		if(p>q) p=q;
		printf("%d\n",p);
	}
	return 0;
}

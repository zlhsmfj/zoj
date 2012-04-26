#include<stdio.h>

int sum[500001];

int main()
{
	int i,n,num,j;
	
	for(i=2;i<500001;i++)
		sum[i]=1;
	sum[0]=0;
	sum[1]=0;
	for(i=2;i<=250000;i++)
		for(j=2*i;j<500001;j+=i)
			sum[j]+=i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		printf("%d\n",sum[num]);
	}
}

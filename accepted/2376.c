#include<stdio.h>

int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

int min(int a,int b)
{
	if(a<b)
		return a;
	return b;
}

int main()
{
	int T,len,n;
	int minl,maxl;
	int et,lt,temp;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&len,&n);
		et=0;
		lt=0;
		while(n--)
		{
			scanf("%d",&temp);
			minl=min(temp,len-temp);
			maxl=max(temp,len-temp);
			et=max(minl,et);
			lt=max(maxl,lt);
		}
		printf("%d %d\n",et,lt);
	}
	
	
	return 0;
}

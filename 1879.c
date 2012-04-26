#include<stdio.h>

int a[3001];

int Abs(int n)
{
	if(n<0)
		return -n;
	return n;
}

int main()
{
	int n,fi,pi;
	int flag,tmp,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		flag=1;
		for(i=0;i<n;i++)
			a[i]=0;
		scanf("%d",&fi);
		for(i=1;i<n;i++)
		{
			scanf("%d",&pi);
			tmp=Abs(pi-fi);
			if(a[tmp]||tmp>n-1)
				flag=0;
			else if(a[tmp]==0)
				a[tmp]=1;
			fi=pi;
		}
		if(flag)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	
	return 0;
}

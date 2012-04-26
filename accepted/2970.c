#include<stdio.h>

int main()
{
	int T,N,max,min,i;
	int record[2009];
	char str[10];
	
	/*
freopen("in.txt","r",stdin);*/
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s%d",str,&N);
		max=0;
		min=300000;
		for(i=0;i<N;i++)
		{
			scanf("%d",&record[i]);
			if(str[0]=='F'&&min>record[i])
				min=record[i];
			else if(str[0]!='F'&&max<record[i])
				max=record[i];
		}
		if(str[0]!='F')
			printf("%d\n",max);
		else 
			printf("%d\n",min);			
	}
	return 0;
}

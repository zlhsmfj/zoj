#include<stdio.h>

int main()
{
	long n;
	long re,ex,t;
	
/*
	freopen("in.txt","r",stdin);
    freopen("out1.txt","w",stdout);*/
	
	while(scanf("%ld",&n)!=EOF)
	{
		if(n%2==0||n==1)
		{
			printf("2^? mod %ld = 1\n",n);
			continue;
		}
		else
		{
			ex=4;
			t=2;
			re=ex%n;
			while(re!=1)
			{
				if(re==2)	break;
				t++;
				ex=re*2;
				re=ex%n;
			}
			if(re!=1)
				printf("2^? mod %ld = 1\n",n);
			else 
				printf("2^%ld mod %ld = 1\n",t,n);
			
		}
	}
	return 0;
}

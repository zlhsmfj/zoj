#include<stdio.h>

int main()
{
	int n,T;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		if(n%2==0)
			printf("%d\n",n/2*(n/2-1));
		else 
			printf("%d\n",(n-1)*(n-1)/4);	
	}	
	return 0;
}

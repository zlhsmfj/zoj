#include<stdio.h>
int main()
{
	int m,n,k,i,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		k=0;
		while(n/10)
		{
			m=n%10;
			n/=10;
			if(m>=5)
				n++;
			k++;
		}
		printf("%d",n);
		for(i=0;i<k;i++)
		{
			printf("0");
		}
		printf("\n");	
	}
	return 0;
}

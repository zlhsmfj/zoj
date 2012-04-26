#include<stdio.h>

int main()
{
	int n,i;
	int count[501];
	
	count[0]=0;
	for(i=1;i<501;i++)
	{
		count[i]=count[i-1]+(1+i)*i/2+(1+i/2)*(i/2);
		if(i%2==0)
			count[i]=count[i]-i/2; 
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",count[n]);
	}
	return 0;
}

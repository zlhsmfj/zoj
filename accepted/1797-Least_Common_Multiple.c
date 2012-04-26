#include<stdio.h>


int hcf(int a,int b)
{
    int r=0;
    while(b!=0)
        {
        r=a%b;
        a=b;
        b=r;
        }
    return(a);
} 

int lcm(int a,int b)
{
    return a*(b/hcf(a,b));
}


int main()
{
	int a,b;
	int n,i,m,j;
	
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&m,&a);
		for(j=0;j<m-1;j++)
		{
			scanf("%d",&b);
			a=lcm(a,b);
		}
		printf("%d\n",a);
	 
	}
	return 0;
}

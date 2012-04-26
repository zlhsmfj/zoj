#include<stdio.h>

int main()
{
	int a,b;
	int flag,num;
	
	while(scanf("%d%d",&a,&b)&&!(a==0&&b==0))
	{
		flag=0;
		num=0;
		
		while(a!=0||b!=0)
		{
			if(a%10+b%10+flag>9)
			{
				flag=1;
				num++;
			}
			else 
				flag=0;
			a/=10;
			b/=10;
		}
		
		if(num==0)
			printf("No carry operation.\n");
		else if(num==1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n",num);
	}
	
	return 0;
}

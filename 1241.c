#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	int num=1;
	while(scanf("%lf%lf%lf",&a,&b,&c))
	{
		if(a==0&&b==0&&c==0) break;
		printf("Triangle #%d\n",num);
		num++;
		if(a==-1&&b>0&&b<c) 
		{
			a=sqrt(c*c-b*b);
			printf("a = %.3lf\n\n",a);
		}
		else if(b==-1&&a>0&&a<c)
		{
			b=sqrt(c*c-a*a);
			printf("b = %.3lf\n\n",b);
		}
		else if(a>0&&b>0)
		{
			c=sqrt(a*a+b*b);
			printf("c = %.3lf\n\n",c);
		}
		else printf("Impossible.\n\n");
	}
	return 0;
}
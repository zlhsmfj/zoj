#include<cstdio>
#include<cmath>
#define pi 3.1415926535897

int main()
{
	double D,V,d;
	
	while(scanf("%lf%lf",&D,&V)&&!(D==0&&V==0))
	{
		D=pow(D,3.0);
		d=pow(D-6*V/pi,1/3.0);
		printf("%.3lf\n",d);
	}
	return 0;
}

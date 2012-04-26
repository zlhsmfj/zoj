#include<cstdio>
#include<cmath>

int main()
{
	double k,h,a,b;
	double ans;
	double deta;
	
	/*
freopen("in.txt","r",stdin);*/
	
	while(scanf("%lf%lf%lf%lf",&k,&h,&a,&b)!=EOF)
	{
		deta=2*(90-k)/180*3.1415926535;
		k=2*(h-a)*sin(deta)*b;
		ans=2*h*(h-a)*cos(deta);
		ans=h*h+b*b-k-ans+(h-a)*(h-a);
		printf("%.2lf\n",sqrt(ans));		
	}
	return 0;
}

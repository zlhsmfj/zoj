#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdlib>
#define quad(a) (a)*(a)
#define zero 1e-7
#define pi 3.14159265359

using namespace std;

double sectorarea(double thelta,double r)
{
	if(2*thelta<pi)
		return r*r*(2*thelta-sin(2*thelta))/2;
	else
		return r*r*(2*thelta+sin(2*(pi-thelta)))/2;
}

double interarea(double r1,double r2,double dist)
{
	double thelta;
	double area;

	if(dist>=r1+r2||r1<zero||r2<zero)
		return 0;
	else if(fabs(r1-r2)>=dist)
		return (r1>r2)?(pi*r2*r2):(pi*r1*r1);
	thelta=acos((r1*r1+dist*dist-r2*r2)/2/r1/dist);
	area=sectorarea(thelta,r1);
	thelta=acos((r2*r2+dist*dist-r1*r1)/2/r2/dist);
	area+=sectorarea(thelta,r2);

	return area;
}

int main()
{
	double xc,yc,xr,yr;
	double rc,rR,rr;
	double area1,area2;
	double dist;
	double ans;

	while(scanf("%lf%lf%lf",&xc,&yc,&rc)!=EOF)
	{
		scanf("%lf%lf%lf%lf",&xr,&yr,&rr,&rR);
		dist=sqrt(quad(xc-xr)+quad(yc-yr));
		area1=interarea(rc,rr,dist);
		area2=interarea(rc,rR,dist);
		ans=area2-area1;
		if(fabs(ans)<zero)
			printf("0.000\n");
		else
			printf("%.3lf\n",ans);
	}

	return 0;
}
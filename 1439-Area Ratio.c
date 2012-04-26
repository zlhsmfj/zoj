#include<stdio.h>
#include<math.h>

typedef struct node
{
	int x;
	int y;
	int z;
}point;

int main()
{
	point aa,bb,cc;
	double x,y,z;
	int i;
	double p;
	
	while(scanf("%d%d%d%d%d%d%d%d%d",&aa.x,&aa.y,&aa.z,&bb.x,&bb.y,&bb.z,&cc.x,&cc.y,&cc.z)!=EOF)
	{
		x=(aa.x-bb.x)*(aa.x-bb.x)+(aa.y-bb.y)*(aa.y-bb.y)+(aa.z-bb.z)*(aa.z-bb.z);
		y=(aa.x-cc.x)*(aa.x-cc.x)+(aa.y-cc.y)*(aa.y-cc.y)+(aa.z-cc.z)*(aa.z-cc.z);
		z=(cc.x-bb.x)*(cc.x-bb.x)+(cc.y-bb.y)*(cc.y-bb.y)+(cc.z-bb.z)*(cc.z-bb.z);
		x=sqrt(x);
		y=sqrt(y);
		z=sqrt(z);
		p=(x+y+z)/2;
		
		p=4*(p-x)*(p-y)*(p-z)/x/y/z;
		printf("%.3lf\n",p*p);
	}
}

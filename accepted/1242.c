#include<stdio.h>
#include<math.h>

int main()
{
	int d,w;
	double year;
	int yearint,tmp;
	int cas=0;

	while(scanf("%d%d",&w,&d)&&!(d==0&&w==0))
	{
		printf("Sample #%d\n",++cas);
		
		year=d*1.0/w;
		year=year/810;
		
		year=log(year)/log(0.5);
		
		year*=5730;
		
		if(year<=10000)
		{
			yearint=(int)year/100;
			tmp=(int)year/10%10;
			if(tmp>=5)
				yearint++;
			if(yearint==0)
				printf("The approximate age is 0 years.\n");
			else
				printf("The approximate age is %d00 years.\n",yearint);
		}
		else
		{
			yearint=(int)year/1000;
			tmp=(int)year/100%10;
			if(tmp>=5)
				yearint++;
			printf("The approximate age is %d000 years.\n",yearint);
		}
		printf("\n");
	}
	return 0;
}

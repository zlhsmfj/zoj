#include<stdio.h>

char a[7][20]={"Double Eagle.","Eagle.","Birdie.","Par.","Bogey.","Double Bogey.","Hole-in-one."};

int main()
{
	int p,s;
	int cas;
	
	cas=0;
	while(scanf("%d%d",&p,&s)&&!(p==0&&s==0))
	{
		cas++;
		printf("Hole #%d\n",cas);
		p=s-p;
		if(s==1)
			printf("%s\n",a[6]);
		else if(p<=-3)
			printf("%s\n",a[0]);
		else if(p>=2)
			printf("%s\n",a[5]);
		else
			printf("%s\n",a[p+3]);
		printf("\n");
	}
	return 0;
}

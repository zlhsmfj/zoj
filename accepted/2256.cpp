#include<cstdio>

int main()
{
	int lot;

	while(scanf("%d",&lot)&&lot!=0)
	{
		if(lot<=4)
			printf("10\n");
		else if(lot<=8)
			printf("%d\n",10+(lot-4)*2);
		else if(lot%8==0)
			printf("%d\n",lot/8*18);
		else if(lot%8<5)
			printf("%.1f\n",lot/8*18+lot%8*2.4);
		else
			printf("%d\n",lot/8*18+2+lot%8*2);
	}
	
	return 0;
}

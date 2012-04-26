#include<stdio.h>

int main()
{
	int guests,i,j;
	int sam,ella;
	int meatball[31];
	
	while(scanf("%d",&guests)&&guests)
	{
		for(i=1;i<=guests;i++)
			scanf("%d",&meatball[i]);
		sam=0;ella=0;
		for(i=1,j=guests;1;)
			if(sam<=ella)
			{
				sam+=meatball[i];
				if(i==j)
				{
					j++;
					break;
				}
				i++;
			}
			else
			{
				ella+=meatball[j];
				if(i==j)
				{
					i--;
					break;
				}
				j--;
			}
		if(sam==ella)
			printf("Sam stops at position %d and Ella stops at position %d.\n",i,j);
		else
			printf("No equal partitioning.\n");
	}
	return 0;
}

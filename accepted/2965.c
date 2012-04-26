#include<stdio.h>

int main()
{
	int T,p;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&p);
		if(p==1)
			printf("7\n");
		else if(p==2)
			printf("27\n");
		else if(p>=3&&p<=10)
			printf("70\n");
		else if(p==11)
			printf("270\n");
		else 
			printf("700\n");
	}
	
	return 0;
}

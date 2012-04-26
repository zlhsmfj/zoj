#include <stdio.h>
int main()
{
	char str[81];
	int N,M,i,cas=1;
	
/*
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	*/
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%s",&M,str);
		printf("%d ",cas++);
		for(i=0;str[i]!='\0';i++)
			if(i!=M-1)
			printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}

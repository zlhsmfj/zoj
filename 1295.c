#include<stdio.h>
int main()
{
	int n,i;
	char str[100];

	scanf("%d",&n);
	getchar();
	while(n--)
	{
		str[0]=getchar();
		for(i=1;str[i-1]!='\n';i++)
			scanf("%c",&str[i]);
		i--;
		while(i--)
			putchar(str[i]);
		putchar('\n');
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char str[100];
	int i,n,j;

	scanf("%d",&n);
	if(n<=0||n>50) return 0;
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		printf("String #%d\n",i+1);
		for(j=0;str[j]!='\0';j++)
			if(str[j]=='Z') putchar('A');
			else putchar(str[j]+1);
		putchar('\n');
		putchar('\n');
	}
	return 0;
}
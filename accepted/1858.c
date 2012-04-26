#include<stdio.h>
int main()
{
	int a[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	char c,d;
	d='0';
	/*

	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);*/
	
	while(scanf("%c",&c)!=EOF)
	{
		if(c=='\n')
		{
			putchar(c);
			d='0';
		}
		else if(a[c-'A']!=0&&a[c-'A']!=a[d-'A'])
		{
			printf("%d",a[c-'A']);
			d=c;
		}
		else if(a[c-'A']!=a[d-'A'])
			d='0';
	}
	
	return 0;
}

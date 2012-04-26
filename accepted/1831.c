#include<stdio.h>

int main()
{
	char a[65],b[65],c;
	int i,num,flag;
	
/*
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);*/
	
	scanf("%c",&a[0]);
	for(i=0;a[i]!='\n';i++)
		scanf("%c",&a[i+1]);
	num=i;
	for(i=0;i<=num;i++)
	{
		scanf("%c",&b[i]);
		putchar(b[i]);
	}
	for(i=0;i<=num;i++)
		printf("%c",a[i]);
		
	while((c=getchar())!=EOF)
	{
		flag=1;
		for(i=0;i<num;i++)
			if(c==a[i])
			{
				putchar(b[i]);
				flag=0;
				break;
			}
		if(flag)
			putchar(c);
	}
	
	return 0;
}

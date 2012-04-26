#include<stdio.h>

int is_sub(char a[],char b[])
{
	int i,j;
	
	for(i=0,j=0;a[i]!='\0';i++,j++)
	{
		for(;b[j]!='\0';j++)
			if(a[i]==b[j])
				break;
		if(b[j]=='\0')
			return 0;
	}
	return 1;
}

int main()
{
	char str[100000],tsr[100000];
	int ans;
	
	while(scanf("%s%s",str,tsr)!=EOF)
	{
		ans=is_sub(str,tsr);
		if(ans)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}

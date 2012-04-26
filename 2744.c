#include<stdio.h>
int main()
{
	int i,j,count,k;
	char str[5001];
	
	while(scanf("%s",str)!=EOF)
	{
		count=0;
		for(i=0;str[i]!='\0';i++)
		{
			for(j=1;str[i+j]!='\0'&&i>=j;j++)
				if(str[i+j]==str[i-j])
					count++;
				else break;
			count++;
			for(k=i+1,j=0;str[k+j]!='\0'&&i>=j;j++)
			{
				if(str[i-j]==str[k+j])
					count++;
				else break;
			}
		}
		printf("%d\n",count);
	}
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char pwd[30],c;
	int code[30];
	int i;
	int flag;
	int count;
	
	while(scanf("%s",pwd))
	{
		if(strcmp(pwd,"end")==0)
			break;
		flag=0;
		count=strlen(pwd);
		for(i=0;i<count;i++)
		{
			c=pwd[i];
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
			{
				code[i]=1;
				flag=1;
			}
			else
				code[i]=0;
			if(i>0&&c!='e'&&c!='o')
				if(pwd[i-1]==c)
				{
					flag=0;
					break;
				}
		}
		if(flag)
			for(i=1;i<count-1;i++)
				if(code[i]==code[i-1]&&code[i]==code[i+1])
				{
					flag=0;
					break;
				}
		if(flag)
			printf("<%s> is acceptable.\n",pwd);
		else
			printf("<%s> is not acceptable.\n",pwd);
	}
	return 0;
}

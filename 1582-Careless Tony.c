#include<stdio.h>
#include<string.h>

int main()
{
	int T,time;
	int i;
	char correct[81],typed[81],c;
	int len1,len2;
	int ans;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&time);
		c=getchar();
		i=0;
		while(1)
		{
			c=getchar();
			if(c!='\n')
				correct[i++]=c;
			else
				break;
		}
		correct[i]='\0';
		len1=i;
		i=0;
		while(1)
		{
			c=getchar();
			if(c!='\n')
				typed[i++]=c;
			else
				break;
		}
		typed[i]='\0';
		len2=i;
		for(i=0;i<len1&&i<len2;i++)
			if(correct[i]!=typed[i])
				break;
		ans=(len2+len1-2*i)*time;
		printf("%d\n",ans);
	}
	return 0;
}

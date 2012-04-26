#include<stdio.h>
#include<string.h>

int main()
{
	int x[100],y[100];
	int i,T,j,top;
	char c,cc,str[10000],stack[1000];
	int ans,tmp,flag;
	
	scanf("%d",&T);
	c=getchar();
	while(T--)
	{
		c=getchar();
		scanf("%d%d",&x[c-'A'+1],&y[c-'A'+1]);
		c=getchar();
	}
	while(scanf("%s",str)!=EOF)
	{
		ans=0;
		top=0;
		flag=0;
		tmp=27;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]!=')')
				stack[top++]=str[i];
			else
			{
				c=stack[top-2];
				cc=stack[top-1];
				if(c=='(')
					continue;
				if(y[c-'A'+1]!=x[cc-'A'+1])
				{
					flag=1;
					break;
				}
				else
				{
					ans+=x[c-'A'+1]*y[c-'A'+1]*y[cc-'A'+1];
					x[tmp]=x[c-'A'+1];
					y[tmp]=y[cc-'A'+1];
					stack[top-3]='A'+tmp-1;
					tmp++;
					top=top-2;
				}
			}
		}
		if(flag)
			printf("error\n");
		else
			printf("%d\n",ans);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int N,i,cas=0,ans,tmp,max;
	char sb[151];
	
/*
	freopen("in.txt","r",stdin);*/
	
	scanf("%d%*c",&N);
	while(N--)
	{
		cas++;
		ans=1;
		tmp=0;
		max=0;
		gets(sb);
		if(sb[0]!='[')
			max=0;
		else {
		for(i=0;sb[i]!='\0';i++)
		{
			if(sb[i]=='[')
				tmp+=1;
			else tmp-=1;
			if(tmp>max) max=tmp;
		}
		}
		for(i=0;i<max;i++)
			ans*=2;
		printf("%d %d\n",cas,ans);
	}
	return 0;
}

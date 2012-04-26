#include<stdio.h>
int main()
{
	int ishere[26],n;
	int i,tmp,num;
	char str[10000];

	while(scanf("%d",&n)&&n>0)
	{
		for(i=0;i<26;i++)
			ishere[i]=1;
		scanf("%s",str);
		num=0;
		tmp=0;
		for(i=0;str[i]!='\0';i++)
			if(ishere[str[i]-'A']!=0)
			{
				tmp=tmp+ishere[str[i]-'A'];
				if(tmp>n)
				{
					num++;
					tmp=tmp-ishere[str[i]-'A'];
					ishere[str[i]-'A']=0;
				}
				else
					ishere[str[i]-'A']=-1;
			}
		if(num>0)
			printf("%d customer(s) walked away.\n",num);
		else
			printf("All customers tanned successfully.\n");
	}
	return 0;
}

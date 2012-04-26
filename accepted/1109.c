#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char map[200011][11];

int comp(const void *a,const void *b)
{ 
	return strcmp((char *)a,(char *)b); 
}

int main()
{
	char c;
	char word[11];
	int i,j,flag,tmp;
	int left,right,mid;
	
	tmp=-2;
	while(c=getchar())
	{
		tmp+=2;
		if(c=='\n')
			break;
		else
		{
			scanf("%s",word);
			map[tmp+1][0]=c;
			for(i=0;word[i]!='\0';i++)
				map[tmp+1][i+1]=word[i];
			map[tmp+1][i+1]='\0';
			scanf("%s",word);
			strcpy(map[tmp],word);
			c=getchar();
		}
	}
	
	qsort(map,tmp/2,22*sizeof(char),comp);
	while(scanf("%s",word)!=EOF)
	{
		flag=1;
		for(left=0,right=tmp/2;left<=right;)
		{
			mid=(left+right)/2;
			if(strcmp(word,map[2*mid])>0)
				left=mid+1;
			else if(strcmp(word,map[2*mid])<0)
				right=mid-1;
			else
			{
				flag=0;
				printf("%s\n",map[2*mid+1]);
				break;
			}
		}
		if(flag)
			printf("eh\n");
	}
}

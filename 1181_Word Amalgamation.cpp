#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct direct
{
	char dir[7];
	char sorted[7];
}pp;

pp aa[101];

int comp(const void *a,const void *b) 
{
	return *(char *)a-*(char *)b;
}

int compare(const void *a,const void *b) 
{
	return strcmp(((pp*)a)->dir,((pp*)b)->dir);
} 

int main()
{
	char word[7];
	int len;
	int i=0,j=0;
	int flag;
	
	while(scanf("%s",aa[i].dir)&&aa[i].dir[0]!='X')
	{
		strcpy(aa[i].sorted,aa[i].dir);
		len=strlen(aa[i].sorted);
		qsort(aa[i].sorted,len,sizeof(char),comp);
		i++;
	}
	qsort(aa,i,sizeof(pp),compare);
	while(scanf("%s",word)&&word[0]!='X')
	{
		flag=0;
		len=strlen(word);
		qsort(word,len,sizeof(char),comp);
		for(j=0;j<i;j++)
			if(strcmp(word,aa[j].sorted)==0)
			{
				puts(aa[j].dir);
				flag=1;
			}
		if(flag==0)
		{
			printf("NOT A VALID WORD\n");
			puts("******");
		}
		else
			puts("******");
	}
	return 0;
}

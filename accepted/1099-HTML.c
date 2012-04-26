#include<stdio.h>
#include<string.h>

int main()
{
	char word[80];
	int num=0;
	int line=0;
	int i;
		
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	while(scanf("%s",word)!=EOF)
	{
		num=strlen(word);
		if(word[0]=='<')
		{
			if(word[1]=='h')
			{
				if(line!=0)
					putchar('\n');
				for(i=0;i<80;i++)
				putchar('-');
				putchar('\n');
			}
			else
				putchar('\n');
			line=0;
		}
		else if(line+num+1<=80)
		{
			if(line)
			{
				putchar(' ');
				num++;
			}
			printf("%s",word);
			line+=num;
		}
		else
		{
			putchar('\n');
			printf("%s",word);
			line=num;
		}
	}
	return 0;
}

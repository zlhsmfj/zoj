#include<stdio.h>
#include<string.h>

int main()
{
	char words[101];
	int letter[101][26];
	int i,j;
	
	memset(letter,0,101*26);
	i=0;
	while(1)
	{
		scanf("%s",words[i]);
		if(words[0]=='X')
			break;
		for(j=0;words[j]!='\0';j++)
			letter[i][words[j]-'']
	}
}

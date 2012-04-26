#include<stdio.h>
#include<string.h>

char a[4][14]={"1234567890-=",
				"QWERTYUIOP[]",
				"ASDFGHJKL;'",
				"ZXCVBNM,./"};

int comp(char str,int *tmp2)
{
	int ans;
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;a[i][j]!='\0';j++)
			if(a[i][j]==str)
			{
				ans=i;
				*tmp2=j;
				return ans;
			}
	return -1;
}

int main()
{
	char str;
	int i,tmp,tmp2,num;
	
	a[0][12]='\\';
	a[0][13]='\0';
	
		
while(scanf("%c",&str)!=EOF)
	{		
		while(str!='\n')
		{
			tmp=comp(str,&tmp2);
			if(tmp==-1)	putchar(str);
			else 
				putchar(a[tmp][tmp2-1]);
			str=getchar();
		}
		putchar('\n');
	}
	
	return 0;
}

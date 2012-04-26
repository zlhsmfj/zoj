#include<stdio.h>

int main()
{
	int num_z,num_o,num_j,num_7;
	char str[1001],sub[1001];
	int i,j;
	
	while(scanf("%s",str)!=EOF)
	{
		num_z=0;
		num_o=0;
		num_j=0;
		num_7=0;
		for(i=0,j=0;str[i]!='\0';i++)
		{
			if(str[i]=='Z')
				num_z++;
			else if(str[i]=='O')
				num_o++;
			else if(str[i]=='J')
				num_j++;
			else if(str[i]=='7')
				num_7++;
			else
			{
				sub[j++]=str[i];
			}
		}
		sub[j]='\0';
		for(i=0;i<num_z;i++)
			putchar('Z');
		for(i=0;i<num_o;i++)
			putchar('O');
		for(i=0;i<num_j;i++)
			putchar('J');
		for(i=0;i<num_7;i++)
			putchar('7');
		puts(sub);
	}
	return 0;
}

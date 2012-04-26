#include<stdio.h>

int main()
{
	int frombase,tobase,i,j,flag;
	char fromnum[8],tonum[8];
	int num10;
	
	while(scanf("%s%d%d",fromnum,&frombase,&tobase)!=EOF)
	{
		num10=0;
		for(i=0;fromnum[i]!='\0';i++)
		{
			if(fromnum[i]>='0'&&fromnum[i]<='9')
				num10=num10*frombase+fromnum[i]-'0';
			else if(fromnum[i]>='A'&&fromnum[i]<='F')
				num10=num10*frombase+fromnum[i]-'A'+10;
		}
		i=0;
		flag=0;
		while(num10)
		{
			if(i==7)
			{
				flag=1;
				break;
			}
			fromnum[i]=num10%tobase;
			if(fromnum[i]>=0&&fromnum[i]<=9)
				fromnum[i]+='0';
			else if(fromnum[i]<16)
				fromnum[i]+='A'-10;
			i++;
			num10/=tobase;
		}
		if(flag)
			printf("%7s\n","ERROR");
		else
		{
			for(j=0;j<i;j++)
				tonum[j]=fromnum[i-j-1];
			tonum[j]='\0';
			printf("%7s\n",tonum);
		}
	}
	return 0;
}

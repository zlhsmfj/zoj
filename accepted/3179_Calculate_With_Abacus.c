#include<stdio.h>
#include<string.h>
int main()
{
	char T[9][7];
	int i,j,n;
	int sum,a,b,ans,now;
	
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		sum=(a+b)*(b-a+1)/2;
		gets(T[0]);
		for(i=0;i<8;i++)
			gets(T[i]);
		
		ans=0;
		for(j=0;j<6;j++)
		{
			now=0;
			if(T[0][j]=='|')
				now=5;
			if(T[3][j]=='o')
			{
				now++;
				for(i=4;i<8;i++)
				{
					if(T[i][j]=='|')
						break;
					now++;
				}
			}
			ans=ans*10+now;
			
		}
		if(ans==sum)
			puts("No mistake");
		else
			puts("Mistake");
	}
	return 0;
}

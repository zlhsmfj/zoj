#include<stdio.h>
#include<string.h>

int main()
{
	char cri[10],name[1000][200];
	int yap[2][1000],order[1000];
	int n;
	int i,j,flag,tmp;
	
	scanf("%d",&n);
	while(n>0)
	{
		for(i=0;i<n;i++)
			scanf("%s%d%d",name[i],&yap[0][i],&yap[1][i]);
		scanf("%s",cri);
		if(cri[0]=='N')
			flag=-1;
		else if(cri[0]=='Y')
			flag=0;
		else 
			flag=1;
		for(i=0;i<n;i++)
			order[i]=0;
	
		if(flag==-1)
		{
			for(i=0;i<n;i++)
				for(j=i+1;j<n;j++)
				{
					tmp=strcmp(name[i],name[j]);
					if(tmp<0||(tmp==0&&yap[0][i]<yap[0][j])||(tmp==0&&yap[0][i]==yap[0][j]&&yap[1][i]<yap[1][j]))
					{
						order[i]--;
						order[j]++;
					}
					else
					{
						order[j]--;
						order[i]++;
					}
				}
		}
		else
		{
			for(i=0;i<n;i++)
				for(j=i+1;j<n;j++)
				{
					if(yap[flag][i]<yap[flag][j]||(yap[flag][i]==yap[flag][j]&&strcmp(name[i],name[j])<0)||(yap[flag][i]==yap[flag][j]&&strcmp(name[i],name[j])==0&&yap[!flag][i]<yap[!flag][j]))
					{
						order[i]--;
						order[j]++;
					}
					else 
					{
						order[i]++;
						order[j]--;
					}
				}
		}
		
		for(i=1-n;i<n;i=i+2)
			for(j=0;j<n;j++)
				if(order[j]==i)
				{
					printf("%s %d %d\n",name[j],yap[0][j],yap[1][j]);
					break;
				}
		scanf("%d",&n);
		if(n<=0)
	 		break;
		printf("\n");
	}
	return 0;
}

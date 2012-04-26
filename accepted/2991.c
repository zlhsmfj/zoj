#include<stdio.h>

void rever(int loca[],int tmp[],int flag[],float t,int n)
{
	int i,temp;
	
	for(i=1;i<t;i++)
	{
		loca[tmp[i]]=n+1-i;
		loca[tmp[n+1-i]]=i;
		
		temp=flag[i];
		flag[i]=-flag[n+1-i];
		flag[n+1-i]=-temp;
		
		temp=tmp[i];
		tmp[i]=tmp[n+1-i];
		tmp[n+1-i]=temp;
	}
	if(n%2==1) flag[(int)t]=-flag[(int)t];
}

int main()
{
	


	int n,cas=0,m,k,flip[90];
	int i,j,tmp[31],flag[31],loca[31],temp,ttt;
	char c,d;
	float t;
	
	/*
freopen("in.txt","r",stdin);*/
	
	scanf("%d",&n);
	while(n--)
	{
		cas++;
		scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			scanf("%d",&tmp[i]);
			if(tmp[i]>0) flag[i]=1;
			else {flag[i]=-1;tmp[i]*=-1;}
			loca[tmp[i]]=i;
		/*
	printf("%d\n",loca[tmp[i]]);*/
			
		}
		j=1;
	/*
	for(i=1;i<=6;i++)
		{
			printf("loca=%d, tmp=%d, flag=%d\n",loca[i],tmp[i],flag[i]);
		}
		printf("\n");
		rever(loca,tmp,flag,3.5,6);
		for(i=1;i<=6;i++)
		{
			printf("loca=%d, tmp=%d, flag=%d\n",loca[i],tmp[i],flag[i]);
		}*/
	
		
		for(i=m;i>1;i--)
		{
			/*
if(i==5) for(ttt=1;ttt<=6;ttt++)
		{
			printf("loca=%d, tmp=%d, flag=%d\n",loca[ttt],tmp[ttt],flag[ttt]);
		}*/
			if(loca[i]==i&&flag[i]==1) continue;
			t=(loca[i]+1)/2.0;
			flip[j++]=loca[i];
			rever(loca,tmp,flag,t,loca[i]);
			
			if(flag[1]==1) {flag[1]=-1;flip[j++]=1;}
			
			flip[j++]=tmp[1];
			t=(tmp[1]+1)/2.0;
			rever(loca,tmp,flag,t,tmp[1]);

		}
		if(flag[i]==-1) flip[j++]=1;
		printf("%d %d",cas,j-1);
		for(i=1;i<j;i++)
			printf(" %d",flip[i]);
		printf("\n");
		
	}
	return 0;
}

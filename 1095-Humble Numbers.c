#include<stdio.h>

int min(int a,int b)
{
	if(a>b)
		return b;
	else 
		return a;
}

int main()
{
	int ans[5842];
	int i,n,j;
	int base[4]={2,3,5,7},index[4]={0,0,0,0};
	int tmpindex,tmp;
	
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	ans[0]=1;
	
	for(i=1;i<5842;i++)
	{
		tmp=min(ans[index[0]]*base[0],ans[index[1]]*base[1]);
		tmp=min(ans[index[2]]*base[2],tmp);
		tmp=min(ans[index[3]]*base[3],tmp);
		
		for(j=0;j<4;j++)
			if(ans[index[j]]*base[j]==tmp)
				index[j]++;
		ans[i]=tmp;
	}
	
	while(scanf("%d",&n)&&n!=0)
	{
		if(n%10==1&&n%100!=11)
			printf("The %dst humble number is %d.\n",n,ans[n-1]);
		else if(n%10==2&&n%100!=12)
			printf("The %dnd humble number is %d.\n",n,ans[n-1]);
		else if(n%10==3&&n%100!=13)
			printf("The %drd humble number is %d.\n",n,ans[n-1]);
		else
			printf("The %dth humble number is %d.\n",n,ans[n-1]);
	}
	return 0;
}

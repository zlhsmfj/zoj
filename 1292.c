#include<stdio.h>
#include<string.h>

void add(char a[],char b[],char back[])
{
    int i,j,k,up,x,y,z,l;
    char *c;
    
	if(strlen(a)>strlen(b))
		l=strlen(a)+2;
	else
		l=strlen(b)+2;

    c=(char *)malloc(l*sizeof(char));

	i=strlen(a)-1;
	j=strlen(b)-1;
	k=0;
	up=0;

	while(i>=0||j>=0)
	{
		if(i<0) x='0'; else x=a[i];
		if(j<0) y='0'; else y=b[j];
		z=x-'0'+y-'0';
		if(up)
			z+=1;
		if(z>9)
		{
			up=1;
			z%=10;
		}
		else
			up=0;
		c[k++]=z+'0';
		i--;j--;
	}
	if(up)
		c[k++]='1';
	i=0;
	c[k]='\0';
	for(k-=1;k>=0;k--)
		back[i++]=c[k];
	back[i]='\0';
}

int main()
{
	int T,i,j;
	char tmp[106],ans[106];
	
	scanf("%d",&T);
	while(T--)
	{
		ans[0]='0';
		ans[1]='\0';
		while(scanf("%s",tmp))
		{
			if(strcmp(tmp,"0")==0)
				break;
			add(ans,tmp,ans);
		}
		printf("%s\n",ans);
		if(T)
			printf("\n");
	}
}

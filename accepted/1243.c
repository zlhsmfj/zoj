#include<stdio.h>

int main()
{
	char url[66],protocol[66],host[60],port[60],path[60];
	int i,j,n,cas;
	
	scanf("%d",&n);
	for(cas=1;cas<=n;cas++)
	{
		scanf("%s",url);
		
		port[0]='\0';
		path[0]='\0';
		
		for(i=0;url[i]!=':';i++)
			protocol[i]=url[i];
		protocol[i]='\0';
		
		for(j=0,i=i+3;url[i]!=':'&&url[i]!='/'&&url[i]!='\0';i++)
			host[j++]=url[i];
		host[j]='\0';
		
		if(url[i]==':')
		{
			j=0;
			for(i=i+1;url[i]!='/'&&url[i]!='\0';i++)
				port[j++]=url[i];
			port[j]='\0';
		}
	
		if(url[i]=='/')
		{
			j=0;
			for(i=i+1;url[i]!='\0';i++)
				path[j++]=url[i];
			path[j]='\0';
		}
		
		printf("URL #%d\n",cas);
		printf("Protocol = %s\n",protocol);
		printf("Host     = %s\n",host);
		printf("Port     = ");
		if(port[0]=='\0')
			printf("<default>\n");
		else 
			printf("%s\n",port);
		printf("Path     = ");
		if(path[0]=='\0')
			printf("<default>\n");
		else 
			printf("%s\n",path);
		printf("\n");
	}
	return 0;
}

#include<stdio.h>

int main()
{
	char ACstring[102];
	int i;
	int flag=0;
	int pz,pj;
	
	while(scanf("%s",ACstring)!=EOF)
	{
		flag=0;
		pz=pj=-1;
		for(i=0;ACstring[i]!='\0';i++)
		{
			if(ACstring[i]=='Z')
			{
				pz=i;
				i++;
				while(ACstring[i]!='\0')
				{
					if(ACstring[i]=='O')
						;
					else if(ACstring[i]=='J'&&pj==-1)
						pj=i;
					else
					{
						flag=1;
						break;
					}
					i++;
				}
				if(flag==0&&(pj-pz)>1&&(pj-pz)<=(i-pj))
					printf("Accepted\n");
				else
					printf("Wrong Answer\n");
				flag=2;
			}
			if(flag==2)
				break;			
		}
		if(flag==0)
			printf("Wrong Answer\n");		
	}
	return 0;
}

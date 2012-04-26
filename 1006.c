#include<stdio.h>
#include<string.h>

int main()
{
	int plaincode[80],ciphercode[80];
	char plaintext[80],ciphertext[80];
	int key,i,len,temp;
	
	while(scanf("%d",&key)&&key!=0)
	{
		scanf("%s",ciphertext);
		len=strlen(ciphertext);
		for(i=0;i<len;i++)
	 	{
			if(ciphertext[i]=='.')
				ciphercode[i]=27;
			else if(ciphertext[i]>='a'&&ciphertext[i]<='z')
				ciphercode[i]=ciphertext[i]-'a'+1;
			else 
		 		ciphercode[i]=0;
 			temp=key*i%len;
		 	plaincode[temp]=(ciphercode[i]+i)%28;
			if(plaincode[temp]==0)
				plaintext[temp]='_';
			else if(plaincode[temp]==27)
				plaintext[temp]='.';
			else 
				plaintext[temp]=plaincode[temp]+'a'-1;
	 	}
	 	plaintext[len]='\0';
	 	printf("%s\n",plaintext);
 	}
 	return 0;
}

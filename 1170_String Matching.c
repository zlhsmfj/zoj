#include<stdio.h>
#include<string.h>

int com_lett(char wordx[],char wordy[])
{
	int lenx=strlen(wordx);
	int leny=strlen(wordy);
	int i,j,k,l;
	int most=0,tmp=0;
	
	for(i=0;i<lenx;i++)
		for(j=0;j<leny;j++)
		{
			tmp=0;
			for(k=i,l=j;k<lenx&&l<leny;k++,l++)
			{
				if(wordx[k]==wordy[l])
					tmp++;
				if(tmp>most)
					most=tmp;
			}
		}
	return most;
}

int gcd(int a,int b)
{
	int tmp;
	while(b)
	{
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}

int main()
{
	char wordx[1000],wordy[1000];
	int com,lenx,leny;
	
	while(scanf("%s",wordx)!=EOF)
	{
		if(wordx[0]=='-')
			break;
		scanf("%s",wordy);
		com=com_lett(wordx,wordy);
		lenx=strlen(wordx);
		leny=strlen(wordy);
		lenx=lenx+leny;
		if(com==0)
		{
			printf("appx(%s,%s) = 0\n",wordx,wordy);
			continue;
		}
		if(2*com==lenx)
		{
			printf("appx(%s,%s) = 1\n",wordx,wordy);
			continue;
		}
		leny=gcd(lenx,2*com);
		printf("appx(%s,%s) = %d/%d\n",wordx,wordy,2*com/leny,lenx/leny);
	}
	return 0;
}

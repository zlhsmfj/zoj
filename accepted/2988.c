#include<stdio.h>
int main()
{
	int N,cas=0;
	float pre,post;
	char unit[3];
	
	freopen("in.txt","r",stdin);

	scanf("%d",&N);
	while(N--)
	{
		cas++;
		scanf("%f%s",&pre,unit);
		if(unit[0]=='k')
			printf("%d %.4f lb\n",cas,pre*2.2046);
		else if(unit[0]=='l'&&unit[1]=='\0')
			printf("%d %.4f g\n",cas,pre*0.2642);
		else if(unit[0]=='l')
			printf("%d %.4f kg\n",cas,pre*0.4536);
		else
			printf("%d %.4f l\n",cas,pre*3.7854);
	}
}

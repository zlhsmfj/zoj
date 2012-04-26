 #include <stdio.h>
#include <string.h>
char t[5000];
int main()
{
   int m,n,i,temp;
   while(scanf("%s",t)&&t[0]!='0')
   {
        m = 0;n = 1;
        for(i = strlen(t)- 1;i >= 0;--i)
        {
            if(t[i]>'2'||(t[i]=='2'&& t[i+1]>'6'))
    			m = n;
   			else if(t[i]=='0')
   			{
    			m = 0;
   			 	i--;
   			}
   			else
   			{
    			temp = n;
    			n = m + n;
    			m = temp;
   			}
        }
        printf("%d\n",n);
   }
   return 0;
}

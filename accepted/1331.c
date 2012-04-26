#include<stdio.h>
#define f(m) m*m*m
main()
{
 int a,b,c,d;
 for(a=6;a<=200;a++)
  for(b=2;b<a;b++)
   for(c=b+1;c<a;c++)
    for(d=c+1;d<a;d++)
      if(f((long)a)==f((long)b)+f((long)c)+f((long)d))
       printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
}
#include<stdio.h>
#include<string.h>
#define infinity 1000000
#define max_vertexes 26 

typedef int Graph[max_vertexes][max_vertexes];

void prim(Graph G,int vcount,int father[])
{
    int i,j,k;
    int lowcost[max_vertexes],closeset[max_vertexes],used[max_vertexes];
    for (i=0;i<vcount;i++)
        {
        lowcost[i]=G[0][i];
        closeset[i]=0; 
        used[i]=0;
        father[i]=-1; 
        }
    used[0]=1; 
    for (i=1;i<vcount;i++)
        {
        j=0;
        while (used[j]) j++;
        for (k=0;k<vcount;k++)
            if ((!used[k])&&(lowcost[k]<lowcost[j])) j=k;
        father[j]=closeset[j]; 
        used[j]=1;
        for (k=0;k<vcount;k++)
            if (!used[k]&&(G[j][k]<lowcost[k]))
                { lowcost[k]=G[j][k];
                closeset[k]=j; }
        }
}

int main()
{
	Graph village;
	int i,j,n,m,ans,dist,father[26];
	char c,cc;
	
	
	while(scanf("%d",&n)&&n)
	{
		c=getchar();
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				village[i][j]=infinity;
		for(i=0;i<n-1;i++)
		{
			scanf("%c%d",&c,&m);
			cc=getchar();
			for(j=0;j<m;j++)
			{
				scanf("%c%d",&cc,&dist);
				village[c-'A'][cc-'A']=dist;
				village[cc-'A'][c-'A']=dist;
				cc=getchar();
			}
		}
		prim(village,n,father);
		ans=0;
		for(i=0;i<n;i++)
			if(father[i]!=-1)
				ans+=village[i][father[i]];
		printf("%d\n",ans);
	}
	return 0;
}

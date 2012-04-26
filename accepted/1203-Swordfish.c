#include<stdio.h>
#include<math.h>

#define infinity 1000000

void prim(double G[][101],int vcount,int father[])
{
    int i,j,k;
    double lowcost[101],closeset[101];
	int used[101];
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
	int n;
	int i,j,cas=0;
	double a[100],b[100],dist;
	double g[101][101];
	int father[101];
	
	scanf("%d",&n);
	while(n!=0)
	{
		cas++;
		printf("Case #%d:\n",cas);
		
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf",&a[i],&b[i]);
			for(j=0;j<i;j++)
			{
	
				dist=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
				g[i][j]=dist;
				g[j][i]=dist;
			}
		}
		prim(g,n,father);
		dist=0;
		for(i=1;i<n;i++)
			if(father[i]!=-1)
				dist+=g[i][father[i]];
		printf("The minimal distance is: %.2lf\n",dist);
		scanf("%d",&n);
		if(n!=0)
			printf("\n");
	}
	return 0;
}


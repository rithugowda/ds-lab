#include<stdio.h>
#include<stdlib.h>
int d[10],p[10],cost[10][10],n;
void diji(int);
void short_path(int,int);
void main()
{
int i,j,src;
printf("enter no of vertices ");
scanf("%d",&n);
printf(" enter value for cost adjacency matrix \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

printf("%d\t",cost[i][j]);
}
printf("\n");
}
printf("\n enter the source vertix");
scanf("%d",&src);
diji(src);
for(i=0;i<n;i++)
short_path(src,i);
}


void diji(int src)
{
int s[10],v,u,min,i,j;
for(i=0;i<n;i++)
{
d[i]=cost[src][i];
p[i]=src;
s[i]=0;
}
s[src]=1;
for(i=1;i<n;i++)
{
min=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)

if(d[j]<min)
{
min=d[j];
u=j;

}
}
if(u==-1)
return;
s[u]=1;

for(v=0;v<n;v++)
{
if(s[v]==0)
if(d[u]+cost[u][v]<d[v])
{
d[v]=d[u]+cost[u][v];
p[v]=u;
}
}
}
}

void short_path(int src,int dst)
{
int i=dst;

while(src!=i)
{
printf("%d<--",i);
i=p[i];
}
printf("%d=%d",i,d[dst]);
printf("\n");
}

#include<stdio.h>
int a[10][10];
int n,visited[10],count=0;

int dfs(int v)
{
int w;
count++;
visited[v]=count;

for(w=0;w<n;w++)
if(a[v][w]==1 && visited[w]==0)
dfs(w);
printf("%d\t",v);


}
void main()
{
int i,j,v;
printf("enter a no vertices\n");
scanf("%d",&n);
printf("enter adjacency matrix value");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n enter adjacency matrix value \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n ---- DFS Traversal ------- \n");
for(i=0;i<n;i++)
visited[v]=0;
dfs(0);
if(count==n)
printf("\nIt is connected graph\n");
else
printf("\n Disconnected graph\n");
}



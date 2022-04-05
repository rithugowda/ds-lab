#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],i,search,n;
printf("enter the number of element:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("enter the search elements");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
printf("item found at item %d at %d position\n",search,i+1);
exit(0);
}
}
printf("item not found");

}


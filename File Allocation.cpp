#include <stdio.h>
int main()
{
	int i,n,a,alo[10],T[10];
	printf("Enter the number of blocks of Memory:");
	scanf("%d",&n);
	printf("Enter the blocks of Memory:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&T[i]);
	}
	printf("Enter the number of blocks Allocated:");
	scanf("%d",&a);
	printf("Enter the Blocks Allocated:");
	for(i=1;i<=a;i++)
	{
		scanf("%d",&alo[i]);
	}
	for(i=1;i<=10;i++)
	{
		if (alo[i]==T[i])
		{
			printf("%d->File already Allocated\n",alo[i]);
		}
    }
	for(i=1;i<=10;i++)
	{
		if(alo[i]!=T[i])
		{
			printf("%d->1\n",T[i]);
		}
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int n,i,p[10],b[10],wt[10],wtpr[10],wtp=0,awt,tat[10],ta=0;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Enter the process and burst time :");
		scanf("%d%d",&p[i],&b[i]);
	}
	printf("Process\tBurst time\n");
	for (i=1;i<=n;i++)
	{
		printf("%d\t%d\n",p[i],b[i]);
	}
	wt[1]=0;
	for(i=2;i<=n;i++)
	{
		wt[i]=wt[i-1]+b[i-1];
		wtp=wtp+wt[i];
		
	}
	printf("\nwaiting time\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",wt[i]);
	}
	printf("\nAverage waiting time=%d",wtp/n);
	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+b[i];
		ta=ta+tat[i];
	}
	printf("\nTurnaround time\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",tat[i]);
	}
	printf("\nAverage TurnAround time=%d",ta/n);
	return 0;
	
}
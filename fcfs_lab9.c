#include<stdio.h>

int main()
{
	int num;

	printf("\nEnter total number of processes : ");
	scanf("%d",&num);

	int burst_time[num],wait_time[num],turnaround_time[num];
	
	int i;

	for(i=0;i<num;i++)
	{
		printf("\nEnter the burst time of process P[%d]",i);
		scanf("%d",&burst_time[i]);
	}	

	printf("\nProcess  Burst-Time");
	
	for(i=0;i<num;i++)
	{
		printf("\nP%d        %d",i,burst_time[i]);
	}

	wait_time[0]=0;
	turnaround_time[0]=burst_time[0];
	
	for(i=1;i<num;i++)
	{
			wait_time[i] = burst_time[i-1] + wait_time[i-1];
			turnaround_time[i] = burst_time[i] + wait_time[i];
	}

	printf("\nProcess  Burst-Time  Wait-Time  Turnaround-Time");

	for(i=0;i<num;i++)
	{
		printf("\nP%d        %d           %d          %d",i,burst_time[i],wait_time[i],turnaround_time[i]);
	}

	printf("/n");
	return 0;
}


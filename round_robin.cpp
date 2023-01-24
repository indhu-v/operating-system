#include<stdio.h>
#include<conio.h>
int main()
{
	int i,nop,sum=0,count=0,y,quant,wt=0,tat=0,at[10],bt[10],temp[10];
	float avg_wt,avg_tat;
	printf("total no of process in the system:");
	scanf("%d",&nop);
	y=nop;
	for(i=0;i<nop;i++)
	{
		printf("\n enter the arrival and burst time of the process[%d]\n",i+1);
		printf("arrival time:\t");
		scanf("%d",&at[i]);
		printf("\nburst time is:\t");
		scanf("%d",&bt[i]);
		temp[i]=bt[i];
	}
	printf("enter the time quantum for the process:\t");
	scanf("%d",&quant);
	printf("\nprocess no\t\tburst time\t\ttat\t\twaiting");
	for(sum=0,i=0;y!=0;)
	{
		if(temp[i]<=quant&&temp[i]>0)
		{
			sum=sum+temp[i];
			temp[i]=0;
			count=1;
		}
		else if(temp[i]>0)
		{
			temp[i]=temp[i]-quant;
			sum=sum+quant;
		}
		if(temp[i]==0&&count==1)
		{
			y--;
			printf("\nprocess no[%d]\t\t %d\t\t\t\t %d\t\t\t\t %d",i+1,bt[i],sum-at[i],sum-at[i]-bt[i]);
			wt=wt+sum-at[i]-bt[i];
			tat=tat+sum-at[i];
			count=0;
		}
		if(i==nop-1)
		{
			i=0;
		}
		else if(at[i+1]<=sum)
		{
			i++;
		}
		else
		{
		i=0;
		}
	}
	avg_wt=wt*1.0/nop;
	avg_tat=tat*1.0/nop;
	printf("\n average turn around time:\t%f",avg_tat);
	printf("\n average waiting time:\t%f",avg_wt);
	getch();
}

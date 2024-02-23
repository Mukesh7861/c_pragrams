#include<stdio.h>
int main(){
	
	int num[100],n,i,j,temp;
	printf("enter how many values you want to add in arry ? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value for %d index",i);
		scanf("%d",&num[i]);		
	}
	printf("\nbefore sorting arry is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d index %d value\n",i,num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\nafter sorting arry is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d index %d value\n",i,num[i]);
		
	}
	
	return 0;
	
}
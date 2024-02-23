#include<stdio.h>
int num[100],q,op,max;

void store()
{
	scanf("%d",&q);
	for(int i = 0;i<q;i++)
	{
		printf("Enter %d number : ",i);
		scanf("%d",&num[i]);
	}
}
void select()
{
	printf("Select  options \n\n");
	printf("1. higher to lower Order \n2. lower to higher order :");
	scanf("%d",&op);
}
void asc()
{
	int t = 0;
	for(int i = 0;i<q;i++)
	{
		for(int j =i+1 ;j<q;j++)
		{
			if(num[i] > num[j])
				{
				t= num[i];
				num[i] =num[j];
				num[j] =t;
			}
		}
	}
	for(int i = 0;i<q;i++)
	{
		printf("%d\n",num[i]);
	}
}
void des()
{
	int t = 0;
	for(int i = 0;i<q;i++)
	{
	for(int j =i+1 ;j<q;j++)
    {
	t = num[i];
	num[i] = num[j];
	num[j] = t;
	}
	}
	for(int i = 0;i<q;i++)
	{
	printf("%d\n",num[i]);
	}
}
int main()
{
    printf("Enter total Number : ");
	store();
	select();
	if(op == 1)
	{
		asc();
	}
	else
	{
		des();
	}
	for(int i = 0;i<q;i++)
{
    if(num[i] > max)
        max = num[i];
}

printf("\nThe maximum number is is %d\n", max);
}
//2. Write a program to make Simple calculator (to make

//addition, subtraction,multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter your 1st value :");
	scanf("%d",&a);
	printf("enter your 2st value :");
	scanf("%d",&b);
    
    printf("\naddition : %d",a+b);
    
    printf("\nsubtraction: %d",a-b);
    
    printf("\nmultiplication :%d ",a*b);
    
    printf("\ndivision %d:",a/b);
    
    printf("\nmodulo %d:",a%b);
    
return 0;
}
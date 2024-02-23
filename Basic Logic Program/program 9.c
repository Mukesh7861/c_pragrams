//9. Find circumference of Triangle formula : triangle =a + b + c ?
#include<stdio.h>
int main()
{
	int a,b,c,triangle;
	printf("Enter  side of A:");
	scanf("%d",&a);
	printf("Enter side of B:");
	scanf("%d",&b);
	printf("Enter side of C");
	scanf("%d",&c);
	
	triangle=a+b+c;
	//	also we can do this 	printf("circumference of triangle %d :",a+b+c);
 printf("circumference of triangle %d :",triangle);
}
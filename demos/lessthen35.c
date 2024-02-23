/*Q- GIVEN an array of marks of students,if the markof any student
 is less then 35 print its roll number.
 (roll number here refers to the index of the array.)*/
#include<stdio.h>
int main(){
	
	int marks[10]={66,55,25,89,14,44,35,66,22,63};
	for(int i=0;i<10;i++)
	{
		if(marks[i]<35){

	printf("%d\n",i);
	
			
		}
	}
	return 0;
}
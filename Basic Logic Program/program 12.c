//12. Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?
#include<stdio.h>
int main()
{

    int Students;
    
    printf("Enter the number of students: ");
    scanf("%d",&Students);
    
    int Apples =Students * 5;
    
    printf("apples required: %d :",Apples);

    return 0;
}

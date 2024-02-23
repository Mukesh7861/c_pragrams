//structure with arry
#include<stdio.h>
//union
struct student {
	int id;
	float pr;
	char name[100];
};

int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)

{

    printf("enter id for student :",i+1);
	scanf("%d",&s[i].id);
	printf("enter pr for student:",i+1);
	scanf("%f",&s[i].pr);
	printf("enter name for student:",i+1);
	scanf("%s",&s[i].name);
}
    for(i=0;i<5;i++)
    {
    	printf("\ndetails for %d student",i+1);
    	printf("%d is id %s is name %f is pr ",s[i].id,s[i].pr,s[i].name);
	}
    return 0;
}

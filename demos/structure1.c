//structure is collection of multiple value with diffrent datatypes
#include<stdio.h>
struct student {
	int id;
	float pr;
	char name[100];
};
int main(){
	struct student s1,s2;//s1 is structure variable
    printf("enter id for student 1 :");
	scanf("%d",&s1.id);
	printf("enter pr for student 1 :");
	scanf("%f",&s1.pr);
	printf("enter name for student 1 :");
	scanf("%s",&s1.name);
    printf("id is %d\nname is %s\npr is %f",s1.id,s1.pr,s1.name);
	return 0;
}

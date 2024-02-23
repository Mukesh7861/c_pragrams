#include<stdio.h>
int main(){

	char str[100];
	scanf("%[^\n]s",&str);
//	gets(str); //also for print whole sentence
	printf("%s",str);
	
	return 0;
}
// %[^\n]s its for print whole sentence
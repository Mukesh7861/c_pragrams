//grade - marksheet

#include<iostream> 
 using 	namespace std;
 int main(){
int marks;
char grade;
cout<<"Enter your marks under 0 to 100\n";  
cin>>marks;                    //scan value (dynamic )
cout<<"your mark is : "<<marks; // for print value
if((marks>90 && marks<100))
{
	cout<<"\nyour grade is A"<<grade;
}
else if((marks>55 && marks<90))
{
	cout<<"\nyour grade is B"<<grade;
}
else if((marks>50 && marks<60))
{
	cout<<"\nyour grade is c"<<grade;
}
else{
cout<<"\n FAILE"<<grade;	
}


return 0;
 }
 
 
 
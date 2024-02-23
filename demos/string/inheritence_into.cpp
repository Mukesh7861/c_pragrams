//inheritance is used to link two or more classes together
// in inheritance one class is parent class another class is child class
#include<iostream>
using namespace std;
//parent/base class
class student{
	public:
		void info()
		{
			cout<<"\nhello this is info function or parent class";
		}
};
//child/derived
class result: public student{
	public:
		void info1()
		{
			cout<<"\nhello this is info1 function of child class";
		}
};
int main(){
result r1;
r1.info1();
r1.info();	
	
	
	return 0;
	
}

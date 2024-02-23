//multiple
#include<iostream>
using namespace std;
class A{
	protected:
		int no1;
		
};
class B{
	protected:
		int no2;
};
class c:public A,public B
{
	public:
		void get()
		{
			cout<<"enter value 1 and 2";
			cin>>no1>>no2;
		}
		void result()
		
}
int main(){
	
}
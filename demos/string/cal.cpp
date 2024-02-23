#include<iostream>
using namespace std;
class cal{
	public:
		void add(int a,int b)
		{
			cout<<a+b;
		}
		void div(int a,int b)
		{
			cout<<a/b;
		}
		void mul(int a,int b)
		{
			cout<<a*b;
		}
		void sub(int a,int b)
		{
			cout<<a-b;
		}
			void mod(int a,int b)
		{
			cout<<a%b;
		}
        };
int main(){
	int a,b,choice;
	cout<<"enter 2 values ";
	cin>>a>>b;
	cout<<"1.addition\n2.division\n3.multiplication\n4.subtraction\n5.modulas\n";
	cout<<"enter your choice ";
	cin>>choice;
	cal c;
	switch(choice)
	{
		case 1:
	    c.add(a,b);
		break;	
		case 2:
	    c.div(a,b);
		break;
		case 3:
	    c.mul(a,b);
		break;
		case 4:
	    c.sub(a,b);
		break;
		case 5:
	    c.mod(a,b);
		break;
	}
	
	return 0;
}
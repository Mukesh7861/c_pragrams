//multiplication table
#include<iostream>
using namespace std; // std>>mean standread libarary
int main()
{
	int i,n,j,table;
	cout<<"enter limit table";
	cin>>n;
	cout<<"which table you want:";
	cin>>j;
	for(i=1;i<=n;i++)
	{
		table=j*i;
	cout<<"\n"<<table;
		
	}
	return 0;
}
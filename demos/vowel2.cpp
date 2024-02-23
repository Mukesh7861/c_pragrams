//vowel or consonat
//reverse number
//prime number
//multiplication table
//addition of first and last digit// ex"5692" and : 5+2=7

#include<iostream> 
 using 	namespace std;
 int main()
 {
char vow;

cout<<"enter letter";  
cin>>vow;                    //scan value (dynamic )
cout<<"your letter is : "<<vow; // for print value
if(vow=='A','a'||vow=='e','E'||vow=='i','I'||vow=='o','O'||vow=='u','U')
{
	cout<<"\n VOWEL";
}
else
{
	cout<<"CONSTANT";
}
return 0;
}


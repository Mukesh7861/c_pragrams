//vowel or consonat
//reverse number
//prime number
//multiplication table
//addition of first and last digit// ex"5692" and : 5+2=7

#include<iostream> 
 using 	namespace std;
 int main(){
char vow;

cout<<"enter letter";  
cin>>vow;                    //scan value (dynamic )
cout<<"your letter is : "<<vow; // for print value
if(vow=='a'||vow=='e'||vow=='i'||vow=='o'||vow=='u' ||vow== 'A'||vow=='E'||vow=='I'||vow=='O'||vow=='U')
{
	cout<<"\nyor enter letter is vowel";
}
else
{
	cout<<"\nyor enter letter is consonat";
}
return 0;
}


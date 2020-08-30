#include <iostream>
using namespace std;
int CalAge (int);
int main()
{
	int year;
	for(int x=1 ; x<=3 ; x++);
	{
		cout<< "Enter your year" << " " << "x" << " : ";
		cin>> year ;
		cout<< "Age" << "x" ;
		CalAge (year);
	}
	return (0);
}
	
 int CalAge(int year)
{
	cout<<" : " <<(2563-year);
	cout<<endl;
	return (year);
}
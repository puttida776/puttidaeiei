#include <iostream>
using namespace std;
int Calage(int,int);
int main()
{
	int year,age;
	for (int i=1 ;i<=3;i++){ 
     cout<<"Enter Year"<<i<<":";
	 cin>>year;
	 age = 2563-year;
	 cout << "Age"<<i<<":"<<age<<endl;
	 Calage (year,age);
	}
	return (0);
}
int Calage (int year ,int age)
{ age = 2563-year;
  return (age);
}
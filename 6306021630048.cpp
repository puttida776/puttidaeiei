#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void display(int,int); 
int cal_bonus(int);
int main()
{
	int num;
	int*salary = new int[num];
	cout<<"Enter Number of preson : ";
	cin>>num;
	for(int a = 0; a < num ; a++)
	{	cout <<"Enter the salary ["<<a+1<<"] : ";
		cin >> salary[a];
	}
	display(salary,num);

	return 0;

}
void display(int salary[],int num) 	
{
	int * bonus = new int [num];
	cout<<"There are ["<<num<<"]"<<"person"<<endl;
		for(int a=0;a< num;a++)
		{ cout <<"The salary for person["<<a+1<<"]"<<endl;
		bonus[a] = cal_bonus(salary[a]);
		cout<<"and bonus "<<bonus[a]<<endl;
		
		}


}
int cal_bonus(int salary)
{
	int bonus = salary*2;
	return bonus;


}
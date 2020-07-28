#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    string name;
    short salary;
    float sale;
    float commission;

    cout << "Enter name:";
    cin >> name;
    cout << "Enter salary:";
    cin >> salary;
    cout << "Enter sale:";
    cin >> sale;
    cout << "commission:";
    cin >> commission;

    cout << "Your name" << name << endl;
    cout << "Total" << (sale * commission) + salary << endl;


    return 0;
}


















   

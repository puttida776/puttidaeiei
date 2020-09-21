#include<iostream>
#include<time.h>
using namespace std;
int Guess(int);
int main()
{
	int n,Round;
	srand(time(NULL));
	n = rand() % 10 +1;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen "<< n <<endl;
	Round = Guess(n);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is"<<endl;
	cout<<"You made "<<Round<<" guesses"<<endl;
	system("pause");
	return (0);
}

int Guess(int num)
{
	int input, Round = 0;

	do{
	cout<<"Guess the number (1 to 10):";
	cin>>input;
	if(input < num) cout<<"The secret number is lower"<<endl;
	else if (input > num) cout<<"The secret number is higher"<<endl;
	Round++;
	}while (input != num);

	return (Round);
}

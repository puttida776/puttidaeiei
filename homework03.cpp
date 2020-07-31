#include <iostream>
using namespace std;
int main()
{
	float quizz1, quizz2, quizz3;
	float mid, final;
	float quizz0, scoretotal;
	
	cout << "Enter frist quizz (10) :";
	cin >> quizz1;
	cout << "Enter second quizz (10) :";
	cin >> quizz2;
	cout << "Enter third quizz (10) :";
	cin >> quizz3;
	cout <<"Enter mid-term (40) :";
	cin >> mid;
	cout <<"Enter final (50) :";
	cin >> final;
	quizz0 = (quizz1+quizz2+quizz3)/3;
	cout << "Quizz Total : " << quizz0 << endl;
	cout << "Mid term    : " << mid << endl;
	cout << "Final       : " << final << endl;
	scoretotal = quizz0+mid+final;
	cout << "Your score is" << (scoretotal>=50? "PASS":"FAL") << endl;
    return(0);
}
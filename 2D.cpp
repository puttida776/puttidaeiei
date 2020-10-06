#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void display(string name[5],float price[3][5]){
	for(int i=0;i<5;i++)
	cout << i+1 <<setw(10)<<name[i]<<setw(20)<<fixed<<setprecision(2)<<price[0][i]<< setw(20)<< price[1][i]<<setw(20)<<price[2][i]<<endl; 
}
float calprice(float price[3][5]){
	for(int i=0;i<5;i++){
		price[1][i] = price[0][i]*7/100;
		price[2][i] = price[0][i]+price[1][i];
	}
	return price[3][5];
}
void main(){
	string name[5];
	float price[3][5];
	for(int i =0;i<5;i++){
		cout << "Enter Product Name : ";
		cin >> name[i];
		cout << "\tprice : ";
		cin >> price[0][i];
	}
	cout << setfill(' ') << "No." << setw(10) << "Product" << setw(20)<<"Price"<<setw(20)<<"Vat7%"<<setw(20)<<"Net"<<endl;

	
		calprice(price);
		display(name,price);

}
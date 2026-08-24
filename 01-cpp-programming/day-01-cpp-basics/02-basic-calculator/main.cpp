#include<iostream>
using namespace std;

int sum(int num1, int num2){
	return num1 + num2;
}

int difference(int num1, int num2){
	return num1 - num2;
}

int product(int num1, int num2){
	return num1 * num2;
}

float quotient(int num1, int num2){
	float n1 = num1;
	float n2 = num2;
	return n1 / n2;
}

int remainder(int num1, int num2){
	return num1 % num2;
}

int main(){
	int num1, num2;
	char choice='x';
	
	while(choice != 'n'){
	
		cout<<"Enter Number 1 : "<<endl;
		cin>>num1;
		cout<<"Enter Number 2 : "<<endl;
		cin>>num2;
		
		if(num2 == 0){
			cout<<"Denominator should not be 0, Do you want to try again y / n ?"<<endl;
			cin>>choice;
		}
		else{
			cout<<"\n\n*******************************************"<<endl;
			cout<<"Sum : "<<sum(num1,num2) <<endl;
			cout<<"Difference : "<<difference(num1,num2) <<endl;
			cout<<"Product : "<<product(num1,num2) <<endl;
			cout<<"Quotient : "<<quotient(num1,num2) <<endl;
			cout<<"Remainder : "<<remainder(num1,num2) <<endl;
			cout<<"\n\n*******************************************"<<endl;
			choice = 'n';
		}
		
	}
	return 0;
}

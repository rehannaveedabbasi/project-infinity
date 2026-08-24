#include<iostream>
using namespace std;
int main(){
	int num = 0;
	cout<<"Enter Number "<<endl;
	cin>>num;
	
	if(num > 0 ){
		cout<<"Number is Positive"<<endl;
	}
	else if(num < 0){
		cout<<"Number is Negative"<<endl;
	}
	else{
		cout<<"Number is 0"<<endl;
	}
	
	if(num % 2 == 0){
		cout<<"Number is Even"<<endl;
	}
	else{
		cout<<"Number is Odd"<<endl;
	}
	
	if(num % 5 == 0){
		cout<<"Number is Divisible by 5"<<endl;
	}
	else{
		cout<<"Number is Not Divisible by 5"<<endl;
	}
}

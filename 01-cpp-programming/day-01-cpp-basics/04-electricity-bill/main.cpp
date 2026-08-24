#include<iostream>
using namespace std;
int main(){
	
	int units = 0;
	cout<<"Enter the number of electricity units consumed"<<endl;
	cin>>units;
	
	if(units < 0){
		cout<<"Invalid Units"<<endl;
	}
	else{
		if(units <= 100){
			cout<<"Your total bill is Rs "<<units*5<<endl; 
		}
		else if(units <= 200){
			int f = 200 - units;
			int s = 100 - f;
			cout<<"Your total bill is Rs "<<(100*5)+(s*8)<<endl; 
		}
		else if(units <= 300){
			int f = 300 - units;
			int s = 100 - f;
			cout<<"Your total bill is Rs "<<(100*5)+(100*8)+(s*10)<<endl; 
		}
		else{
			int s = units - 300;
			cout<<"Your total bill is Rs "<<(100*5)+(100*8)+(100*10)+(s*15)<<endl;
		}
		
	}
}

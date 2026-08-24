/*
So, here I got an idea of how memory works, what hexadecimal memory addresses are, and 
how `int` variables are stored in memory. This program is mainly for observation and understanding.
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	
	cout<<"Value of a is : "<<a<<endl;
	cout<<"Address of a is : "<<&a<<endl;
	cout<<"Size of a is : "<<sizeof(a)<<endl;
	cout<<"\n"<<endl;
	
	cout<<"Value of b is : "<<b<<endl;
	cout<<"Address of b is : "<<&b<<endl;
	cout<<"Size of b is : "<<sizeof(b)<<endl;
	cout<<"\n"<<endl;
	
	cout<<"Value of c is : "<<c<<endl;
	cout<<"Address of c is : "<<&c<<endl;
	cout<<"Size of c is : "<<sizeof(c)<<endl;
	cout<<"\n"<<endl;
	
}

//@author:rehannaveedabbasi

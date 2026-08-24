#include<iostream>
using namespace std;
int main(){
	int x=10;
	int *p = &x;
	
	cout<<"X : "<<x<<endl;
	cout<<"&X : "<<&x<<endl;
	cout<<"*P : "<<*p<<endl;
	cout<<"P : "<<p<<endl;
	cout<<"&P : "<<&p<<endl;
	
	//SWAPPING USING POINTERS
	cout<<"\n\n"<<endl;
	cout<<"SWAPPING PROGRAM USING POINTERS"<<endl;
	int a = 5;
	int b = 6;
	
	int *ptr_a = &a;
	int *ptr_b = &b;
	
	cout<<"BEFORE SWAPPING"<<endl;
	cout<<"a : "<<*ptr_a<<endl;
	cout<<"b : "<<*ptr_b<<endl;
	
	int *ptr_temp = ptr_a;
	ptr_a = ptr_b;
	ptr_b = ptr_temp;
	
	cout<<"AFTER SWAPPING"<<endl;
	cout<<"a : "<<*ptr_a<<endl;
	cout<<"b : "<<*ptr_b<<endl;
	
	cout<<"SWAPPING BETWEEN VALUES"<<endl;
	int d = 15;
	int e = 16;
	int *ptr_d = &d;
	int *ptr_e = &e;
	int f;
	
	f = *ptr_d;
	*ptr_d = *ptr_e;
	*ptr_e = f;
	
	cout<<d<< " "<<e<<endl;
	
	
	
}

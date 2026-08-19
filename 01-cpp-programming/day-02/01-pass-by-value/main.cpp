/*
    Problem:

    Create a C++ program that demonstrates pass-by-value.

    The program should:
    1. Create an integer variable `number` with the value 10 in main().
    2. Pass `number` to a function.
    3. Inside the function, change the received value to 100.
    4. Return the changed value.
    5. Print both the original `number` and the returned value.
    
    Observe whether changing the function parameter changes
    the original variable.
*/

#include<iostream>
using namespace std;

int func(int x){
	x = 100;
	return x;
}

int main(){
	int number = 10;
	int x = func(number);
	
	cout<<"Number : "<<number<<endl;
	cout<<"x : "<<x<<endl;
}

//@author: rehannaveedabbasi

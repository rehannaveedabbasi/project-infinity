/*
    Problem:

    Create a C++ program that swaps the values of two integers
    using a function.

    The program should:

    1. Take two integers as input from the user.
    2. Display their values before swapping.
    3. Pass both integers to a function.
    4. The function should swap their original values.
    5. Display the values after swapping.

    Requirement:
    Use pass-by-reference so that the function modifies
    the original variables directly.

    Example:

    Input:
    First number: 10
    Second number: 20

    Output:
    Before Swapping:
    First: 10
    Second: 20

    After Swapping:
    First: 20
    Second: 10
*/

#include<iostream>
using namespace std;

void swapNumbers(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int num1, num2;
	cout<<"Enter Number 01"<<endl;
	cin>>num1;
	cout<<"Enter Number 02"<<endl;
	cin>>num2;
	
	cout<<"Before Swapping : "<<endl;
	cout<<"First : "<<num1<<endl;
	cout<<"Second : "<<num2<<endl;
	
	swapNumbers(num1,num2);
	
	cout<<"After Swapping : "<<endl;
	cout<<"First : "<<num1<<endl;
	cout<<"Second : "<<num2<<endl;
}

//@author: rehannaveedabbasi

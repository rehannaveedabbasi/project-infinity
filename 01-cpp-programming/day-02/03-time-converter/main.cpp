/*
    Problem:

    Create a C++ program that converts a given number of seconds
    into hours, minutes, and seconds.

    The program should:

    1. Take the total number of seconds as input from the user.
    2. Create separate variables for hours, minutes, and seconds.
    3. Pass the total seconds to a function using pass-by-value.
    4. Pass the hours, minutes, and seconds variables to the same
       function using pass-by-reference.
    5. The function should calculate and store the converted values
       directly into the referenced variables.
    6. Display the resulting hours, minutes, and seconds.
    7. Reject negative input as invalid.

    Example:

    Input:
    7290 seconds

    Output:
    Hours   : 2
    Minutes : 1
    Seconds : 30
*/
#include<iostream>
using namespace std;

void timeConverter(int seconds, int &hr, int &min, int &sec){
	hr = seconds/3600;
	int next = seconds % 3600;
	
	min = next/60;
	next = next % 60;
	
	sec = next;
}

int main(){
	int h,m,s;
	int sec;
	
	cout<<"Enter Seconds"<<endl;
	cin>>sec;
	
	if(sec < 0){
		cout<<"Invalid Time"<<endl;
	}
	else{
		timeConverter(sec, h,m,s);
		
		cout<<"\n\n";
		cout<<"Hour	: "<<h<<endl;
		cout<<"Minutes	: "<<m<<endl;
		cout<<"Seconds	: "<<s<<endl;
	}
}

//@author: rehannaveedabbasi

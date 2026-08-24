/*
    DAY 03 — QUESTION 1: STRING BASICS

    Write a C++ program that:

    1. Takes the user's full name as input.
    2. Prints the complete name.
    3. Prints the total number of characters.
    4. Prints the first character.
    5. Prints the last character.

    Requirements:
    - Use string.
    - Use getline() to take the full name.
    - Use length() to find the number of characters.
    - Do not use loops.
    - Do not hardcode the last character.

    Example:

    Enter Full Name: Rehan Abbasi

    Name: Rehan Abbasi
    Characters: 12
    First Character: R
    Last Character: i
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string fullName;
	cout<<"Enter Full Name "<<endl;
	getline(cin, fullName);
	
	cout<<"\n\nName : "<<fullName<<endl;
	cout<<"Chracters : "<<fullName.length()<<endl;
	cout<<"First Chracter : "<<fullName[0]<<endl;
	cout<<"Last Chracter : "<<fullName[fullName.length()-1]<<endl;
	
	return 0;
}

//@author:rehannaveedabbasi

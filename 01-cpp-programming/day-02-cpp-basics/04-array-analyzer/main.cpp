/*
    Problem:

    Create a C++ program that analyzes an array of integers.

    The program should:

    1. Take 5 integers as input from the user and store them in an array.
    2. Pass the array to a separate function.
    3. The function should calculate:
       - Sum of all elements
       - Average of the elements
       - Minimum value
       - Maximum value
    4. Return the calculated results to main() using reference parameters.
    5. Display all calculated results.

    Requirements:

    - Use an array.
    - Use a function for the analysis.
    - Use pass-by-reference for the calculated results.
    - Do not use vector, struct, pair, or tuple.
    - The solution should correctly handle positive, negative, and zero values.

    Example:

    Input:
    10 20 5 40 25

    Output:
    Sum     : 100
    Average : 20
    Minimum : 5
    Maximum : 40
*/

#include<iostream>
using namespace std;

void arrayAnalyzer(int arr[], int size, int &sum, float &avg, int &min, int &max){
	sum = 0;
	max = arr[0];
	min = arr[0];
	for(int i=0; i<size; i++){
		sum += arr[i];
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}	
	}
	float x = sum;
	avg = x/size;
}

int main(){
	int arr[5],sum,min,max;
	float avg;
	cout<<"Enter 5 Numbers for array"<<endl;
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	
	arrayAnalyzer(arr, 5, sum, avg, min, max);
	
	cout<<"Sum	:"<<sum<<endl;
	cout<<"Avg	:"<<avg<<endl;
	cout<<"Min	:"<<min<<endl;
	cout<<"Max	:"<<max<<endl;
	
}

//@rehannaveedabbasi

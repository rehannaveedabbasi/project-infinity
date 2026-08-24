#include<iostream>
#include<string>
using namespace std;
int main(){
	string sentence;
	int vowels = 0, consonants = 0, spaces = 0;
	cout<<"WRITE ALPHABETS"<<endl;
	getline(cin, sentence);
	
	for(int i=0; i<sentence.length(); i++){
		if(sentence[i] == 'a' or sentence[i] == 'e' or sentence[i] == 'i' or sentence[i] == 'o'
		or sentence[i] == 'u' or sentence[i] == 'A' or sentence[i] == 'E' or sentence[i] == 'I'
		or sentence[i] == 'O' or sentence[i] == 'U'){
			
			vowels += 1;
		}
		else if(sentence[i] == ' '){
			
			spaces += 1;
		}
		else{
			
			consonants += 1;
		}
	}
	
	cout<<"\n\nCharacters : "<<sentence.length()<<endl;
	cout<<"Vowels : "<<vowels<<endl;
	cout<<"Consonants : "<<consonants<<endl;
	cout<<"Spaces : "<<spaces<<endl;
}

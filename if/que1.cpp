//Program to check whether an integer is positive or negative
// This program considers 0 as a positive number

#include<iostream>
using namespace std;
int main(){
	int number;
	
	cout<<"Enter a number : ";
	cin>>number;
	
	if(number>=0){
		cout<<"Positive integer : "<<number<<endl;
	}
	else{
		cout<<"Negative integer : "<<number<<endl;
	}
	return 0;
}

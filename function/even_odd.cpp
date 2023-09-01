//Define a program to find out whether a given number is even or odd

#include<iostream>
using namespace std;

void evenOdd(int num){
	cout<<"Enter the value of num : ";
	cin>>num;
	
	if(num%2==0){
		cout<<"Even Number";
	}
	else{
		cout<<"Odd Number";
	}
	
}

int main(){
	int num;
	evenOdd(num);
}

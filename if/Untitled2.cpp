// Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	
	cout<<"Enter the value of a : ";
	cin>>a;
	
	cout<<"Enter the value of b : ";
	cin>>b;
	
	if(a+b == 4){
		cout<<"Yes "<<endl;
	}
	else if(a+b != 4){
		cout<<"Np "<<endl;
	}
	else{
		cout<<"Invalid "<<endl;
	}
	return 0;
}

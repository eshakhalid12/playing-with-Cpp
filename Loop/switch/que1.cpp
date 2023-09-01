// Program to build a simple calculator using switch Statement

#include<iostream>
using namespace std;
int main(){
	char oper;
	float a,b;
	
	cout<<"Enter Operators (+, -, *, /) : ";
	cin>>oper;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	
	switch(oper){
		case '+' :
			cout<< a <<" + " << b <<" = " << a + b;
		break;
		
		case '-' :
		    cout<< a <<" - " << b <<" = " << a - b;
		break;
		
		case '*' :
		    cout<< a <<" * " << b <<" = " << a * b ;
		break;
		
		case '/' :
		    cout<< a <<" / " << b <<" = " << a / b;
		break;
		
		default:
		    cout<<"Operators is does not match any case constant (+, -, *, /) ";
		break;					
	}
	return 0;
		
}

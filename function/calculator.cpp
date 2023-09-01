#include<iostream>
using namespace std;

void sum(){
	int num1,num2,result;
	cout<<"enter value 1 = ";
	cin>>num1;
	cout<<"enter value 2 = ";
	cin>>num2;
	result = num1+num2;
	cout<<result<<endl;
}

void min(){
		int num1,num2,result;
	cout<<"enter value 1 = ";
	cin>>num1;
	cout<<"enter value 2 = ";
	cin>>num2;
	result = num1-num2;
	cout<<result<<endl;
}
void multiply(){
		int num1,num2,result;
	cout<<"enter value 1 = ";
	cin>>num1;
	cout<<"enter value 2 = ";
	cin>>num2;
	result = num1*num2;
	cout<<result<<endl;
}
void divide(){
		int num1,num2,result;
	cout<<"enter value 1 = ";
	cin>>num1;
	cout<<"enter value 2 = ";
	cin>>num2;
	result = num1/num2;
	cout<<result<<endl;
}
void display(){
	cout<<"press 1 for addition"<<endl;
	cout<<"press 2 for subtraction"<<endl;
	cout<<"press 3 for multiplication"<<endl;
	cout<<"press 4 for division"<<endl;
		int num;
	cin>>num;
	if(num == 1){
		sum();
	}
	else if(num ==2){
		min();
	}
	else if(num==3){
		multiply();
	}
	else if(num==4){
		divide();
	}
	else{
		cout<<"wrong input";
	}
}

int main(){
	cout<<"simple calculator"<<endl;
	

	
	return 0;
	
	

}

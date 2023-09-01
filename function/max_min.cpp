//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

#include<iostream>
using namespace std;

int maximunMinimum(int a,int b,int c){
	cout<<"Enter the number of a : ";
	cin>>a;
	cout<<"Enter the number of b : ";
	cin>>b;
	cout<<"Enter the number of c : ";
	cin>>c;
	
	if(a>b){
		cout<<"The value of a is maximun "<<endl  ;
	}
	else{
			cout<<"The value of a is minimun "<<endl  ;
	}
	
	
	if(b>a){
		cout<<"The value of b is maximun "<<endl ;
	}
	else{
			cout<<"The value of b is minimun "<<endl  ;
	}
	
	
	if(c>a){
		cout<<"The value of c is maximun "<<endl  ;
	}
	else{
			cout<<"The value of c is minimun "<<endl  ;
	}
}

int main(){
	int a,b,c;
	 maximunMinimum(a,b,c);
}

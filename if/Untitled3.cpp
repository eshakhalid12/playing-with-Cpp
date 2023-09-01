#include<iostream>
using namespace std;
int main(){
	
	string a; 
	
	cout<<"Color of Banana is : ";
	cin>>a;
	
	cout<<"A : Yellow ";
	cout<<"B : Blue ";
	cout<<"C : Green ";
	cout<<"D : Black ";
	
	if(a == "yellow"){
		cout<<"Valid color "<<endl;
	}
	else if(a != "yellow"){
		cout<<"Invalid color";
	}
	return 0;
}

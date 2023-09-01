

#include<iostream>
#include<string>
using namespace std;

void myFunction(string fname,string lname){
	cout<<"Enter your first name : ";
	cin>>fname;
	cout<<"Enter your last name : ";
	cin>>lname;
	cout<<"Your full name is : "<<fname<<lname<<endl;
		
}

void myData(int age,int number){
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Enter your Phone no : ";
	cin>>number;
}

void Qualification(string education,string gender){
	cout<<"Enter your Education : ";
	cin>>education;
	cout<<"Enter your gender : ";
	cin>>gender;
}

int main(){
	string fname,lname,gender,education;
	int age,number;
	myFunction(fname,lname);
	myData(age,number);
	Qualification(education,gender);
	return 0;
}


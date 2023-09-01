//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include<iostream>
using namespace std;

float areaOfCircle(float r){
	cout<<"Enter the radius of a circle : ";
	cin>>r;
	
	float area;
	area = 3.14*(r*r);
	cout<<"Area of a circle : "<< area<< endl;	
}

float circumferenceOfCircle(float radius){
	cout<<"Enter the radius of a circle : ";
	cin>>radius;
	
	float circumference;
	circumference = 2*3.14*radius;
	cout<<"Circumference of a circle is : "<< circumference<< endl;
}

int main(){
	float r,radius;
//	function calling
	areaOfCircle(r);
	circumferenceOfCircle(radius);	
}

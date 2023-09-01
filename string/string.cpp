#include<iostream>
#include<string>

using namespace std;
int main(){
//	string concatenation
	string firstname = "Esha";
	string lastname = "Khalid";
	string fullname = firstname+" "+lastname;
	cout<<"Full name is : "<<fullname;
	
//-----------------------------------------------	
//	append
    string firstname = "Muniba";
	string lastname = "Taufiq";
	string fullname = firstname.append(lastname);
	cout<<"Full name is : "<<fullname; 
//
//------------------------------------------------
//	adding number and string
  string x="10";
  string y="20";
  string z=x+y;
  cout<<"The addition of x and y is : "<<z;
//  
//  -----------------------------------------------

// string length
string txt="ABCD";
cout<<"The length of a text is : "<<txt.length();
//
//------------------------------------------------

// string size
string txt="ABCDEF";
cout<<"The size of a string is : "<<txt.size();
//
//------------------------------------------------

// Access string
string mystring = "Hello";
cout<<mystring[0]<<endl;
cout<<mystring[1]<<endl;
cout<<mystring[2]<<endl;
cout<<mystring[3]<<endl;
cout<<mystring[4]<<endl;
//	
//----------------------------------------------

// change string character
string mystring = "Hello";
mystring[0] ='J';
cout<<mystring;
//
//-----------------------------------------	
	
	
	
	
	
	
	
	}

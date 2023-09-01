// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include<iostream>
using namespace std;
int main(){
	
	int number;
	int sum=0;
	
	cout<<"Enter a number : ";
	cin>>number;
	
	while(number>=0){
		sum += number;
		
		cout<<"Enter a number again : ";
		cin>>number;
	}
	  cout<<"The sum is : "<<sum<<endl;
	  
	  return 0;
	
}

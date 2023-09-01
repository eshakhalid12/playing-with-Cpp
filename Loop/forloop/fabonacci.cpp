#include<iostream>
using namespace std;
int main(){
	int num;
	int first=0,second=1,next;
	
	cout<<"Enter the no of terms in the fibonacci series : ";
	cin>>num;
	
	cout<<"Fabonacci series : "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<first<<endl; 
		next=first + second;
		first = second;
		second = next;              	
	}
	return 0;
}

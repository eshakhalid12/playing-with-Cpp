//  print a pyramid pattern by using alphabtes

#include<iostream>
using namespace std;
int main(){
	int row;
	char ch='A';
	cout<<"Enter no of rows : ";
	cin>>row;
	
	for(int i=1; i<=row; i++){       
		for(int j=1; j<=i; j++){
			cout<<ch<<" ";
		}
		cout<<"\n";
		ch++;
	}
	return 0;
}

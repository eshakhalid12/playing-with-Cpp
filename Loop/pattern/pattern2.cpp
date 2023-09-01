//  print a pyramid pattern by using numbers

#include<iostream>
using namespace std;
int main(){
	int row;
	cout<<"Enter no of rows : ";
	cin>>row;
	
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

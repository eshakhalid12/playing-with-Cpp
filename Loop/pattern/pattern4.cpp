#include<iostream>
using namespace std;
int main(){
	int row;
	int i,j;
	cout<<"Enter row";
	cin>>row;
	
	for(i=1;i<=row;i++)
	{
		for(int k=row-i;k>0;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int row;
	int i,j,k;
	cout<<"Enter rows : ";
	cin>>row;
	
	for(i=row;i>=1;i--)
	{
		for(k=row-i;k>0;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
			cout<<endl;
	}
     return 0;
}

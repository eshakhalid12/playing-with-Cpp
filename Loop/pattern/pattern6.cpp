#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int row;
	cout<<"Enter row : ";
	cin>>row;
	
	for(i=1;i<=row;i++)
	{
		for(k=row;k>=i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=2*1-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

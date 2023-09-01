#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int row;
	cout<<"Enter row : ";
	cin>>row;
	
//	 for no.of rows
	for(i=row;i>=1;i--)
	{
//		for no.of spacing
		for(j=0;j<row-i;j++)
		{
			cout<<" ";
		}
//		for print *
        for(k=1;k<=2*i-1;k++)
        {
        	cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

// To find how many element an array has  by using loop
#include <iostream>
using namespace std;

int main() {
 int myNum[4] = {20,10,20,39};
 for(int i = 0; i < sizeof(myNum)/sizeof(int); i++){
 cout<<myNum[i]<<endl;
 }
  return 0;
}



// To find how many element an array has wihtout loop

//#include<iostream>
//using namespace std;
//int main(){
//	int myNum[2] = {1,2};
//	int getarrayLength = sizeof(myNum)/sizeof(int);
//	cout<<getarrayLength;
//	return 0;
//	
//}

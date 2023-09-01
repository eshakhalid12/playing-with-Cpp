
// output wihtout indexes

//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string cars[5] = {"BMW","Civic","Parado","Ferrari","Supra"};
//	for(int i=0;i<5;i++){
//		cout<<cars[i] <<endl ;
//	}
//	return 0;
//}
 
 
 
// output with indexes
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string cars[5] = {"BMW","Civic","Parado","Ferrari","Supra"};
//	for(int i=0;i<5;i++){
//		cout<< i <<" = " << cars[i] <<endl ;
//	}
//	return 0;
//}

// OMIT ARRAY SIZE AND ELEMENT

#include<iostream>
#include<string>
using namespace std;
int main(){
	string cars[3];
	cars[0] = "BMW";
	cars[1] = "Civic";
	cars[2] = "Supra";
	
	for(int i=0;i<3;i++){
		cout<<cars[i]<<"\n";
	}
	return 0;	
	
}




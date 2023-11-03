#include <iostream>
using namespace std;

int main(){
	
	 int arr[10] = {12 , 23};
      int b = 10;
      cout << "print array " << endl;
      for(int i =0 ; i < b ;i++){
      	cout << arr[i]<<" ";
      	};
      	
      	cout << endl << endl;

// initialization all location with 0

 int a[10] = {0};
 cout << "print array initialization with 0"<<endl;
 
 for(int i = 0;i < 10;i++)
 {
 	cout << a[i] << " ";
 }
 
 
 cout << endl << endl;
 
 
 
 // initialization all location with 1 not possible

 int aa[10] = {1};
  cout << "print array initialization with 1"<<endl;
 
 for(int i = 0;i < 10;i++)
 {
 	cout << aa[i] << " ";
 }
 
 
 return 0;
 }

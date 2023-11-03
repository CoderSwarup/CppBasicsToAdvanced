#include <iostream>
using namespace std;

int main(){
	
 
	int arr[10] = {10,21};
	
	
	cout << "adderss of first index : " <<arr<<endl;

 
 	//address of operator --> & 
	cout << "adderss of 0th index : " <<&arr[0]<<endl;//addres similar like name of array if 0
	cout << "adderss of 1st index : " <<&arr[1]<<endl;
	
	//how to find inside element 
	cout <<"0th index element arr[0] : "<<arr[0]<<endl;
	
	int *p = &arr[0];
	
	cout << p<<endl;
	cout <<&p<<endl;
	return 0;
	}

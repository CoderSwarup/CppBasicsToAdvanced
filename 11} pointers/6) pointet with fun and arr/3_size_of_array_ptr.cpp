#include <iostream>
using namespace std;


int main(){
	
	int arr[10];
	
	cout <<sizeof(arr)<<endl;
	
	int *ptr = &arr[0];
	
	cout << sizeof(*ptr)<<endl;//addres is 8 in vs code 
	
	//address of pointer ptr
	cout <<sizeof(ptr)<<endl;
	return 0;
	}

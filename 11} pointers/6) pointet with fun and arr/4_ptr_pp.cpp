#include <iostream>
using namespace std;


int main(){
	
	
	int arr[10];
	
	//error
	//arr++;
	cout <<arr<<endl;
	
	//not error but this is value
	 arr[1]++;
	cout <<arr[1]<<endl;
	
	
	//not get error 
	int *ptr = &arr[0];
	cout << ptr <<endl;
	
	ptr++;
	cout <<ptr <<endl;
	
	return 0;
	}
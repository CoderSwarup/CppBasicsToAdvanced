#include <iostream>
using namespace std;


void printArr(int arr[] , int size){
	
	cout << "printing the array" << endl;
	
	for(int i = 0 ; i< size ; i++)
	{
		cout << arr[i] << " " ;
		
		}
		cout << endl;
		cout << "printing the array DONE" << endl;
		
		}

int main(){
	
	
	int n[10] = {1};
	
	printArr(n , 10);
	
	
	return 0;
	}
	

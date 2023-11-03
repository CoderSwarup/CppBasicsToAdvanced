#include <iostream>
using namespace std;

int sum(int arr[],int n){
	
	int sum = 0;
	for(int i = 0;i < n;i++){
	 sum = sum + arr[i];
	}
	cout << "total sum is : "<< sum <<endl;
	
	return sum;
	}

int main(){
	
	int arr[6] = {20,22,21,3,4,5};
	
	cout << "sum of (arr, 6) : "; 
	sum(arr, 6);
	cout << "sum of (arr+3, 3) : "; 
	sum(arr+3, 3);
	
	return 0;
	}

#include <iostream>
using namespace std;

int sum(int arr[] , int n){
	
	int sum=0;
	for(int i= 0;i<n;i++)
	{
		sum += arr[i];
	}
	
	cout << "total sum is : " <<sum<<endl;
	
	return sum;
	}
	

int main(){
	
/*	int n;         not use this methode this is        cin >> n;            danger
	int array[n]; */       
	
	//there are two types of memory 
	//1 stack memory --> only required memory for runtime compilation
//	2 heap memory --> extra memory
	
	// stack means ==>  static memory allocation
	// heap means ==> dynamic memory allocation
	 
	//how to use heap memory using "new" variable
	
	
	int n;
	cin >> n;
	
	int *arr = new int[n];
	//total memory if n = 5 
	// int *ch = 8 + arr[n] = 5*4 = 28 size memory
	// but only use arr[n] = 20 size memory
	
	for(int i=0;i < n;i++)
	{
		cin >> arr[i];
	}
	
     
	sum(arr ,n);

	
	delete[] arr;//stack memory is release itself but heap memory release manually othwrwise leak the memory this purpose we use "delete" keyword 

	cout <<sizeof(*arr)<<endl;
	
	return 0;
	}

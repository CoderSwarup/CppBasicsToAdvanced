//reverse array


#include <iostream>
using namespace std;

 void reverse(int arr[] , int n);//first

 void printArr(int arr[] , int n);// 2nd

int main(){
	
	int size;
	cout << " enter the size of array" <<endl;
	cin >> size;
	
	
	
	
	int arr[10000];
	cout<<" enter " <<size<<" size of array" <<endl;
	for(int i =0;i < size;i++)
	{
	cout <<" enter the "<<i+1<<" array : ";
		cin >> arr[i];
	}

	
	reverse(arr, size);
	printArr(arr, size);

	return 0;
	}
	

		
		
	//first
 void reverse(int arr[] ,int n) {
		for(int i=0;i < n/2;i++)
		{
			int first = arr[i];
			int second =arr[n-i-1];
			arr[i] = second;
			arr[n-i-1] = first;
			
			
		}
		}

		
			//2nd 
	
	void printArr(int arr[] ,int n){
			cout <<" reverse number is : " <<endl;
		for(int i = 0; i < n; i++)
		{
		
			cout << arr[i] <<endl;
		}
		}
		
		

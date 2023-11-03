#include <iostream>
using namespace std;

bool ispreasent(int arr[][3], int target, int row1 , int col1)
{
	for(int row = 0;row < 2;row++)
	{
	for(int col = 0;col < 4;col++)
	{
		if((arr[row][col]) == target){
			return 1;
			}
	}
	
	
	}

	return 0;
	}
	

int main(){
	
/*	int row1;
	cout <<"enter row" <<endl;
	cin >>row1;
	
	int col1;
	cout <<"enter column"<<endl;
	cin  >>col1;
	*/
	
	
	int arr[2][3];
	
	cout << "enter 6 array"<<endl;
	for(int row = 0;row < 2;row++)
	{
	for(int col = 0;col < 3;col++)
	{
	   cin >> arr[row][col];
	   }
	   }
	   
	   
	  
	 cout <<"enter target element"<<endl;
	   int target;
	   cin >>target;  
	   
	   if(ispreasent(arr, target , 2,3 )){
	   	cout <<"your target element found"<<endl;
	   	}
	   	else
	   	{
	   	cout<<"your targwt element not found"<<endl;
	   	}
	
	
	return 0;
	}
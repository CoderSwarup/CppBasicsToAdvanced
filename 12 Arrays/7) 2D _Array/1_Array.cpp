
//Syntax:-  
//        data-tyape variable-name[row] [column];
//      ex.  int arr[2] [2];


//input 2D array 
//        cin >> arr[i] [j];


//output 2D array
//        cout << arr[i] [j];




#include <iostream>
using namespace std;


int main(){
	
	int arry2D[3][3];
	
	cout << "enter 2d array"<<endl;
	
	for(int i = 0;i <3;i++)
	{
	for(int j = 0;j <3;j++)
	{
		cin >> arry2D[i][j];
	}
	}
	
	cout << "printing 2d array"<<endl;
	for(int i = 0;i <3;i++)
	{
	for(int j = 0;j <3;j++)
	{
		 cout << arry2D[i][j]<<" ";
		 
	}
	cout <<endl;
	}
	
	
	return 0;
	}

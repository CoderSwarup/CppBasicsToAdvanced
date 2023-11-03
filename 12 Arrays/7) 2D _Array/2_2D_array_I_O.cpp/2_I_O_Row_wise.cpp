#include <iostream>
using namespace std;


int main(){
	int array[2][3];
	
	//input

	
	for(int row=0;row<2;row++)
	{
	for(int col=0;col<3;col++)
	{
		cin >> array[row][col];
	}
	  
	}
	
	cout << "printing by row"<<endl;
	
	for(int row=0;row<2;row++)
	{
	for(int col=0;col<3;col++)
	{
		cout << array[row][col]<<" ";
	}
	   cout<<endl;
	}
	
	
	return 0;
	}

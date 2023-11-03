#include <iostream>
using namespace std;


int main(){
	int array[2][3];
	
	//input

	for(int col=0;col<3;col++)
	{
	for(int row=0;row<2;row++)
	{
		cin >> array[row][col];
	}
	  
	}
	
	cout << "printing by column"<<endl;
	for(int col=0;col<3;col++)
	{
	for(int row=0;row<2;row++)
	{
		cout << array[row][col]<<" ";
	}
	   cout<<endl;
	}
	
	
	return 0;
	}

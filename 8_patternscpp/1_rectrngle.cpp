#include <iostream>
using namespace std;

int main(){
	
	int column;
	int rows;
	
	cout << "enter column and row";
	cin >>column>>rows;
	
	for(int i = 1;i <= column;i++)
	{
		for(int j =1;j <= rows;j++)
		{
				cout<<" * ";
		}
		cout << endl;
	}
	
	return 0;
	}

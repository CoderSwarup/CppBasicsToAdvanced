
//decided by you which row which intigers


#include <iostream>
using namespace std;


int main(){
	
	//simple method
//	int arr[2][3] ={1 , 11, 111, 2, 22, 222};
	

	//decided by you which row and col which element print 
	int arr[2][3]= {{1,11,111},{2,22,222}};
	
	cout << "printing by row"<<endl;
	
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout << arr[i][j]<<" ";
	}
	   cout<<endl;
	}
	
	
	
	cout << "printing by column"<<endl;
	
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<2;j++)
	{
		cout << arr[j][i]<<" ";
	}
	   cout<<endl;
	}
	
	return 0;
	
	}

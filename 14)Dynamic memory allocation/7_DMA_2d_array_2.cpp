#include <iostream>
using namespace std;


int main(){
	
	
	int row;
	cin >> row ;
	
	int col;
	cin >> col;
	
	//creating 2d arraybin heap memory
	int** arr = new int*[row];
	
	for(int i= 0;i<row;i++){
	 arr[i] = new int[col];
}
	//cout <<"enter "<<row<<" rows and "<<col<<" col"<<endl; 
	int n = row * col;
	
	cout <<"enter "<<n<<" integers"<<endl;
	for(int i =0;i<row;i++)
	{
		for(int j=0;j<col;j++){
			cin >> arr[i][j];
			}
	}
	
	
		for(int i =0;i<row;i++)
	{
		for(int j=0;j<col;j++){
			cout << arr[i][j]<< " " ;
			}cout<<endl;
	}
	
	cout <<endl;
	cout <<"row is : " ;
	cout <<row<<endl;
	
	cout <<"col is : " ;
	cout <<col<<endl;
	
	
	//delete heap memory
	for(int i=0;i<row;i++){
		delete [] arr[i];
		}
		
		delete []arr;
	return 0;
	}

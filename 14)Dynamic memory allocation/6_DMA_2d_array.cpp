#include <iostream>
using namespace std;


int main(){
	
	
	int n;
	cin >> n ;
	
	//creating 2d arraybin heap memory
	int** arr = new int*[n];
	
	for(int i= 0;i<n;i++){
	 arr[i] = new int[n];
}
	
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
			}
	}
	
	
		for(int i =0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout << arr[i][j]<< " " ;
			}cout<<endl;
	}
	
	cout <<endl;
	cout <<"n is : " ;
	cout <<endl<<n<<endl;
	
	
	//delete heap memory
	for(int i=0;i<n;i++){
		delete [] arr[i];
		}
		
		delete []arr;
	return 0;
	}

//print sum row wise and column wise 

#include <iostream>
using namespace std;

//sum of row function
void printrowsum(int array[][3], int row ,int col){
	
	cout << "print row sum"<<endl;
	
		for(int i=0;i<2;i++){
        	int sum = 0;
		for(int j=0;j<3;j++){
			sum = sum + array[i][j];
		}
		cout <<"sum of "<<i+1<<" row is : "<<sum<<endl;
	}
	
	cout << endl;
	cout<<endl;
	}
	
	
//sum of column	function
void printcolsum(int array[][3], int row , int col){
	
	cout << "printing column sum"<<endl;
	
	for(int col=0;col<3;col++){
		int sum=0;
		for(int row=0;row<2;row++){
			
			sum = sum +array[row][col];
			
			}
		cout <<"sum of "<<col+1<<" column is: "<<sum<<" "<<endl;
			}
			cout<<endl;
	}	
	

int main(){
	
	int arr[2][3];
	cout << "enter 6 array in 2 row X 3 column : "<<endl;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
		}
		
		//calling row function 
		printrowsum(arr,2,3);
		
		//calling column function 
		printcolsum(arr,2,3);
		
return 0;
		}		
		

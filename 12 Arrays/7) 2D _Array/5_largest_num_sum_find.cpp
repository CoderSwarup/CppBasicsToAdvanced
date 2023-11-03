//find the largest sum in row and its index

#include <iostream>
using namespace std;


int findlargesum(int array[][3], int row ,int col){
	
	 int max =INT_MIN;
	int rowindex = -1;
	 
	
		for(int i=0;i<2;i++){
        	int sum = 0;
		for(int j=0;j<3;j++){
			sum = sum + array[i][j];
		}
		if(sum > max)
		{
			max = sum;
			rowindex = i;
			
		}
		}
		cout <<"the max sum is : "<< max<<endl;
		
	return rowindex;
	}
	
	
int main(){
	
	int arr[2][3];
	cout << "enter 6 array in 2 row X 3 colun : "<<endl;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
		}
		
		int num = findlargesum(arr, 2, 3);
		cout <<"max sum row index is : "<<num<<endl;
		
		return 0;
		}
	
	
	

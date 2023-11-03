/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
  
using namespace std;
  
class Test {
public:
  Test() {
    printf("Inside Test's Constructor\n");
  }
  
  ~Test(){
    printf("Inside Test's Destructor");
  }
};
  
int main() {
  static Test t1;
  
   // using return 0 to exit from main
  exit(0);
}*/



#include <iostream>
using namespace std;

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
	
/*	int arr[2][3];
	
	for(int col=0;col <3 ;col++)
	{
	for(int row=0;row <2 ;row++)
	{
		cin >> arr[row][col];
	}
	}
	
	printcolsum(arr,2,3);*/
	
	int arr[2][3];
	cout<<"Enter 6 array : "<<endl;
	
	for(int row=0;row<2;row++){
		for(int col=0;col<3;col++){
			cin >> arr[row][col];
		}
		}
		
		
		printcolsum(arr,2,3);
	
	
	
	return 0;
	}

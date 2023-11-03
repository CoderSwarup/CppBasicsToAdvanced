#include <iostream>
#include <functional>
using namespace std;


int main(){
	
	int arr[]= {22,4,6,2,888,99};
	    			//sort desending order
	sort(arr,arr+4,  greater<int>());
 for(int i=0;i<6;i++){
 	cout<<arr[i]<<endl;
 	}
 	
 	
 	
 	return 0;
 	}

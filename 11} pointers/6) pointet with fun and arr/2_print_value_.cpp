#include <iostream>
using namespace std;

int main(){
	
 
	int arr[10] = {10,21,30};
	
	// * ==> value at operator
	cout << "value of arr : " << *arr <<endl;
	
	cout <<"value *arr + 1 : " << *arr + 1 << endl;
	
	cout<<"value *(arr+1) : " <<*(arr+1)<<endl;
	
	cout<<"value of 2nd index : "<<arr[2]<<endl;
	
	
	//formula ==>  arr[i] = *(arr + i);
	//             i[arr] = *(i + arr);
	
	
	int i = 1;
	cout <<	"arr[i] = *(arr + i) : "<<i[arr]<<endl;
	return 0;
	}
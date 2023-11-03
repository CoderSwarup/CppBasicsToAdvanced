#include<iostream>
using namespace std;

int main(){
    
    
    //initialization of new keyword in variable 
    float *p = new float(40.78);
    
    //delete p;//--> delete the value of variable 
    cout << "The value at address p is " << *(p) << endl;
    
    
    
    
    
   //initialization of new keyword in array
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1)=40;//-> similar  // arr[1] = 20;
    *(arr+2)=50;//-->    arr[2] = 30;..... so on
   //delete array 
  // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    
    return 0;
}

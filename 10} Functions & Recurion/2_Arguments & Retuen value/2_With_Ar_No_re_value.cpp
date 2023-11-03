// function with argument but no returns value

// syntax
//         function decalaration : void function(int x);
//                 function call :  function(x);
//           function defination :  void function(int x)
//                                  {
//                                    statement;                      
//                                  }



#include <iostream>
using namespace std;

void function(int a , int arr[] , char str[]);

    int main(){

        int n = 20;
        int arr[3] = {10 , 20 , 30};
        char str[20] = "SammyHere";

        function(n , &arr[0] , &str [0]);

    
    return 0;
}

void function(int a , int* arr , char* str){

    cout << "value of n is = "<<a<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "value of arr ["<<i<<"] is "<<arr[i]<<endl;
    }
    
    cout << "value of str is "<< str <<endl ;

    
}
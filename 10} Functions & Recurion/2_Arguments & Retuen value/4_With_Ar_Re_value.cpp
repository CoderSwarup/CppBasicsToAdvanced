// function with argument and return value

// syntax
//         function decalaration : intfunction(int n);
//                 function call :  function( n);
//           function defination :  int function(int n)
//                                  {
//                                    statement;                      
//                                  }

#include <iostream>
using namespace std;

int sum(int a , int b);

    int main(){

        int num1 = 12;
        int num2 = 100;

        sum(num1 , num2);
        
    
    return 0;
}

int sum(int a , int b){
     int s = a +b;
     cout << "Sum is = "<<s<<endl;
     return s;
}
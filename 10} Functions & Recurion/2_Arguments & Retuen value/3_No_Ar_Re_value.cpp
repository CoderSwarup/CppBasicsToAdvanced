// function with no argument but returns value

// syntax
//         function decalaration : intfunction();
//                 function call :  function();
//           function defination :  int function()
//                                  {
//                                    statement;                      
//                                  }


#include <iostream>
#include <cmath>
using namespace std;

float sumsqrt();

    int main(){

        float num = sumsqrt();
        cout << "sqrt of two num is " << num << endl;
    
    return 0;
}

float sumsqrt(){
    float a =50 , b = 80, sum;
    sum = sqrt(a) + sqrt(b);

    return sum;
}
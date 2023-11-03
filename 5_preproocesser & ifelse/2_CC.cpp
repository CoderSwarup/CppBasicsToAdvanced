//conditional compilation

//    types ==> 1.#if
//              2.#ifdef
//              3.#ifndef
//              4.#else
//              5.#else if 
//              6.#endif
             
            
#include <iostream>
using namespace std;

#define A 111
#define B 20

    int main(){

        #ifdef A
        cout<< "hello"<< endl;
        #endif
        #ifndef C
        cout<< "hi"<< endl;
        #endif



        int value;

        #if (A < B)
          value = A + B;
          cout << " sum is "<< value << endl;
          #else 
          cout << "not" << endl;
          #endif



     
    return 0;
}

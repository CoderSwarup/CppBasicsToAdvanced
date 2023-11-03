//************float , double , long double literals**********



#include <iostream>
using namespace std;

    int main(){
        // any floating value is double in c++ compilear
        // how to convert in float use float d = 22.2f/F
        // long double use 22.2l/L

        float f = 32.8;
        cout << "The size of 32.8 is : "<< sizeof(32.8 )<<endl;//8
        cout << "The size of 32.8f is : "<< sizeof(32.8f )<<endl;//4
        cout << "The size of 32.8F is : "<< sizeof(32.8F )<<endl;//4
        cout << "The size of 32.8l is : "<< sizeof(32.8l )<<endl;//12
        cout << "The size of 32.8L is : "<< sizeof(32.8L )<<endl;//12
    
    return 0;
}

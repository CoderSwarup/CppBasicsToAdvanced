#include <iostream>
using namespace std;

    int main(){
    //.here is value change 
     int a= 30;
     cout << "a value "<< a<< endl;
     a = 20;
     cout << "a value "<< a<< endl;

     //here is not value change 
     const int b= 30;
     cout << "b value "<< b<< endl;
    // b = 20; ==> error genrete here
     cout << "b value "<< b<< endl;
    return 0;
}

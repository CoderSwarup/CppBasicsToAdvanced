//reference veriable is copy the same value in another variable

#include <iostream>
using namespace std;

    int main(){
    int c  = 100;
    int &z = c;

      z =232;// this value change as well as c

    cout << "vlue of c is "<<c << endl;
    cout << "vlue of z is "<<z << endl;
    return 0;
}

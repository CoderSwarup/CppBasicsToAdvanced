// typecasting is the chage the value 'int to float & float to int' 

#include <iostream>
using namespace std;

    int main(){
    int a  = 23;
    cout << "the value of a is after typecasting  : " << (float)a<<endl;

    float b  = 1332.33;
    cout << "the value of b is after typecasting  : " << (int)b<<endl;//float(b) use

    int c = int(b);
    cout << "c value is "<<c<<endl;


    cout << "the value of a + b is "<<a+b<<endl;
    cout << "the value of a + int(b) is "<<a+int(b)<<endl;
    return 0;
}

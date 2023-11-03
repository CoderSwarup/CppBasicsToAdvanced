#include <iostream>
#include <iomanip> // use the header file
using namespace std;

    int main(){
    int a=2 , b =10 , c= 1000;
    cout << "the value of a is "<< a << endl;
    cout << "the value of b is "<< b << endl;
    cout << "the value of c is "<< c << endl;

    cout <<endl;

    //setw(how many spaces gets)
    cout << "the value using setw of a is "<<setw(2)<< a << endl;
    cout << "the value using setw of b is "<<setw(4)<< b << endl;
    cout << "the value using setw of c is "<<setw(4)<< c << endl;

    

    return 0;
}

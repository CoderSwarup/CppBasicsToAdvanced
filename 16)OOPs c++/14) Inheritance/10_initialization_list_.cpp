#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
   // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
   // Test(int i, int j) : a(i), b(2*j)
   // Test(int i, int j) : a(i), b(a*j)
   
 //   Test(int i, int j) :  b(j), a(b+i)-> this is not ececute through error
 
//  Test(int i, int j) : b(i), a(j)
  Test(int i, int j) : a(i) ,b(j)
    {
    	//b=j;
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

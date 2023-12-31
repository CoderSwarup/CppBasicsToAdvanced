﻿#include <iostream>
using namespace std;
 
class A
{
public:
    A() { cout << "A's Constructor Called " << endl;  }
};
 
class B
{
    static A a;
public:
    B() { cout << "B's Constructor Called " << endl; }
};
 
int main()
{
    B b;
    
    return 0;
}

/*
The above program calls only B’s constructor, it doesn’t call A’s constructor. The reason for this is simple, static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator. 
If we try to access static member ‘a’ without an explicit definition of it, we will get a compilation error. For example, the following program fails in the compilation.
*/

﻿/* 
polymorphisum means :-
  -one name multiple forms

       -------- polymorphisum --------
       |                             |
   compiletime                    Runtime
       |                             |
  ---------------                    |
  |             |                 virtual
 function     operator            function
overloading   overloading

*/

#include <iostream>
using namespace std;
class base
{
public:
    void print ()
    { cout<< "print base class" <<endl; }
   
   virtual void show ()
    { cout<< "show base class" <<endl; }
};
  
   
class derived:public base
{
public:
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    { cout<< "print derived class" <<endl; }
   
    void show ()
    { cout<< "show derived class" <<endl; }
};
  
//main function
int main() 
{
    base *bptr;
    derived d;
    bptr = &d;
       
    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print(); 
       
    // Non-virtual function, binded at compile time
    bptr->show(); 
  
    return 0;
}

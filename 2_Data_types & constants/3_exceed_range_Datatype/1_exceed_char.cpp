 // what happen when we exceed valid range of built int data types

 //exmple 
      // program show what will happens whan we cross the range of 'char' 

#include <iostream>
using namespace std;

    int main(){
    
      for (char i = 0; i <= 225; i++)
      {
         cout << i;
      }
      
    return 0;
}

// this code run infini9te time because 'The valid range of char is -128 to 127
  // when i become 128 through i++ the range exceed

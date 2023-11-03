 // what happen when we exceed valid range of built int data types

 //exmple 
      // program show what will happens whan we cross the range of 'bool' 

    #include <iostream>
    using namespace std;
    
        int main(){
        
         bool a = true;

         for (a = 1; a <= 6 ;a++)
         {
            cout << a;
         }
         
        return 0;
    }

    // bool valid range is -32768 to +32767

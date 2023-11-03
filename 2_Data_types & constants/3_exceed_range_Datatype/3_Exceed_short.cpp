 // what happen when we exceed valid range of built int data types

 //exmple 
      // program show what will happens whan we cross the range of 'short' 


    #include <iostream>
    using namespace std;
    
        int main(){

        short i;

        for ( i = 32767 ; i < 32770; i++)
        {
            cout << i << "\n";
        }
        

        return 0;
    }

    //short range is -32768 to 32767  this loop repeat this range infinite time

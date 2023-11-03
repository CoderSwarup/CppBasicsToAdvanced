 // what happen when we exceed valid range of built int data types

 //exmple 
      // program show what will happens whan we cross the range of 'unsinged short' 



    #include <iostream>
    using namespace std;
    
        int main(){
        
        unsigned short i ;

        for ( i = 65532; i < 65536; i++)
        {
           cout << i << "\n";
        }
        

        return 0;
    }


    //The umsigned short range is 0 to 65535 
      //this loop run infinite time
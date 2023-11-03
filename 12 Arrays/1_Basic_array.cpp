// array is a list of variables of similar data type


// syntax 
        //    datatype arrayname[size]


// decalaration of array



/*             _ _ _
              |_|_|_|
   row  ->    |_|_|_|   ^
              |_|_|_|   | column
*/


#include <iostream>
using namespace std;

    int main(){

        
//   1. method
    
         int array[5];

         // array index start with [0]

         array[0] = 30  ;
         array[1] = 301;
         array[2] = 302;
         array[3] = 303;
         array[4] = 304;


         cout << array[0] << endl;
         cout << array[1] << endl;
         cout << array[2] << endl;
         cout << array[3] << endl;
         cout << array[4] << endl;


         cout << endl;

         // 2. method

         int array1[5] = {2 , 4 , 6 , 8 , 10};

         cout << array1[0] << endl;
         cout << array1[1] << endl;
         cout << array1[2] << endl;
         cout << array1[3] << endl;
         cout << array1[4] << endl;
    
         
         
         
  // char array
         cout << "print char array"<<endl;
        char cc[6] = {'S' , 'A', 'M', 'M','Y'};
        
        for(int i  = 0 ; i < 5 ; i++){
        	cout << cc[i] << " " ;
        	} 
       
    return 0;
}

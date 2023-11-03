#include <iostream>
using namespace std;
  
  #define LIMIT 5

  //macros with argument
  #define SQUARE(a)  (a * a)

    int main(){

        for (int i = 0; i < LIMIT; i++)
        {
            cout << i << "\n";
        }



        //macros with argument
        int x;
        cout << "Enter the value for square: "<< endl;
        cin >> x;
        int square = SQUARE(x);

        cout << "sqare is: " << square << endl ;
        
    
    return 0;
}

// continue statement
#include <iostream>
using namespace std;

    int main(){
      for (int i = 1; i <= 10; i++)
      { 
           if(i == 5){
             continue;//skip 5 
          }
             if(i == 7 || i == 6){
             continue;//skip 7 and 6
          }
          cout << i <<endl;
          
         
      }
      
    return 0;
}

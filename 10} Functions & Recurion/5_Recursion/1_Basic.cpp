

#include <iostream>
using namespace std;

void printHW(int c){
     if (c < 1)
     {
         return;
     }

     cout << "HELLO ******* DEAR"<<endl;
     printHW(c - 1);
     
}

    int main(){

        printHW(10);
    
    return 0;
}



#include <iostream>
using namespace std;

int product(int a, int b){
    static int c=0; // this exicute only once
     c = c + 1;
     int z = a*b+c;

     return z;
}
    


    int main(){

        int x , y;
        cout<< "Enter the vakue of x and y"<<endl;
        cin>> x >> y;

        cout <<  "The product of x and y = " <<product(x,y)  << endl;
        cout <<  "The product of x and y = " <<product(x,y)  << endl;
        cout <<  "The product of x and y = " <<product(x,y)  << endl;
        cout <<  "The product of x and y = " <<product(x,y)  << endl;
        cout <<  "The product of x and y = " <<product(x,y)  << endl;
    


    return 0;
}

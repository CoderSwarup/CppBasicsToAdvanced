
#include <iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}

// function overloading
int sum(int a , int b , int d){
    int c = a + b + d;
    return c;
}

    int main(){

        cout<<"The sum of 3 + 5 = " <<sum(3 , 5)<<endl;
        cout<<"\nThe sum of 3 + 5 + 2 = " <<sum(3 , 5 , 2)<<endl;
    
    return 0;
}

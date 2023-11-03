//print prime numbers between two numbers

#include <iostream>
#include <cmath>
using namespace std;

//also we use bool for true and flase

int isprime(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if ((num%i) == 0 )
        {
           return 0;
        }
        
    }

    return 1;
    
}


int main(){
    
     int a , b;
     cin>>a>>b;

     for (int i = a; i <= b; i++)
     {
         if (isprime(i))
         {
            cout<< i << endl;
         }
         
     }
     

    return 0;
}



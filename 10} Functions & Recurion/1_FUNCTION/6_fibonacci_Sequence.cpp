// fibonacchi sequence
   // 0 1 1 2 3 5 8 13 21 .......


 #include <iostream>
 using namespace std;

 int fib(int n){
     if (n == 0 )
     {
         return 0;
     }
     if (n == 1)
     {
       return 1;
     }
    
    int fibN = fib(n -1)+ fib(n -2);
     
    return fibN;
 }
 
     int main(){
     
     int n;
     cin>>n;

     cout << "fib is = "<<fib(n)<<endl;

     return 0;
 }

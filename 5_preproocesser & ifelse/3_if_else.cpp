#include <iostream>
using namespace std;

    int main(){
    int a ,b , c;
     
     cout << "enter 3 number (a b c) : " << endl;

     cin >> a;
     cin >> b;
     cin >> c;

     if (a >b)
     {                          // c > a > b
       if (a>c)
       {
           cout << "a is greater :" << a << endl;
       }
       else{
           cout << "c is greater : "<< c << endl;
       }  
     }

      else{
          if (b > c)                  // c > b > a
          {
              cout << "b is greater : " << b << endl;
          }else{
              cout << "c is greater : " << c << endl;
          }
          
      }
     
    return 0;
}

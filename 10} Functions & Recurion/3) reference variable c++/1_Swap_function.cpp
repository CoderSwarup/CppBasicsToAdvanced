


#include <iostream>
using namespace std;

  // void swap(int a , int b){
  //     int temp = a;
  //     a = b;  
  //     b = temp;
  // }


  // call by reference 
  void swapointer( int* a , int* b){
        int temp = *a;
      *a = *b;  
      *b = temp;
     
  }


    int main(){

        int x ;
        cout << "enter X var value" << endl;
        cin >> x;
        int y ;
        cout << "enter y var value" << endl;
        cin >> y;

        cout<<"The value of X is "<<x<<endl << "The value of Y is "<< y <<endl;

         // passing address
         swapointer(&x , &y);

         cout<<"The value of X after swap is "<<x<<endl << "The value of Y after swap is "<< y <<endl;



    
    return 0;
}

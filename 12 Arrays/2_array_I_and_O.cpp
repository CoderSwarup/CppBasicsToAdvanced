// array input and output


#include <iostream>
using namespace std;

    int main(){
    
      int n;
      cout << "Enter size of array"<<endl;
      cin >> n;
    	
    	cout << "enter "<<n<< " array"<<endl;

      int array[n];//this is not use [n] 

      for (int i = 0; i < n; i++)
      {
          cin >> array[i];
      }


      cout << "\n" << "Your array size is : " << n << endl;
      cout <<  "Your enter array  is : " << endl;

         for (int i = 0; i < n; i++)
      {
          cout << array[i] << endl;
      }
      
      cout << endl << endl;
      
      
      
      
      
     
    return 0;
}

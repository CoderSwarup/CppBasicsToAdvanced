//getline 
//read
//write


#include <iostream>
using namespace std;

int main(){

//getline function is can input multiple word with spce 
  char array[20];
   cout << "enter your full name"<<endl;
    cin.getline(array, 20);
    
    cout <<endl<<endl;
  cout <<"(using cout) your full name is :" <<endl;
    cout << array<<endl;

  
  
  // write function
  cout <<"(using write) your full name is :" <<endl;
    cout.write(array ,5);
  
  
  
  
  
  cout <<"\n read function"<<endl;
  //read function
  //read function is use to defined exact length of size charater (not extra & not less)
  
  char arr[100];
  cin.read(arr,10);
  
  cout <<arr;


return 0;
    }

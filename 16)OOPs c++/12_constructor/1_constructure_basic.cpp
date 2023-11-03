#include <iostream>
using namespace std;

class sum{
	int a;
	int b;
	
	public:
	
	// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
	
	sum(void);//constructure decalaration
	
	void printnum(){
	cout<<"The number of "<<a <<" + "<<b <<" is = " <<a+b<<endl;
		}
		
		};

  sum :: sum(void){
  	a=10;
  	b=20;
  	}
  	

int main(){
	
  sum s;
   
  for(int i =0;i<10;i++){
 cout<<i+1<<")  ";
 s.printnum();
 }
	
	
	
	
	return 0;
	}

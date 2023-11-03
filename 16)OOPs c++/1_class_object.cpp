#include <iostream>

using namespace std;


class Employee // decalare class
{
	
	private:
	  int a , b, c;
	
	
	public:
	 int e , d;
	
      void setData(int a1, int b2, int c3);
	
	  void printdata(){
	  	
	  	cout << "the value of a is : "<<a<<endl;
	 	cout << "the value of b is : "<<b<<endl;
	  	cout << "the value of c is : "<<c<<endl;
	  	cout << "the value of d is : "<<d<<endl;
	  	cout << "the value of e is : "<<e<<endl;
	 	}
	};

	//define setdata function outside class (first  decalare inside the class)	
	
void Employee :: setData(int a1 , int b2 , int c3){
	a = a1;
	b = b2;
	c = c3;	
	}
	
	
int main(){
	
	
	Employee sammy;// decalare object
//	sammy.a = 44;// get error because its a private member
	
	
	//public class member
	sammy.d  =401;
	sammy.e = 501;
	
	//private class member
	sammy.setData(101 , 201 ,301);
	sammy.printdata();
	
	
	return 0;
	}
	
	
	
	

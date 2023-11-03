/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/


#include <iostream>
using namespace std;


class base1{
	int b1;
	public:
	base1(int n){
		b1 = n;
		cout<<"data 1 is called"<<endl;
		}
	void printb1(){
		cout<<"value of data 1 is : "<<b1<<endl;
		}
	};
	
	
class base2{
	int b2;
	public:
	base2(int n){
		b2 = n;
		cout<<"data 2 is called"<<endl;
		}
	void printb2(){
		cout<<"value of data 2 is : "<<b2<<endl;
		}
	};
//decalaration important is here 	
class derived: public base1 ,public base2{
	int d1,d2;
	public:
	//if here you execute the base 2 class before class base 1 no any change ...... but its value is change if you write 
	derived(int a ,int b ,int c ,int d):base2(a) ,base1(b){
	    d1 =c;
		d2= d;
		cout<<"derived class called"<<endl;
	}
	
	void printderived(){
		cout<<"value of derived 1 is : "<<d1<<endl;
		cout<<"value of derived 2 is : "<<d2<<endl;
	}
	
	};
	
	
int main(){
	derived sam(1,2,3,4);
	cout<<endl;
	sam.printb1();
	sam.printb2();
	sam.printderived();
	return 0;
	}
		

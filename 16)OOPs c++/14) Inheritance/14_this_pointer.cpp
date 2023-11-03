#include <iostream>
using namespace std;

class A{
	int a;
	public:
	void setdata(int a){
		//a = a; //get a garbage value 
		//use this pointer
		this->a = a;
		}
	
		void getdata(){
			cout<<"value of a is : "<<a<<endl;
			}
		};
		
//using reference variable	
class B{
	int b;
	public:
	B & setdata(int b){ 
		//use this pointer
		this->b = b;
		return *this;
		}
	
		void getdata(){
			cout<<"value of a is : "<<b<<endl;
			}
		};	

int main(){
	A a;
	a.setdata(5);
	a.getdata();
	
	
	cout<<endl;
	B b;
	//use after use reference variable =
	b.setdata(44).getdata();
	return 0;
	}

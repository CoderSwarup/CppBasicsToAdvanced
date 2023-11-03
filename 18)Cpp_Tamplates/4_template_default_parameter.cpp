#include <iostream>
using namespace std;

//default parameter of template
template <class t1=int,class t2=float,class t3=char>
class sam{
	public:
	t1 a;
	t2 b;
	t3 c;
	
	sam(t1 x,t2 y,t3 z){
		a=x;
		b=y;
		c=z;
		}
		
	void display(){
		cout<<"This is a : "<<a<<endl<<
		      "This is b : "<<b<<endl<<
		      "This is c : "<<c<<endl;
		}
		
		};
		
int main(){
	//use default parameter
	sam< > obj1(11,11.444,'x');
	obj1.display();
	
	cout<<endl;
	//creating my data types its override default parameter
	sam<int,int,int>obj2(22,33,44);
	obj2.display();
	
	return 0;
	}
		

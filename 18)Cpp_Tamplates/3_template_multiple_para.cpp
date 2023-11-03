#include <iostream>
using namespace std;

template <class t1 , class t2>

class my{
 private:
	t1 a;
	t2 b;
	public:
	my(t1 z , t2 zz){
		a = z;
		b = zz;
		}
		
	void display(){
		cout<<"this is a : "<<a<<endl<<"This is b : "<<b<<endl;
		}
		};
		
		
int main(){
	my <int,string> obj(233,"hell");
	obj.display();
	return 0;
	}

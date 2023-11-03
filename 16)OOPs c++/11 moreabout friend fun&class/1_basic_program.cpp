#include <iostream>
using namespace std;


//forward decalaration

class Y;

class X{
	int data;
	public:
	void setdata(int v){
		data = v;
		}
		void printdata(){
		cout<<"value of data1 is "<<data<<endl;
		}
		
	friend void add(X,Y);	
		
		};
		
class Y{
	int data2;
	
	public:
	void setdata2(int v2){
		data2 = v2;
		}
	void printdata2(){
		cout<<"value of data2 is "<<data2<<endl;
		}
		
		friend void add(X,Y);
		};
		
void add(X a1,Y b2){
	cout <<"total is : "<<a1.data +b2.data2<<endl;
	}
	
	int main(){
		X a;
		Y b;
		a.setdata(2);
		a.printdata();
		b.setdata2(10);
		b.printdata2();
		
		add(a,b);
		
		return 0;
		}	

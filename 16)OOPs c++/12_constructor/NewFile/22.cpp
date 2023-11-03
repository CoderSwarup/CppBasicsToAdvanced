#include <iostream>
using namespace std;


class complex{
	
	
	int a;
	int b;
	int c;
	
	public:
	
	void setdata(int n1 , int n2 ,int n3){
		a = n1;
		b = n2;
		c = n3;
		}
		
		
		
		//creating friend function
	
friend complex getcom(complex o1,complex o2);
		
		
		//print fun
		void printcom(){
			cout <<a<<" + " <<b<<" + "<<c<<"i"<<endl;
			}
		
		};
		
		
	//	friend fun declaration
		
			
complex getcom(complex o1, complex o2){
	complex c3;
 c3.setdata((o1.a * o2.a) , (o1.b *o2.b),(o1.c+o2.c));
	return c3;
	}
	
		
	
		



int main(){
	
	complex c1 ,c2, multisum;
	c1.setdata(2,3,4);
	c1.printcom();
	cout <<endl;
	
	c2.setdata(9,10,6);
	c2.printcom();
	cout <<endl;
	
	
   multisum = getcom(c1,c2);
   multisum.printcom();
	
	
	return 0;
	}

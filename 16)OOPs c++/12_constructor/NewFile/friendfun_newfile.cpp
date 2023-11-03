#include <iostream>
using namespace std;


class complex{
	
	
	int a;
	int b;
	
	public:
	
	friend void setdata(int n1 , int n2);
		
		
		
		//creating friend function
	
friend complex getcom(complex o1,complex o2);
		
		
		//print fun
		void printcom(){
			cout <<a<<" + " <<b<<"i"<<endl;
			}
		
		};
		
		
	//	friend fun declaration
		
			
	
		
void setdata(int n1 , int n2){
	int c , d;
		c = n1.a;
		d = n2.b;
		}
	
		



int main(){
	
	complex c1 ,c2, multisum;
	c1.setdata(2,3);
	c1.printcom();
	cout <<endl;
	
	c2.setdata(9,10);
	c2.printcom();
	cout <<endl;
	
	
   multisum = getcom(c1,c2);
   multisum.printcom();
	
	
	return 0;
	}

#include <iostream>
using namespace std;

class complex{
	int a;
	int b;

	
	public:
	 
	void setdat(int c1 , int c2){
		a= c1;
		b=c2;
		}
		
		//pass object as function
		void getdatabysum(complex o1 , complex o2){
			a = o1.a +o2.a;
			b = o1.b + o2.b;
			}
			
		void printcom(void){
			cout<<"Your complex nun is : " <<a<<" + "<<b<<"i"<<endl;
			}
			
			};	
			

int main(void){
	
	complex c1, c2, c3;
	
	c1.setdat(1 , 2);
	c1.printcom();
	
	cout <<endl;
	
	c2.setdat(10 , 5);
	c2.printcom();
	
	cout <<endl;
	c3.getdatabysum(c1, c2);
	c3.printcom();
	
	
	return 0;
	}

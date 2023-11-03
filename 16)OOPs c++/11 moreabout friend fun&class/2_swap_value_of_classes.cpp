#include <iostream>
using namespace std;


class c2;

class c1{
	int v1;
	
  friend void swap(c1 &x, c2 &y);
	
	public:
	void getdata(int n){
		v1 =n;
		}
		
		void printdata(){
			cout<<"numbe of c1 data is : " <<v1<<endl;
			}
				
			};
			
			
class c2{
	int v2;
	
  friend void swap(c1 &x, c2 &y);
	public:
	void getdata(int n){
		v2=n;
		}
		
		void printdata(){
			cout<<"numbe of c1 data is : " <<v2<<endl;
			}
				
			};			
			

void swap(c1 &x, c2 &y){
	int tem = x.v1;
	x.v1 = y.v2;
	y.v2 = tem;
	}		
			
			
int main(){
	
	c1 c1;
	c2 c2;
	
	
	c1.getdata(2);
	c1.printdata();
	
	
	c2.getdata(40);
	c2.printdata();
	
	
	swap(c1,c2);
	
	cout<<endl<<"after swapping valuw : "<<endl;
	c1.printdata();
	
	

	c2.printdata();
	
	
	
	
	return 0;
	}

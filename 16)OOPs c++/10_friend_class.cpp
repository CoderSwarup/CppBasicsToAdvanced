#include <iostream>
using namespace std;

//forward decalaration
class A;

class B{
	public:
	int AddA(A,A);
	
		int SumA(A,A);
		};
		
		
	class A{
		int a;
		int b;
		
		// Individually declaring functions as friends
    // friend int B ::SumA(A, A);
    

    // Aliter: Declaring the entire calculator class as friend
		
		
		//friend int B :: SumA(A , A);
		//friend int B :: AddA(A , A);
		
	//if you have decalare full  class as a friend
		//syntax
		friend class B;
		
		public:
		void setdata(int n,int m){
			a = n; 
			b = m;
			}		
		
	  void printdata(){
	  	cout <<a<<" "<<b<<endl;
	  	}
	  	
	  	};
	  	
	  	
int B :: SumA(A a1, A a2){
	
	return (a1.a + a2.a);
	}
	  	
int B :: AddA(A z1 , A z2){
	return (z1.a * z2.a);
	}	  	
	    	
int main(){
	A num1;
	A num2;
	num1.setdata(2,4);
	num2.setdata(3,7);
	
	num1.printdata();
	num2.printdata();
	
	B b;
	int res = b.SumA(num1,num2);
	cout<<endl<<res<<endl;
	cout <<endl<<endl;
	int ans =b.AddA(num1,num2);
	cout <<ans<<endl;
	
	
	
	
	return 0;
	}
	
	
	  		

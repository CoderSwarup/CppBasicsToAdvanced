//pointer to object and arror operator 

#include <iostream>
using namespace std;

class sum{
	int a;
	int b;
	public:
	void setdata(int x, int y){
		a=x;
		b=y;
		cout<<"value 1 is : "<<a<<endl;
	    cout<<"value 2 is : "<<b<<endl;
		cout<<"total sum is : "<<a+b<<endl;
		}
		};
		
		
int main(){
	
	//simple define
	sum s;
	s.setdata(3,4);
	cout<<endl;
	
	//define using pointer 
	// Syntax :- 
	
	 sum s2;
	//class_name *ptr_name = &declare_class_name
	 sum *ptr = &s2;
	//(*ptr_name).call_class_function
	 (*ptr).setdata(22,44);
	
	cout<<endl;
	
	//define using arrow oprator 
	//syntax
	 sum s3;
	//class_name *ptr_name = &declare_class_name
	 sum *ptr1 = &s3;
	//ptr_name->call_class_function
	 ptr1->setdata(224,445);
	
			cout<<endl;
	
	//using new and delet
	 sum *ptr2 = new sum;
	// (*ptr2).setdata(12,4);
	 ptr2->setdata(24,45);
	
	cout<<endl;
	
	//using array 
	sum *ptr3 = new sum[3];
	 ptr3->setdata(2444,45);
	
	return 0;
	}

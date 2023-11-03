#include <iostream>
using namespace std;

class student{
	protected:
	int roll_no;
	public:
	void setdata(int n){
		roll_no=n;
		}
	void print_roll(){
		cout<<"Your Roll No Is : "<<roll_no<<endl;
		}
	
};

//virtual base class
class test : public virtual student{
	protected:
	float math;
	float cpp;
	public:
	void setmarks(float n,float m){
		math = n;
		cpp = m;
		}
		
	void print_mark(){
		cout<<"Your Maths Mark Is : "<<math<<endl;
		cout<<"Your Cpp Mark Is : "<<cpp<<endl;
		}
		
	};
	

	//virtual base class
class sport: virtual public student{
	protected:
	char c;
	public:
	
	void setgrade(char n){
		c  = n;
		}
	
	void printgrade(){
		cout<<"You Got ' "<<c<<" ' Grade in sports "<<endl;
		}
		
};


class result:public test,public sport{
	public:
	float total;
	void score(){
		cout<<"****YOUR RESULT*******"<<endl;
		total  = math +cpp;
		 print_roll();
		 print_mark();
		cout<<"Your Total Mark is : "<<total<<endl;
		cout<<"You got "<<total/2<<"%"<<endl;
		 printgrade();
		cout<<endl<<endl;
		cout<<"Congragulations......"<<endl;
		}
};
		
			
int main(){
	result sam;
	sam.setdata(357);
	sam.setmarks(95,98.67);
	sam.setgrade('A');
	sam.score();
	
	return 0;
	}	

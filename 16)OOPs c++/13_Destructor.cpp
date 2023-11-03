//destructor never takes an argument or does not return vale 
#include <iostream>
using namespace std;

int count =5;
class num{
	int count =0;
	public:
	
	  num(){
	  	count++;
	  	cout<<"This is time when constructor is called for object number."<<count<<endl;
	  	}
	  	
	  	~num(){
	  		cout<<"this is the time when my destructor is called for  object number"<<count<<endl;
	          		count--;
	  		}
	  	
};

int main(){
	cout<<"We are inside our function"<<endl;
	cout<<"creating first object n1 \n"<<endl;
	num n1;
	/*{
		cout<<"Entering this block"<<endl;
		cout<<"creating two more object"<<endl;
		num n2,n3;
		cout<<"Exit this block"<<endl;
	}
	cout<<endl<<endl;*/
	num n4;
	
	
	return 0;
	
	
	}
	/*
	if you have enter count in globally
	output :
	    are inside our function
creating first object n1 

This is time when constructor is called for object number.1
Entering this block
creating two more object
	
This is time when constructor is called for object number.2
This is time when constructor is called for object number.3
Exit this block
this is the time when my destructor is called for  object number3
this is the time when my destructor is called for  object number2


this is the time when my destructor is called for  object number1*/

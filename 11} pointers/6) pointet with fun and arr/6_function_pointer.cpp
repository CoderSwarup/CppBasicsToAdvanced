#include <iostream>
using namespace std;


void funpoint(int *ptr){
	
	cout <<*ptr<<endl;
	
	}
	

int main(){
	
	
	int value = 40;
	
	int *p = &value;
	
	cout <<"pass by *p : " <<endl;
	funpoint(p);
	
	cout <<"pass by &value : " <<endl;
	funpoint(&value);
	
	
	return 0;
	}
	

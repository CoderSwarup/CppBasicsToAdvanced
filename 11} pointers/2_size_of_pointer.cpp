#include <iostream>
using namespace std;

int main(){
	
	int age = 10;
	int *ptr = &age;
	
	//size of int 
	
	cout << "size of integer of age " << sizeof(age)<< endl;
	
	//size of pointer
	cout << "size of pointer ptr " << sizeof(ptr)<< endl;
	
	int *p = 0;
	cout << " vlaue of *p is " << *p<<endl;
	
	
	int i=10;
	int *pp = &i;
	
	cout << " value of pp "<<pp<<endl;
	pp = pp + 1;
	cout << "value of pp after pp++" <<pp<<endl;
	
	
	return 0;
	}

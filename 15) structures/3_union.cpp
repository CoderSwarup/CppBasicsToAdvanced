#include <iostream>
using namespace std;

// union function is only one time one data type use if there overload memory leak
 
typedef union money
{
	//only 4 data bytes use 
	int rice;
	char c;
	float price;
}mon;

int main(){
	
	mon s1;
	s1.c = 'c';	
	mon s2;
	s2.c = 'z';
	//s1.rice = 34;
	//s1. price = 3.0;//use this overleak data and return value is not defined
	
	//cout << s1.rice <<endl;
	cout << s1.c <<endl;
	cout << s2.c <<endl;
	
	
	return 0;
	}

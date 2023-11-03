#include <iostream>
using namespace std;


int main(){
	
	int arr[10] = {1,2,3};
	
	char ch[6] = "sammy";
	
	//int is give address
	cout <<arr<<endl;
	
	//char not give address
	cout <<ch<<endl;
	
	cout <<"for only index character print : "<<*ch<<endl;
	
	//char using pointer 
	//not use this this is risky
	char *p = &ch[0];
	
	cout << p <<endl;//given output is character
	
	cout<<endl;
	
	
	
	
	char temp = 'z';
	
	char *d = &temp;
	cout <<d<<endl;
	return 0;
	}

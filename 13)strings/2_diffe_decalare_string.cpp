#include <iostream>
using namespace std;
#include <string>


int main(){
	
	// one word write multiple line in string
	
	string str1(100, 'a');
	
	cout <<str1<<"\n"<<endl;
	
	
	
	
	
	// /0 == null character , without null character write garbage vale define 
	char str[10]  = {'s', 'A' ,'m', '\0'};
	
	cout <<str <<endl;
	
	
	
	
	
	// print full sentence in string with spaces 
	
	
	//not write full sentence after gap stop it
	
	string str2 ;
	cin >> str2;
	cout <<str2<<endl;
	
	cout <<endl;
	
	//run full snetence 
	string str3;
    getline(cin, str3);
    cout <<str3;
    
	return 0;
	}

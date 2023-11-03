#include <iostream>
using namespace std;
#include <string>


int main(){
	
	string s1 ;
	cout << "enter string" <<endl;
	getline(cin , s1);
	
	
	char f[20];
	cout <<" enter add word/sentence : "<<endl;
	cin.getline(f, 20);
	
	int n;
	cout << "enter which index" <<endl;
	cin >>n;
	
	
	
	
	cout << s1.insert(n,f) <<endl;
	// n= index number 
	return 0;
	}

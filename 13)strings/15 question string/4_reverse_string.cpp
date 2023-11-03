#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
	
	string s1;
	cout <<"enter your name"<<endl;
	getline(cin, s1);
	
	
	reverse(s1.begin(), s1.end());
	cout << endl <<"Reverse string is : "<<endl;
	cout <<s1<<endl;
	
	return 0;
	}

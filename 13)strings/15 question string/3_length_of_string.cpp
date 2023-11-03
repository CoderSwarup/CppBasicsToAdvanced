#include <iostream>
using namespace std;
#include <string>

int main(){
	
	string s1;
	cout <<"enter your name"<<endl;
	getline(cin, s1);
	int s2 = 0;
	
   for(int i= 0;s1[i] != '\0';i++)
   {
   	  s2++;
   }	
		cout << "name length is : " << s2;
	return 0;
	}

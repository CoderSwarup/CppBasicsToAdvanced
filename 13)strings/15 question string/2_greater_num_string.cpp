//find the greater number from string 

#include <iostream>
using namespace std;
#include <string>

int main(){
	
	string s1;
	cout <<"enter number"<<endl;
	cin >> s1;
	//cout << s1 <<endl;
	
cout <<"greater num from given string :" <<endl;
   
   sort(s1.begin(), s1.end(), greater<int>());
   cout <<s1<<endl;
	
	
	
return 0;
	}
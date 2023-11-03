#include <iostream>
using namespace std;
#include <string>

int main(){
	
	string s1 = "3353";
	
	
	int x = stoi(s1);
	
	cout << x+10 <<endl;
	
   
   sort(s1.begin(), s1.end(), greater<int>());
   cout <<s1<<endl;
	
	
	
return 0;
	}

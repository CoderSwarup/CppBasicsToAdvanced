#include <iostream>
using namespace std;
#include <string>

int main(){
	int x = 100;
	
	//ans is 10010  not 110
	//because this append 
	cout << to_string(x) + "10"<<endl;
	
	
return 0;
	}

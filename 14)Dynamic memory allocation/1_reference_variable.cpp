#include <iostream>
using namespace std;


int main(){
	
	int i = 5;
	
	int &j = i;//==> refernce variable 
	i++;
	cout << j << endl;
	
	return 0;
	}

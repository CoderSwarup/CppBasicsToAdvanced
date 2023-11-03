#include <iostream>
using namespace std;
#include <string>

int main(){
	
	string s1 = "sammy bhai";
	//size
	cout <<"size : " ;
	cout << s1.size()<<endl;
	
	//length
	cout <<"length : ";
	cout << s1.length()<<endl;
	
	
	
	// sentance in iterate 
	for(int i = 0;i < s1.length();i++)
	{
		cout <<s1[i]<< endl;
	}
	
	return 0;
	}

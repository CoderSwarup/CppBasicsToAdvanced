#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	//write
	string str;
	cout<<" Enter your name : ";
	getline(cin,str);
	ofstream out("sample.txt");
	out<<str;
	out.close();//if not use this follow read file not work
	
	cout<<endl<<endl;
	//read
	string str2;
	cout<<"File content is : "<<endl;
	ifstream in("sample.txt");
	getline(in,str2);
	cout<<str2;
	in.close();
	
	return 0;
	}
	

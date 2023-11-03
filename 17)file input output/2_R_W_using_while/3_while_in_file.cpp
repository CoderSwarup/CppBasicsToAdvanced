#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	//using constructor
	ofstream out("sample3.txt");
	//using open member function
	//out.open("sample3.txt");
	string st;
	cout<<"Enter some file content : ";
	getline(cin,st);
	out<<st;
	out.close();
	
	cout<<endl<<"************************"<<endl;
	
	string str;
	ifstream print("sample3.txt");
	
	//all line of content show 
	//eof() ==) end of file
	while(print.eof() ==0){
		getline(print,str);
		cout<<str<<endl;
		}
		
		
		return 0;
		}

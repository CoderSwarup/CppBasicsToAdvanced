#include <iostream>
#include <fstream>
using namespace std;
#include <string>



int main(){
	
	
	  //write a file
	ofstream myfile("sample4.txt");
	myfile.is_open();
	myfile << "sam bro here bhai kya ";
	myfile.close();
   
   
	
	
	//read content from file 
	string str2;
	ifstream myfile2("sample4.txt");
	myfile2.is_open();
   //from read multiple line use multiple getline
	getline(myfile2,str2);
    cout<<str2;
  
	
	
	return 0;
	}

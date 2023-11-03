#include <iostream>
#include <fstream>
using namespace std;
#include <string>



int main(){
	//not single time you can read and write a file
	
/*
//write
 string str1 = "sam bhai here kese ho";
 ofstream write("sample3.txt");
 write<<str1;*/
 
 /*
 //read
 string str2;
 ifstream read("sample3.txt");
 getline(read,str2);
 cout<<str2;
 */
 
 
 
 //uaing open function
 string strr;
 ifstream myfile("sample3.txt");
 myfile.is_open();
 getline(myfile,strr);
 cout<<strr;
 
 
 return 0;
 }

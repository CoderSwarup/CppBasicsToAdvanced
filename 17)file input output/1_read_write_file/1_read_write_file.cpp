/*
the 3 useful file for working with files in c++
1) fstream --> base
2) ifstream --->derived from fstream
3) ofstream  ---> derived from fstream
*/

//in order with files in c++ you will have to open it ,primarily there are 2 ways to open file
//1) using constructor
// 2) using the member function open() of the class

#include <iostream>
#include <fstream>
using namespace std;
#include <string>


int main(){

	//opening file using constructor 
	// SYNTAX :-
	// decalare string (for read and write)
//  input-->   
	    //  stream_type stream_name("file");
// output -->
	// cin --> //  stream_name>>string (use getline)
	//cout --> // stream_name<<string 
	
	
	//write a file
     string str ="hello ggg gamer\n\n bhai\n kya";
     ofstream out("sample.txt");//writing a file
   	 out<<str;
	 out.close();

	//read a file 
    string str2;
	ifstream print("sample.txt");
	//in>>str2; //only single word print
	while(print.eof() == 0){
	getline(print , str2);//all file read	
	cout<<str2;
		}
	print.close();
	
 
 
	
	return 0;
	}

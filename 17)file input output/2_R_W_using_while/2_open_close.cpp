#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
 ofstream out;
 out.open("sample2.txt");
 out<<"hello kya bhai kaisa hai "<<endl;
 out.close();
 
 
 string str;
 ifstream in;
 in.open("sample2.txt");
 getline(in,str);
 cout<<str;
 in.close();
 
 return 0;
 }

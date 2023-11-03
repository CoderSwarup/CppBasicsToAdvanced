//trensform means
//     convert lower case caracter to upper case 
//     convert upper case to lower case



#include <iostream>
using namespace std;
#include <string>
#include <algorithm>



int main(){
	
	string s1 = "samnj_AhHHtYdudhr";
	
	//upper case 
 transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
	
	cout <<s1 <<endl;
	
 
 //lower case
 transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
	
	cout <<s1 <<endl;
	return 0;
 }
	

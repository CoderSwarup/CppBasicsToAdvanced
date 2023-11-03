// convet uppercase and lowercase 
#include <iostream>
using namespace std;
#include <string>



int main(){
	
	string s1 = "samnjAhHHtYdudhr";
	
	//cout <<'a' - 'A' <<endl;
	
	
	
	//convert into upper case 
	
	
	
	
	for(int i = 0 ; i < s1.length();i++)
	{
		if(s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	
	cout <<"convert into upper case"<<endl;
	cout << s1 <<endl<<endl;
	
	
	
	
	//convert into lower case 
	
	
	
	
	for(int i = 0 ; i < s1.length();i++)
	{
		if(s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += 32;
		}
	}
	cout <<"convert into lower case"<<endl;
	cout << s1 <<endl;

	
	return 0;
	}

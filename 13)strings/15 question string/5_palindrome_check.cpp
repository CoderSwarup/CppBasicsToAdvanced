#include <iostream>
using namespace std;
#include <string>

bool cheackpalindrom(string str , int n){
	
	int start  = 0;
	int end = n-1;
	
	while(start <= end)
	{
		if(str[start] != str[end])
		{
			return false;
		}
		else{
		  start++;
		  end--;
		}
		
	}
	

	
		
		return true;
		}

		
		
		
		
int main(){
	
	string s1;
	
	cout <<"enter string for palindrom check"<<endl;
	getline(cin , s1);
	
	
	
	
	
	
	cout <<"check palindrom or not :"<<endl;
	
	if((cheackpalindrom(s1, s1.size()) == 0))
	{
		cout << "not palindrom"<<endl;
	}
	else
	{
		cout << "palindrom"<<endl;
	}
	
	
	return 0;
	}

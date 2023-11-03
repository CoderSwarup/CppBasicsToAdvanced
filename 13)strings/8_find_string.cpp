#include <iostream>
using namespace std;
#include <string>


int main(){
	
	string s1 ;
	cout << "enter string" <<endl;
	cin>>s1;
	
	
	char f[20];
	cout <<" enter find word/sentence : "<<endl;
	cin>>f;
	
    int s = s1.find(f);
     if(s){
   	cout <<" string is find form "<<s<<" index "<<endl;
     }	
  	else if(!s){
     	cout <<"string is not find "<<endl;
     		}
     	
return 0;
    }

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	
	//map syntax 
	//map <data_type_of_key,   data_type_of_value>  variable_name;
	
	map <string , int> marks;
	marks["sammy"] = 99;
	marks["sam"] = 98;
	
	//insert function in map
	marks.insert({ {"sam2",999}, {"sammmm",888}});
	map <string,int> :: iterator it;
	for(it = marks.begin();it != marks.end();it++){
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}

	
	return 0;
	}

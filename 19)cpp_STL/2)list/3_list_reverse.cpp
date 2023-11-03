#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
	list<int> :: iterator it;
    for(it =lst.begin();it!=lst.end();it++)
    {
    	cout<<*it<<endl;
    }
    cout<<endl;
    }
int main(){
	
	
	list<int> list1;
	
	list1.push_back(4);
	list1.push_back(34);
	list1.push_back(5);
	list1.push_back(66);
	list1.push_back(7);
	
	cout<<"list 1: "<<endl;
	display(list1);
	
	
//reverse a list 
	list1.reverse();
	cout<<"reverse list 1 : "<<endl;
	display(list1);
	
	
	return 0;
	}
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
	
	
	//list 2
	
	list<int> list2;
	
	list2.push_back(5);
	list2.push_back(4);
	list2.push_back(77);
	list2.push_back(6655);
	list2.push_back(87);
	
	cout<<"list 2 : "<<endl;
	display(list2);
	
	
	//sort list
	list1.sort();

	cout<<" sort list 1 : "<<endl;
	display(list1);
	
	
	list2.sort();
	cout<<" sort list 2 : "<<endl;
	display(list2);
	
	//merge a list
	cout<<" list 2 merge in list 1 : "<<endl;
	list1.merge(list2);
	display(list1);
	return 0;
	}

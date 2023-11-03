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
	
	list<int> list1;//list of 0 length
	//list<int> list2(8);//empty list of size 8
	
	//adding element in list 
	list1.push_back(4);
	list1.push_back(34);
	list1.push_back(5);
	list1.push_back(66);
	list1.push_back(7);
	
     display(list1);
	
	//removing element from list
	/*
	list1.pop_back();//delete from end element;
	
	list1.pop_front();//delet starting element 
	
	list1.remove(34);//remove particular value
	display(list1);
	*/
	
	//sorting list
	list1.sort();
	cout<<"sort list : "<<endl;
	display(list1);
	
	
	
	list<int> list3(2);
	list<int> :: iterator itt;
	itt = list3.begin();
	*itt = 3;
	 itt++;
	*itt = 4;
	 itt++;
	cout<<"list 2 : "<<endl;
	
	display(list3);
	
	
	return 0;
	}

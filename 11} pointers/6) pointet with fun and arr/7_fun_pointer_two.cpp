#include <iostream>
using namespace std;


void update(int *ptr){
	
	*ptr++;
	cout <<"inside : "<<ptr<<endl;
	
	
	}
	

int main(){
	
	
	int value = 40;
	
	int *p = &value;
	
	
	cout <<"before :";
    cout << p<<endl;
	
	update(p);
	cout <<"after :" <<p<<endl;
	
	
	return 0;
	}
	

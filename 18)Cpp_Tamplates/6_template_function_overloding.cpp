#include <iostream>
using namespace std;


template <class T>
void fun(T a){
	cout<<"this is template fun using template class:  "<<a<<endl;
	}
	
	

template <class T,class t>
void fun(T c,t d){
	cout<<"(2) this is template fun 2 using template class:  "<<c<<endl;
	cout<<"(2) this is template fun 2 using template class:  "<<d<<endl;
	}	
/*	
int fun(int n){
	cout<<"this is simple fun using int : "<<n<<endl;
	}
*/
	
int main(){
    fun("t",2);
	return 0;
	}

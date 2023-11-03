#include <iostream>
using namespace std;


int update1(int n){
	n++;
  
  return n;
  }

  //update function using refrence variable 
  
int update2(int& n){
	n++;
  
  return n;
  }
  

int main(){
	
	int n =5 ;
	
	cout <<"Before n : " <<n<< endl;
//	update1(n); // return vale is same 
	update2(n); // return value increase
	cout<<"After n : "<<n<<endl;
	
	
	return 0;
	}

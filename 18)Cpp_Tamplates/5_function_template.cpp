#include <iostream>
using namespace std;


template <class t1,class t2>

float avarage(t1 a, t2 b){
	float avg = (a+b)/2;
	cout<<"Your avg is : "<<avg<<endl;
	return avg;
	}
	
int main(){
	float a = avarage(3.3,4);

	int b = avarage(222,233);
	return 0;
	}

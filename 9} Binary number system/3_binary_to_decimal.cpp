#include <iostream>
using namespace std;

int main(){
	
	int b ,r;
	
	cout <<"enter binary number"<<endl;
	cin>>b;
	int d = 0;
	int w =1;
	
	while(b){
		r = b %2;
		d =d + r * w;
		b =b /10;
		w =w *2;
		}
		
		cout <<"your decimal is "<<d<<endl;
	
	
	return 0;
	}

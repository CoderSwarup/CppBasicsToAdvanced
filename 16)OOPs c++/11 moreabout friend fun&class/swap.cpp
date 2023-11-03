#include <iostream>
using namespace std;


 void swap(int *a,int*b)
{
	int temp = *a;
	*a = *b;
	*b=temp;
	
	}

int main(){
	
	int n= 10;
	int y=11;
	
	cout<<n<<endl;
	cout<<y<<endl;
	
	swap(n, y);
	
	
	cout<<n<<endl;
	cout<<y<<endl;
	
	return 0;
	}

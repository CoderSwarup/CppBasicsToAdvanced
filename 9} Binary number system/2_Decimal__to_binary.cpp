#include <iostream>
using namespace std;

int main(){
	
	int n , rem;
	int a[10];
	int i =0;
	
	cout<<"Enter number to convert"<<endl;
	cin>>n;
	
	while(n)
	{
		rem = n%2;
		n = n/2;
		a[i] = rem;
		i++;

	}
	
	for(int j = i-1;j >= 0;j--)
	{
		cout<<a[j];
		
	}
	return 0;
		}

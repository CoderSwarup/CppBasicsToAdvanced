#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n ;
	cin>>n;
	
	int i=0;
	int ans=0;
	
	while(n){
		int bit = n & 1;
		
		ans = ( bit * pow(10, i) ) + ans;
		n = n /2;//or n = n>>1;
		i++;
		}
	
		cout << "ANS is :" << ans<< endl;
	
	
	return 0;
	}

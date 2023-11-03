

#include <iostream>
using namespace std;
     
template <class t>   
t factorial(t n){
    if (n == 0)
    {
        return 1;
    }
    if (n >15){
    	
   	cout<<"your number is greater than 15"<<endl;
    	return 0;
    	}
 
    

    t factNm1 = factorial(n - 1);
    t fact = factNm1 * n;
    cout<<fact<<endl;
    return fact; 
}
    int main(){

        int num;
        cout<< "enter number" << endl;
        cin>> num;
        
        cout<<"the factorial of "<< num << " is "<<endl;
       factorial(num);
    

    return 0;
}

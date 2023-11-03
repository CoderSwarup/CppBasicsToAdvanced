#include <iostream>
 using namespace std;
 
 int main(){
     
       int n;
       cin >> n;
 
 	 int array[100];

       for (int i = 0; i < n; i++)
       {
          cin >> array[i];
       }

cout<<endl;
      int curr = 0;
      
       cout << "array sum printing : " <<endl;
        for (int  i = 0; i < n; i++){
        	curr = curr + array[i];
        	//cout << curr <<endl;
        	
        	cout<<curr<<endl;
        	}
        	
        	cout << "total is : "<< curr <<endl;
        	
        	
        	
        	return 0;
        	}

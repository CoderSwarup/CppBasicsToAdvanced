#include <iostream>
using namespace std;

int main(){
	
int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };

   

cout << "first methode"<<endl;
   for(int i = 0;i < 2;i++){
   	  
   	  
   	  for(int j =0 ;j < 3; j++)
   	  {
   	  	  cout << nums[i] [j]<<endl;
   	  }
   	  }
   	  
   	  cout << endl;
   	  cout << endl;
   	  
   	  
   	  
   	   cout << " 2nd methode " << endl;
   	   cout <<  *(*nums)             << endl;	
       cout <<  *(*nums + 1)	     << endl;
       cout <<  *(*nums + 2)	     << endl;
       cout <<  *(*(nums + 1))	     << endl;
       cout <<  *(*(nums + 1) + 1)   << endl;
       cout <<  *(*(nums + 1) + 2)   << endl;






	      cout << endl;
   	  cout << endl;


		 cout << " using pointer " << endl;

	 int num[5] = {2,4 ,6 , 8 ,20};

	

	int *ptr  =  num;

	 for (int i = 0; i < 5; i++)
	 {
		 cout<< *ptr << endl;
	 }
	 
   	  
   	  
   	  return 0;
   	  
   	  }

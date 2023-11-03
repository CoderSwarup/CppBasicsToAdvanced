#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){
   
    srand(time(0));
    
     int number1;
    number1 = rand()%20 + 1; // Generates a random number between 1 and 100
    cout <<"The number is " << number1 <<endl;
    
   int number2 = rand()%10 + 1; // Generates a random number between 1 and 100
    cout <<"The number is " << number2 <<endl; 
   
   
   
   //for sum
   int sum = number1 + number2;
   int ans;
   cout << "enter your answer for num1 +num2:"<<endl;
   cin >> ans;
   
   if(sum == ans)
   {
   	cout << "your answer is correct"<<endl;
   	}
   	else{
   		cout <<"answer is wrong :  correct answer "<<sum<<endl;
   		}
  		
   	
   		
   	//for multi	
    int multi = number1 * number2;
   int anss;
   cout << "enter your answer for num1 *num2:"<<endl;
   cin >> anss;
   
   if(multi == anss)
   {
   	cout << "your answer is correct"<<endl;
   	}
   	else{
   	cout <<"answer is wrong : correct answer "<<multi<<endl;
   		}
   
   		
   		//result
   			cout<< "\n \n";
   
   		
 cout << "*****************result*****************"<<endl;  		
   		
   		
   		if(sum == ans && multi == anss)
   		{
   cout<<"             congragulation      "<<endl;
   			cout << "your sum is correct and multi is correct "<<endl;
   			
   		}
   		else if(sum == ans && multi != anss){
   			 cout << "your sum is correct and multi is incorrect "<<endl;
   			 }
   			 else if(sum != ans && multi == anss){
   			 	cout << "your sum is incorrect and multi is correct "<<endl;
   			 	}
   			 	else{
   			 		
      cout << "your sum is incorrect and multi is incorrect "<<endl;
   }
    return 0;
}

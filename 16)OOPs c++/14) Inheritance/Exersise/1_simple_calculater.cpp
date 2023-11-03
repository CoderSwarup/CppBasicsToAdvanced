
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
using namespace std;

class simplecalc{
	protected:
	float a;
	float b;
	char c;
	public:
	    
   void setcalc(float n ,float m , char x){
	     a = n;
		 b  =m;
	   	 c = x;
	    }
	    
	  void getcal(){ 	
	  cout<<"**************result***************"<<endl<<endl;
	 
	    switch(c)
      {
    	case '+':
    	cout<<"your enter number1 "<<a<<" & number2 "<<b<<"sum is : "<<a+b<<endl;
    	break;
    
    	case '-':
    	cout<<"your enter number1 "<<a<<" & number2 "<<b<<"substraction is : "<<a-b<<endl;
    	break;
    	
    	case '*':
    	cout<<"your enter number1 "<<a<<" & number2 "<<b<<"multiplicatin is : "<<a*b<<endl;
    	break;
    	
    	case '/':
    	cout<<"your enter number1"<<a<<" & number2 "<<b<<"division is : "<<a/b<<endl;
    	break;
    	
    	default:
    	printf("error! operator is not correct ");
    	
    }

    }
 

	};
	
	
	
int main(){
    
    simplecalc s1;
    float a,b;
    char z;
    
    cout <<"enter number 1 : ";
    cin>>a;
   cout <<"Which operation you want(+, -, *, /) : ";
    cin>>z;
     cout <<"enter number 2 : ";
    cin>>b;

    cout<<endl;
    s1.setcalc(a ,b ,z);
    s1.getcal();
 
    
    return 0;
}

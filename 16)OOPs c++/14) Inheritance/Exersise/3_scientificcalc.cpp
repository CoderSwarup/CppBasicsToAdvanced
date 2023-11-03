#include <iostream>
using namespace std;
#include <string>
#include <math.h>


class sicentific{
	protected:
    float x,y;
    int xx;
	public:

	
	void setdata(float n ,float m , int z){
		x=n;
		y=m;
		xx=z;
}

    void print(){
    	
    
    		
  switch(xx)
  {
  	case 1:
  	cout <<"num1 : " <<x<<" square is : "<<x*x<<endl;
  	cout <<"num2 : " <<y<<" square is : "<<y*y<<endl;
    break;
    
    case 2:
    cout <<"num1 : " <<x<<" square root is : "<<sqrt(x)<<endl;
  	cout <<"num2 : " <<y<<" square root is : "<<sqrt(y)<<endl;
    break;
    
    default:
    cout<<"error!!!!!!.......not defined please reenter"<<endl;
    
    
    }	
    }
    };

int main(){
	cout<<"*****Scientifc_calculater************"<<endl<<endl;
	
	cout<<"Enter 1 for squre "<<endl<<
	      "Enter 2 for square root "<<endl<<endl;
	
	cout<<"****************************************"<<endl<<endl;
	sicentific s1;
    float q ,z;
	int a;
	
	
	while(1){
	cout<<"See operation code in upper side \n which opration you want : ";
	cin >>a;
    cout<<"enter a num1 : ";
    cin>>q;
    cout<<"enter a num2 : ";
	cin>>z;

	
	cout <<endl;
		cout<<"Answer is : "<<endl;
	s1.setdata(q,z,a);
	s1.print();
		cout<<endl;
	}
	return 0;
	}
	

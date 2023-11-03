#include <iostream>
using namespace std;
#include <math.h>

//simple calculater
class simple{
	protected:
	float a ,b ;
	char c;
	public:
	
	void addition(float n, float m){
		a=n;b=m;
		cout<<a<<" + "<<b<<" =  "<<a+b<<endl;
		}
		
    void sub(float n, float m){
		a=n;
		b=m;
		cout<<a<<" - "<<b<<" =  "<<a-b<<endl;
		}
	
	    void multi(float n, float m){
		a=n;
		b=m;
		cout<<a<<" * "<<b<<" =  "<<a*b<<endl;
		}
	
	 void divi(float n, float m){
		a=n;
		b=m;
		cout<<a<<" / "<<b<<" =  "<<a/b<<endl;
		}
		
	    void remender(int n, int m){
		a=n;
		b=m;
		cout<<a<<" % "<<b<<" =  "<<n%m<<endl;
		}
};




//scientific calculater

class scientific{
	public:
	void power(double x, float y){
    // 6^4 = 6*6*6*6
    // pow(b,e);
    // pow(6,4);
     
    cout<<"The solution for base "<<x<<" and exponent "<<y<<" is "<<pow(x,y)<<endl;
}
void square(double b){
    // n^2 = n*n
    // 2^2 = 2*2
    // 4^2 = 16
    double power = pow(b,2);
    cout<<"The square of "<<b<<" is "<<power<<endl;
}

void st(int n){
	cout<<"Square root of given num "<<n<<" is : "<<sqrt(n)<<endl;
	}
};
	
	


//using multiple inharitance 
class hybrid : public simple, public scientific{
	
	public:
	
	void setvalue(int x){

   switch(x)
  {
  	case 0:
  	cout<<"you Exit a program....."<<endl;
  	 exit(0);
  	break;
  	
    case 1:
        float a;
        float b;
    cout<<"Addition of two numbers"<<endl;
    cout<<"enter value 1 : ";
	cin>>a;
    cout<<"enter value 2 : ";
	cin>>b;
	cout<<endl;
	cout<<"Answer : ";
     addition(a,b);
    break;
    
    case 2:
     cout<<"substraction of two numbers"<<endl;
       float c;
       float d;
    cout<<"enter value 1 : ";
	cin>>c;
    cout<<"enter value 2 : ";
	cin>>d;
	cout<<endl;
	cout<<"Answer : ";
     sub(c,d);
    break;
    
    case 3:
     cout<<"Multiplication of two numbers"<<endl;
    float e,f;
     cout<<"enter value 1 : ";
	cin>>e;
    cout<<"enter value 2 : ";
	cin>>f;
	cout<<endl;
	cout<<"Answer : ";
	multi(e,f);
	break;

    case 4:
     cout<<"Division of two numbers"<<endl;
    float g,h;
    cout<<"enter value 1 : ";
	cin>>g;
    cout<<"enter value 2 : ";
	cin>>h;
	cout<<endl;
	cout<<"Answer : ";
	divi(g,h);
	break;	
	
	
    case 5:
     cout<<"Find remender"<<endl;
    int i,j;
    cout<<"enter value 1 : ";
	cin>>i;
    cout<<"enter value 2 : ";
	cin>>j;
	cout<<endl;
	cout<<"Answer : ";
	remender(i,j);
	break;	
	
	case 6:
	 cout<<"Find power"<<endl;
	double k,l;
    cout<<"enter value 1 : ";
	cin>>k;
    cout<<"enter value 2 : ";
	cin>>l;
	cout<<endl;
	cout<<"Answer : ";
	power(k,l);
	break;
    
     case 7:
     cout<<"Square of number"<<endl;
	double m;
	cout<<"Enter the number you want the sqaure of: ";
	cin>>m;
	cout<<endl;
	cout<<"Answer : ";
    square(m);
	break;
	
	 case 8:
     cout<<"Square root of number"<<endl;
     int n;
	cout<<"Enter the number you want the sqaure root of: ";
	cin>>n;
	cout<<endl;
	cout<<"Answer : ";
    st(n);
	break;
    
   
    
    default:
    cout<<"error.!!!!.!!.undefined operation"<<endl;   
    }
    }
    };
    
	
int main(){
	hybrid h1;
	int n;
	
cout<<"*****************calculater***************"<<endl<<endl;

cout<<"*****Select Oprations********"<<endl<<endl<<
	"0)select 0 for exit program "<<endl<<
	"1)select 1 for addition "<<endl<<
	"2)select 2 for subsraction "<<endl<<
	"3)select 3 for multiplication "<<endl<<
	"4)select 4 for division "<<endl<<
	"5)select 5 for remainder "<<endl<<
	"6)select 6 for power eg. (6^3)=6*6*6"<<endl<<
	"7)select 7 for square "<<endl<<
	"8)select 8 for square root "<<endl<<endl;
cout<<"*****************develop by sammy***************"<<endl<<endl;	



	while(2){
	
	cout<<"$$  select oparation number : ";
    cin>>n;
	cout<<endl;
	cout<<"********************************"<<endl;
	h1.setvalue(n);
		cout<<endl<<endl;
		}
	
	return 0;
	}
		

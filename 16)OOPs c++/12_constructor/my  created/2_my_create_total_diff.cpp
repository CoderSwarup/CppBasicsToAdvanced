
#include <iostream>
using namespace std;
	
class sumsub{
	int a;
	int b;
	
	public:
	void setdata(int n,int m){
		a=n;
		b=m;
		}
	
	void printsum(){
		cout <<"1st enter value total sum is "<<a<<" + "<<b<<"is : "<<a+b<<endl;	
		
	}		
		
		void printsub(){
		cout <<"2nd enter value total substaction is "<<a<<" - "<<b<<" is : "<<a-b<<endl;	
	}
		
		void printdis(){
			
			cout<<"Distance is "<<a<<" and "<<b<<" and : ";
			}
			
		void dis2(){
			cout<<a-b<<endl;
			}	
			
			
			
	friend sumsub getdis(sumsub s1 ,sumsub s2);
    friend sumsub getdis2(sumsub s1 ,sumsub s2);
		
	
	};	
	
	//for get distance value 
	sumsub getdis(sumsub s1 ,sumsub s2){
		sumsub s3;
		s3.setdata((s1.a-s2.a),(s1.b-s2.b));
		return s3;
		}	
		
		
		//for get distance between total value
		sumsub getdis2(sumsub s5 ,sumsub s6){
		sumsub s4;
		s4.setdata((s5.a+s5.b),(s6.a-s6.b));
		return s4;
			}
	
	int main(){
		
		sumsub s;
		sumsub ss;
		sumsub distance;
		
		int n;int m;
		cout<<"enter two value for 1st setdata function :" ;;
		cin>>n>>m;
		
		int x;int y;
		cout<<"enter two value for 2nd setdata function :" ;;
		cin>>x>>y;
		cout<<endl;
		
		
		s.setdata(n,m);
		ss.setdata(x,y);
		
		
		s.printsum();
		ss.printsub();
		
		
		distance = getdis(s,ss);
		distance.printdis();
		
		distance = getdis2(s,ss);
		distance.dis2();
		
		
		
		return 0;
		}

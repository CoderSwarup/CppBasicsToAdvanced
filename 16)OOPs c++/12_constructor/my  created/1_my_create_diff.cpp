
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
			cout<<"Distance is "<<a<<" and "<<b<<endl;
			}
			
	friend sumsub getdis(sumsub s1 ,sumsub s2);
		
	
	};	
	
	sumsub getdis(sumsub s1 ,sumsub s2){
		sumsub s3;
		s3.setdata((s1.a-s2.a),(s1.b-s2.b));
		return s3;
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
		
		
		
		
		return 0;
		}

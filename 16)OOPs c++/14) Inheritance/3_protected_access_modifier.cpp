#include <iostream>
using namespace std;

class Base{
	protected:
	int a;//this integer is private but you can access 
	private:
	int b;
	
	};
	
/*for a protected memmber	
	          public        private        protected
	                       Derivation  
	
1.private   not inharite|not inharite  not inharite 
2.protected  protected  |  private      protected
4.public	 public     |  private      protected
	
*/	

class derived : Base{
	public:
	void setdata(int n){
		a=n;
		}
	void printdata(){
		cout<<"protected value is : "<<a<<endl;
		}
	};
int main(){
	derived b;
	int n;
	cout<<"enter a number : "<<endl;
	cin>>n;
	b.setdata(n);
	b.printdata();
	
	//cout<<a<<b;
	
	
	return 0;
	}

#include <iostream>
using namespace std;
#include <string>

class students{
	string name;
	string clgname;
	
	public:
	void setdata(){
		// clgname is set permenetly
		clgname = "srmcollage";
		cout<<"Enter your name : "<<endl;
		cin>>name;
		}
		
		void getdata(){
			cout<<name<<" is the " <<clgname <<" clg student"<<endl;
			}
			};

int main(){
	
	//decalare array
	//students s[3];
	students  *ptr  = new students[3];
	students *ptrtemp  = ptr;
	for(int i = 0;i<3;i++)
	{
		cout<<"student number "<<i+1<<endl;
		ptr->setdata();
		ptr++;
		cout<<endl;
		
	}
	
	
	for(int i = 0;i<3;i++)
	{
	cout<<"student no "<<i+1<<" ";
		ptrtemp->getdata();
		ptrtemp++;
		cout<<endl;
		}
	return 0;
	}

#include <iostream>
#include <string>
using namespace std;


class student{
	int mark;
	string name;
	
	public:
	void setdata(int a , string b){
		mark = a;
		name = b;
		
		}
		
	void printdata(){
		cout<<"Student percentage is "<<mark<<"%"<<endl;
		cout<<"Student name is " <<name <<endl;
		if(mark > 60){
	cout<<"Student Select in Srm Collage "<<endl;
			}
		else
		{
   	cout<<"Student not Select in Srm Collage "<<endl;
		}
		}
	};
	

int main(){
	
	int n;
	cout<<"Enter number of to set a data ";
	cin>>n;
	
	student *ptr = new student[n];
	/* obj =>   1 2 3
	                ^
	                |
	               ptr
	           ptrtemp
	//ptr is ++  so the ptrtemp store ptr value 
	*/
	student *ptrtemp = ptr;
	
	int i , a;
	string b;
	
	for(i =0 ;i<n;i++)
   {
   	cout<<"Enter Student No "<<i+1<<" data "<<endl;
   	cout<<"Enter student pecentage : ";
   	cin>>a;
    cout<<"Enter student Name : ";
    cin>>b;
    
    ptr->setdata(a,b);
    ptr++;
    cout<<endl;
    }
    
    cout<<endl;
    cout<<"******Result********"<<endl<<endl;
   
	for(i =0 ;i<n;i++)
   {
   	cout<<"Student No "<<i+1<<" data "<<endl;  
    ptrtemp->printdata();
    ptrtemp++;
    cout<<endl;
    } 
	
	
	return 0;
	}

#include <iostream>
using namespace std;
#include <string>


//create a class student to collect roll num
class students{
	int Rollno;
	string name;
	//this is static member data
	static int count;//this is initialize with 0
	
public:
	void setdata(){
		cout <<"Enter student No "<<count<<" Roll No : " ;
		cin >> Rollno;
		cout <<"Entet Student no "<<count << " name : " ;
		cin>>name;
		count++;
		}
		
		
		void displaydata(){
	cout <<"This is student num : "<<count-1<<endl;
			cout <<"Student Name is : "<<name<<endl;
			cout<<"Student " <<name<<" Rollno is : "<<Rollno<<endl;
			}
			
			
			
			//this is static function
			
		static void staticfunction(){
			cout <<"The vale of count is : "<<count<<endl;	
			}
			
	    	};
			
			
	  		
			

	
//static member d					
int students :: count=1;//defautl value is 0	here can define count = 1 , 2  for which number for started	
			
			
			
			
			
				
int main(){
	students s1, s2;
	

		
	for(int i=0;i<2;i++)
	{
		

		s1.setdata();
		cout <<endl;
		s1.displaydata();
		cout<<endl;
		//static function decalara
		students::staticfunction();
		}
	
		/*	
		cout <<endl;
		
		s2.setdata();
		cout <<endl;
        s2.displaydata();
		cout<<endl;
		//static function decalara
		students::staticfunction();

	
	*/
	
	return 0; 
	}

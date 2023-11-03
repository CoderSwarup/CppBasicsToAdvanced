#include <iostream>
using namespace std;
#include <string>


//create a class student to collect roll num
class students{
	int Rollno;
	string name;
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
			};

// Count is the static data member of class students	
int students :: count=1;//defautl value is 0	here can define count = 1 , 2  for which number for started		
int main()
{
	students s1, s2;
	
	for(int i=0;i<2;i++){
		s1.setdata();
		cout<<endl;
		s1.displaydata();
		cout <<endl;

		}
		
	cout<<endl<<endl;
		


		
		
		/*s1.setdata();
		cout <<endl;
		s1.displaydata();
		
		cout <<endl;
		
		s2.setdata();
		cout <<endl;
        s2.displaydata();

	
	*/
	
	return 0; 
	}

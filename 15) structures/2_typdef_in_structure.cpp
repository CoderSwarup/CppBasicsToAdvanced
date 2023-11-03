#include <iostream>
using namespace std;
#include <string>


typedef struct student
{
	int roll_no;
	char ch;
	string name;
}stu;


void print(int roll , char ch , string name){
	
	cout <<"student roll num is : "<< roll <<endl;
	cout <<"student fav character : "<< ch << endl;
	cout <<"student name is :" <<name<<endl;
	cout <<endl<<endl;
	}

int main(){
	
	stu s1;
	s1.roll_no = 1001;
	s1.ch = 'c';
	s1.name = "sammy bhai" ;
	
	
	cout <<"student s1 details : "<<endl;
	print(s1.roll_no, s1.ch,s1.name);
	
	
	 stu s2;
	s2.roll_no = 1002;
	s2.ch = 's';
	s2.name = "swarup bhise" ;
	
	cout <<"student s2 details : "<<endl;
	print(s2.roll_no, s2.ch,s2.name);
	
	
	
	
	
	
	
return 0;
	}



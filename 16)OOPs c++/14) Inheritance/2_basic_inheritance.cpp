#include <iostream>
#include <string>
using namespace std;

//base class
class collage{
	//int id;// is defined in private than derived class is not acccess it 
	public:
	int id;
	int rollno;
	//if you have create constructor define than always define void constructor 
	collage (){}
	collage(int n,int r){
		id = n;
		rollno = r;
		}
	/*void getdata(int n , int r){
		id = n;
		rollno = r;
		}*/
	void printdata(){
		cout<<"roll no = "<<rollno<<endl<<"and id = "<<id<<endl;
		}
		};
		
 /* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/


//derived class 
class student : collage
{
	public:
	string clg_name = "srm";
	void getdata(int n ,int r){
		id = n;
		rollno = r;
		}
	void printdata(){
		cout<<"roll no = "<<rollno<<endl<<"and id = "<<id<<endl<<"clg name is : "<<clg_name<<endl;
		}
		
    
     	
};
int main(){
	collage c1(2,22);
	//c1.getdata(2,22);
	c1.printdata();
	cout <<endl;
	student s1;
	s1.getdata(3,33);
	s1.printdata();
	
	
	return 0;
	}

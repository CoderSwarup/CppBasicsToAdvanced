// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
        
        
        
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
     void chk_bin(void); 
    

public:
    void read(void);
   
    void ones_compliment(void);
    void display(void);
};



void binary :: read(void){
	cout <<"Enter binary number : "<<endl;
	cin >> s;
		cout <<endl;
	chk_bin();
	}
	
	

	
	
	
void binary :: chk_bin(){
	
	
	for(int i = 0 ; i <s.length() ; i++){
	
	if(s[i] != '0' && s.at(i) != '1')
	{
		cout<<"not binary number : " <<s<<endl;
		exit(0);
	}
	else{
		cout <<s<<" : this is binary number" <<endl;
		break;
		display();
		}
		
		}
			cout <<endl;
			ones_compliment();
		}
		

		
		
void binary :: ones_compliment(){
	
	//use chk_bin();
	
	
	for(int i = 0 ; i <s.length() ; i++)
		if(s[i] == '0')
		{
			s[i]= '1';
		}
	   else
	   {
	   	s[i] = '0';
	   }
       cout << "ones_compliment is : "<<s<< endl;
	   
	 	 	cout <<endl;
	   display();
       }
		
		
void binary :: display(){
   
			
		cout <<"show binary number after ones complement"<<endl;
		cout <<s<<endl;
			cout <<endl;
		}
		
int main(){
	
	binary b;
	b.read();
	// if chk_bin fun is private did't work here
// 	b.chk_bin(); //this run through in another funtion . ex. (ones complement through)
	//b.display();
	
	
	//b.ones_compliment();
	//b.display();
	
	
	return 0;
	
	};

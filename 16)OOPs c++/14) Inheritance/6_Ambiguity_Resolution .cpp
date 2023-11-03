#include <iostream>
using namespace std;

class good{
	public:
	void morning(){
		cout<<"Hello Dear Good Morning "<<endl;
		}
		
};


class good2{
	public:
	void morning(){
		cout<<"Shubh-Prabhat Bhai "<<endl;
		}
		
};

class derive : public good , public good2{
	public:
	
	void morning(){
	//Ambiguity_Resolution using scoperesolution
		good :: morning();
		}
	void morning1(){
	//Ambiguity_Resolution using scoperesolution
		good2 :: morning();
		}
		
	};
	
	
int main(){
	good g;
	good2 gg;
	
	g.morning();
	gg.morning();
	
	//Ambiguity_Resolution
	derive d;
	d.morning();
	d.morning1();
	
	
	return 0;
	}
	

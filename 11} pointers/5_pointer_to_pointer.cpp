//pointer to pointer
#include <iostream>
using namespace std;

int main(){ 
	int age;
	cout <<"enter age ";
	cin >> age;



	int *pr=&age;//integer to pointer
    

	int **pptr=&pr;//pointer to pointer

	int ***ppp = &pptr;//pointer to pointer to pointer


	
	cout <<" *pr years  "<< *pr <<endl;
	
	cout <<" **pptr+1 years  "<< **pptr+1 <<endl;
	
	
	cout <<" ***ppp+2 years  "<< ***ppp+2 <<endl;
	
		
	return 0;
	
	}

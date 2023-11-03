

#include <iostream>
using namespace std;

int main(){
	
	int n = 10;
	
	int* ptrr;
	

    // ptrr = &n;   //valid

    ptrr = std::addressof(n);	 //valid
    
    

	// increment 
	for(int i = 0;i< 10;i++)
	{
		(*ptrr)++;
	}

	cout << "the addres of pointer " <<ptrr <<endl;
	cout << "the value of pointer " <<*ptrr <<endl;
	
	
	cout << endl;
	
	
	
	
	
	
	
	
	
	// A normal integer variable
    int Var = 10;
 
    // A pointer variable that holds address of var.
    int *ptr = &Var;
 
    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    cout << "Value of Var = "<< *ptr << endl;
 
    // The output of this line may be different in different
    // runs even on same machine.
    cout << "Address of Var = " <<  ptr << endl;
 
    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20
 
    // This prints 20
    cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;
	
	return 0;
	}

/*#include <iostream>
using namespace std;
 
template <class T>
class vector{
    T *arr;
    int size;
    public:
        vector(T* arr){
            //code
        }
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
   // vector<float> myVec2();
    return 0;
}*/
#include <iostream> 

using namespace std; 

  
// One function works for all data types.  This would work 
// even for user defined types if operator '>' is overloaded 

template <typename T> T myMax(T x, T y) 
{ 

    return (x > y) ? x : y; 
} 

  

int main() 
{ 

    cout << myMax<int>(3, 7) << endl; // Call myMax for int 

    cout << myMax<double>(3.0, 7.0) 

         << endl; // call myMax for double 

    cout << myMax<char>('g', 'e') 

         << endl; // call myMax for char 

  

    return 0; 
}

//other operatror

//    1. sizeof()    return size of veriable 
//    2. cast        convert one data type to other(typecasting)
//    3. comma( , )  cause a sequence of operatiions to be performed
//    4. &           return address of veriable 
//    5. *           pointer to the veriable        

//    most important
//      ** ternary and conditional operator ** ==> (codition ? x :  y)
          

//      syntax ==>
//        condition ? dosomething if true : dosomething if flase

#include <iostream>
using namespace std;

    int main(){
    int marks;
    cout << "enter your marks"<<endl;
    cin >> marks;

    //ternary operator
    marks > 70 ? cout << "your mark is "<<marks<<endl<< "good grades"<<endl : cout << "your mark is "<<marks<<endl<<"improvr grade"<<endl;
    cout << "all the best" << endl;
    return 0;
}

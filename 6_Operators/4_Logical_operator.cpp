//logical operator
 // && ==> one flase is flase 
 // || ==> one true is true
 // ! ==> change the condition ==> if value is true convert flase
 //                                if value is flase convert true

#include <iostream>
using namespace std;

    int main(){
    int a = 10 ,  b = 12;
    cout << "This is && operator"<< endl;
    cout << "the vale of this ((a < b) && (a!=b)) logical operator is "<< ((a < b) && (a != b)) <<endl;
  // value is true ==> 1

    cout << "the vale of this ((a < b) && (a==b)) logical operator is "<< ((a < b) && (a == b)) <<endl;
    //value is flase ==> 0

    cout << "\n \n";

    cout << "This is || operator"<< endl;

        cout << "the vale of this ((a < b) || (a!=b)) logical operator is "<< ((a < b) || (a != b)) <<endl;
  // value is true ==> 1

    cout << "the vale of this ((a > b) || (a==b)) logical operator is "<< ((a > b) || (a == b)) <<endl;
    //value is flase ==> 0



    
    cout << "\n \n";

    cout << "This is ! operator"<< endl;
     cout << "the vale of this !((a > b) || (a==b)) logical operator is "<< !((a > b) || (a == b)) <<endl;
    //value is true ==> 1
    return 0;
}

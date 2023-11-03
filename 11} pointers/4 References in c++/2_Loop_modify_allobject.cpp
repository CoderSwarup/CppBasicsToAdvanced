// in for each loop modify all object
// syntax :: vector< type> parameter


#include <iostream>

using namespace std;

int main(){


    vector<int> vect{10 , 22 , 33 ,40};


for(int &x : vect){//& is the pass the value of vect 
	   x+=5;
    }

     for(int x : vect){
         cout << x << endl;
    }

     cout << endl;
     cout << endl;
     cout << endl;


     //similear for string
       
         vector<string> sam{
             "my name is sam", "my age is 20"
         };

         for(const auto&z : sam){
             cout<< z <<endl;
         }




    return 0;
}

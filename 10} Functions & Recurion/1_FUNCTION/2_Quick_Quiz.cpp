


#include <iostream>
using namespace std;

  void goodMorning();
  void goodAfternoon();
  void goodNight();

    int main(){

         cout << "Entere 'b' for break fast"<<endl<<"Enter 'l' for lunch"<<endl<<"Enter 'd' for dinner"<<endl;
          
          char ch;
          cin >> ch;

          if(ch == 'b'){
              goodMorning();
          }
          else if(ch == 'l'){
              goodAfternoon();
          }
          else if(ch == 'd'){
              goodNight();
          }
          else{
              cout << "Your enter charater is not defined"<<endl;
          }


    
    return 0;
}

  void goodMorning(){
      cout << "Good Morning Enjoy your Brek-fast"<<endl;
  }
  void goodAfternoon(){
      cout << "Good Afternoon Enjoy your Lunch"<<endl;
  }
  void goodNight(){
      cout << "Good Night Enjoy your Dinner"<<endl;
  }

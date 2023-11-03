// switch case SYNTAX

    //  switch (expression)
    //  {
    //  case /* constant-expression */:
    //      /* code */
    //      break;
     
    //  default:
    //      break;
    //  }

  #include <iostream>
  using namespace std;
  
      int main(){
      
        int day;
        cout << "enter day (0 to 6) :" << endl;
        cin >> day;

        // switch statement

           switch (day)
           {
           case 0:
               cout << "today is monday"<< endl;
               break;
           case 1:
               cout << "today is tuesday"<< endl;
               break;
           case 2:
               cout << "today is wednesday"<< endl;
               break;
           case 3:
               cout << "today is thuesday"<< endl;
               break;
           case 4:
               cout << "today is friday"<< endl;
               break;
           case 5:
               cout << "today is saturday"<< endl;
               break;
           case 6:
               cout << "today is sunday"<< endl;
               break;
           
           default:
                cout << "wrong day please enter 0 to 6"<< endl;
               break;
           }
      return 0;
  }

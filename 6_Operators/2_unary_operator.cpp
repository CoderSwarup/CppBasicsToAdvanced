// unary operator
 // ++ , --  ==> i++ ,i--  ==> first print after increnent
          //   --i , ++i   ==> first increment after print



        #include <iostream>
        using namespace std;
        
            int main(){
                // i++
             int i  = 10;
             cout << "the vale of i++ is " << i++ <<endl;//10 
             cout << "the vale of i is " << i <<endl;//11

               // a--
             int a = 10;
             cout << "the vale of a-- is " << a-- <<endl;//10
             cout << "the vale of a is " << a <<endl;//9

              cout << "\n";

                  // ++b
             int b  = 12;
             cout << "the vale of ++b is " << ++b <<endl;//13
            //  cout << "the vale of b is " << b <<endl;//13

               // --c
             int c = 20;
             cout << "the vale of --c is " << --c <<endl;//19
            //  cout << "the vale of c is " << c <<endl;//19
                cout << "\n \n";




                int v = 25;

                 cout << "the vale of v++ is " << v++ <<endl;//25
                cout << "the vale of v-- is " << v-- <<endl;//26
             cout << "the vale of ++v is " << ++v  <<endl;//26
             cout << "the vale of --v is " << --v <<endl;//25
            return 0;
        }

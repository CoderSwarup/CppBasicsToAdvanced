//Bits  0  anmd 1

//  types ==>
        // 1. (&) ==> AND operator          ==>  0101   & 0110   = 0100
        // 2. (|) ==> OR operator           ==>  0101   | 0110   = 0111
        // 3. (^) ==> XOPR operator         ==>  0101  ^ 0110   = 0011 (same same flase)
        // 3. (~) ==> ones operator(NOt)    ==>  0101   ~        = 1010


        // 4. (<<) ==> left shift operator  ==>  4<<1 (0100)     = 1000 (value increase double)
        // 5. (>>) ==> right shift operator ==>  4>>1 (0100)     = 0010 (value decrease half)


        #include <iostream>
        using namespace std;
        
            int main(){
            int a =100 , b=14;

            cout << "value is " << ((a > b) | (a == b))  << endl;

            cout << "value is " << ((a > b) & (a == b))  << endl;

            cout << "value is " << (a << 1) << endl;
            
            return 0;
        }

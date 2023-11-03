

#include <iostream>
using namespace std;

float moneyrecive(int money , float intreast = 1.04){
    return money * intreast;
}

    int main(){
        int m =1000;
        cout<< "If you have "<<m<< "Rs in your bank account "<<endl;
        cout<< " you will recive "<<moneyrecive(m)<< "Rs in 1 Year "<<endl;

    
    return 0;
}
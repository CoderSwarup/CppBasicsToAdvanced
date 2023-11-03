// avoidign copy long structure

 #include <iostream>
 #include <string.h>
 using namespace std;


 struct student{
     string name;
     int roll;
 };


  void print(student s){
      cout << s.name<< endl << s.roll<<endl<<endl;

 }


 int main(){

     struct student s1;
       s1.name = "sammy";
       s1.roll = 100;

       print(s1);

     
     
      struct student s2;
       s2.name = "swarup";
       s2.roll = 1001;

       print(s2);

       return 0;
 }

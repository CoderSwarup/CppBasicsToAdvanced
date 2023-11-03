//given an array a[] of size n . output sun of each subarray of the given array

// example :
//    array =    1  2  3

//    subarray = 1  , 1 2 ,  1 2 3 ,  2 ,  2 3 ,  3


 #include <iostream>
 using namespace std;
 
     int main(){
     
       int n;
       cin >> n;

       int array[n];

       for (int i = 0; i < n; i++)
       {
          cin >> array[i];
       }


      int curr = 0;

      cout << "out put is"<< endl;

       for (int  i = 0; i < n; i++)
       {
           curr =0 ;

           for (int j = i; j < n; j++)
           {
               curr = curr + array[j];
               cout << curr << endl;
           }
           
       }
       
       


     return 0;
 }

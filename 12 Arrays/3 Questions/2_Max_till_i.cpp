// given an array a[] of size n. for every i from 0 to n-1 output max (a[0],a[1],...a[i])
   

 #include <iostream>
 using namespace std;
 
     int main(){
      
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;

    int arr[n];
     for (int i = 0; i < n; i++)
      {
          cin >> arr[i];
      }


       cout << "your array size is "<<  n <<endl;

      int maxNo = INT8_MIN;

      
       for (int i = 0; i < n; i++){

           maxNo = max(maxNo , arr[i]);
           cout << i << " : element max num is :" << maxNo <<endl;
       }
           
     return 0;
 }

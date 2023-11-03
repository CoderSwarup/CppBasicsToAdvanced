// find the minimum and maximum number enter by users



#include <iostream>
using namespace std;


// second way
int getmax(int arr[] , int size){
	
	int max = INT_MIN;
	for(int i = 0 ;i < size;i++)
	{
	if(arr[i] > max)
	{
		max = arr[i];
	}
	}
	return max;
	};
	
	
	

    int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;

    int arr[n];
     for (int i = 0; i < n; i++)
      {
          cin >> arr[i];
      }


      
 /*     // first way
      int maxNo = INT8_MIN;
      int MinNo = INT8_MAX;

       for (int i = 0; i < n; i++){

           maxNo = max(maxNo , arr[i]);
           MinNo = min(MinNo , arr[i]);
       }
           

           cout << "MaxNo is : "<<maxNo<< endl << "MinNO is : " << MinNo <<endl;*/
           
           
           cout << " max no is " << getmax(arr, n);
    return 0;
}


   //How its work 

        //     maxNo = max(maxNo , arr[i]);

                 /*    for example : given array is 2 , 4 , 6 , 8 , 4 
                                                   [0] [1] [2] [3] [4]   

                                                   maxNo = max(maxNo , arr[i]);
                                    at i = [0]     maxNo = max(2, 0); ==> 2
                                    at i = [1]     maxNo = max(4, 2); ==> 4
                                    at i = [2]     maxNo = max(6, 4); ==> 6
                                    at i = [3]     maxNo = max(8 ,6); ==> 8
                                    at i = [4]     maxNo = max(4, 8 ); ==> 8  ==> max no

                                    similear for {minno} but it work reverse
 */      


        
        //    MinNo = min(MinNo , arr[i]); 

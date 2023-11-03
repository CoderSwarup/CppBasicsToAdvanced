/*malloc() function in c++

The malloc() function which is defined under <cstdlib> header file is used to allocate block of memory and returns a void pointer to the allocated memory block's first byte if the allocation succeeds.*/

/*Syntax:

data_type* malloc(size_t sizeof(data_type));
*/

#include <iostream>
#include <cstdlib>
 using namespace std;

int main() {

int n;
	cin>>n;

int *ptr = (int *)malloc(n* sizeof(int));

for (int i = 0; i < n; i++) { 
	ptr[i] = i * 2;
}

for (int i = 0; i < n; i++) { /* ptr[i] and *(ptr+i) can be used inter changebaly*/
	 cout<< ptr[i] << endl;

}

free(ptr);

return 0;

}

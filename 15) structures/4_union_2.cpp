#include <iostream>
using namespace std;
#include <string.h>

union Data {
   int i;
   float f;
} data1, data2;

int main( ) {
   cout << "Memory size occupied by data : "<<
   sizeof(data1)<< "\t" << sizeof(data2);
   return 0;
}

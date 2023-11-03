#include <iostream>
using namespace std;

template <class t>
class sum{
	t v1;
	t v2;
	public:
	sum(t vv,t vvv){
		v1=vv;
		v2=vvv;
		cout<<v1<<endl<<v2<<endl<<"sum is : "<<v1+v2<<endl;
		}
		};
		
int main(){
	sum<int>obj(22.3,3.4);
	return 0;
	}
/*
class mm{
	public:
	t *arr;
	int size;
	
	
	mm(int m){
		size = m;
		arr = new t[size];
		}
		
	int sum(mm &d){
		t z = 0;
	   for(int i =0;i< size;i++)
		{
			z+=this->arr[i] * d.arr[i];
	
		}
	  return z;
		}
		};
		
int main(){
	mm<float>v1(3);
	v1.arr[0]=1.4;
	v1.arr[1]=3.3;
	v1.arr[2]=0.1;
	mm<float>v2(3);
	v1.arr[0]=0.1;
	v1.arr[1]=1.90;
	v1.arr[2]=4.1;
	float a = v1.sum(v2);
	cout<<a<<endl;
	return 0;
	}
*/

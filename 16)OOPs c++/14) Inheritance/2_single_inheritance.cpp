#include <iostream>
using namespace std;

class A
{
	int data1;

public:
	int data2;

	void setdata()
	{
		data1 = 10;
		data2 = 50;
	}
	int getdata1()
	{
		return data1;
	}
	int getdata2()
	{
		return data2;
	}
};

// derive class
class B : private A
{ // if class is private than not call A class memeber functions dicrectly
	int data3;

public:
	void setdata3()
	{
		setdata(); // A class
		data3 = data2 * getdata1();
	}

	void multidata()
	{

		cout << "vlaue of data 1 = " << getdata1() << endl;
		cout << "value of data 2 = " << data2 << endl;
		cout << "value of data 3 is data1 * data2 : " << data3 << endl;
	}
};

int main()
{
	B b;
	// b.setdata();//derived data is private
	b.setdata3();
	b.multidata();

	return 0;
}

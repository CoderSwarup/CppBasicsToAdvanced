#include <iostream>
using namespace std;

int Lsearch(int arr[], int n, int key)
{

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			cout << endl
				 << "Key index is " << i << endl;
			return 1;
		}
	}

	return 0;
}

int main()
{

	int size;
	cout << " enter size of array" << endl;
	cin >> size;

	int array[1000];
	cout << " enter " << size << " size of array" << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	int key;
	cout << " enter found key" << endl;
	cin >> key;

	int find = Lsearch(array, size, key);

	cout << endl;

	cout << "************RESULT*************" << endl;

	if (find)
	{
		cout << " key is found " << endl;
	}
	else
	{
		cout << " key is not found" << endl;
	}

	return 0;
}

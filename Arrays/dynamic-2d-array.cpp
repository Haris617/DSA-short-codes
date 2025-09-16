// Q: Create a 2D array using pointer to pointers. Add and show data in this 2D array.

#include <iostream>
using namespace std;

int main()
{
	int r;
	int c;

	cout << "Enter Total Rows" << endl;
	cin >> r;

	cout << "Enter Total Columns" << endl;
	cin >> c;

	int** arr = new int* [r];

	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
	}

	cout << "Entering Data " << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter Data in index  " << i << " " << j << " : ";
			cin >> arr[i][j];
		}
	}

	cout << "Displaying" << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Data in index  " << i << " " << j << " : ";
			cout << arr[i][j];
			cout << endl;
		}
	}

	return 0;
}

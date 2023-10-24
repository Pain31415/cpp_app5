#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;

	const int rows = 1;
	const int cols = 13;

	int arr[rows][cols];

	for (int i = 0; i < cols; i++)
	{
		if (i == 0)
		{
			arr[0][i] = size;
		}
		else
		{
			arr[0][i] = arr[0][i - 1] * 2;
		}
	}
	for (int i = 0; i < cols; i++)
	{
		cout << arr[0][i] << " ";
	}
	cout << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 3;

	int arr[rows][cols] = { {1,2,3}, {4,5,6}, {7,8,9} };

	int sum = 0;
	int minElement = arr[0][0];
	int maxElement = arr[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];

			if (arr[i][j] < minElement)
			{
				minElement = arr[i][j];
			}

			if (arr[i][j] > maxElement)
			{
				maxElement = arr[i][j];
			}
		}
	}
	double average = static_cast<double>(sum) / (rows * cols);

	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Min element: " << minElement << endl;
	cout << "Max element: " << maxElement << endl;

	return 0;
}
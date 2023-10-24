#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int rows = 5;
	const int cols = 10;
	int firstArray[rows][cols];
	int secondArray[rows][cols / 2]{};

	srand(static_cast<unsigned>(time(nullptr)));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			firstArray[i][j] = std::rand() % 51;
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols / 2; j++) {
			secondArray[i][j] = firstArray[i][2 * j] + firstArray[i][2 * j + 1];
		}
	}
	cout << "First array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << firstArray[i][j] << "\t";
		cout << endl;
	}
	cout << "Second array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols / 2; j++)
			cout << secondArray[i][j] << "\t";
		cout << endl;
	}
	return 0;
}
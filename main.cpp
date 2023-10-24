#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int array[rows][cols] = {
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1}
    };

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
            cout << array[i][j] << '\t';
        }
        cout << "|  " << rowSum << endl;
    }

    for (int j = 0; j < cols; j++) {
        cout << "--------";
    }
    cout << endl;

    int totalSum = 0;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += array[i][j];
        }
        cout << colSum << '\t';
        totalSum += colSum;
    }
    cout << "|  " << totalSum << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter a starting number to fill the array: ";
    cin >> size;

    const int rows = 1;
    const int cols = 13;

    int array[rows][cols];

    for (int i = 0; i < cols; i++) {
        array[0][i] = size;
        size++;
    }

    for (int i = 0; i < cols; i++) {
        cout << array[0][i] << " ";
    }

    cout << endl;

    return 0;
}
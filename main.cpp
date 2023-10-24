#include <iostream>
#include <ctime>
#include <string>
using namespace std;

const int rows = 3;
const int cols = 6;
const int maxShiftValue = 1000;

int main() {
    int array[rows][cols];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 10;
        }
    }

    cout << "Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }

    int shifts;
    int direction;

    do {
        cout << "Enter the number of shifts (non-negative, less than " << maxShiftValue << "): ";
        string input;
        cin >> input;
        try {
            shifts = stoi(input);
        }
        catch (const std::invalid_argument& e) {
            shifts = -1;
        }
    } while (shifts < 0 || shifts >= maxShiftValue);

    const string validDirections = "1234";
    do {
        cout << "Enter the direction (1 - left, 2 - right, 3 - up, 4 - down): ";
        string input;
        cin >> input;
        if (input.length() != 1 || validDirections.find(input) == string::npos) {
            direction = -1;
        }
        else {
            direction = stoi(input);
        }
    } while (direction < 1 || direction > 4);

    int temp[rows][cols] = { 0 };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (direction == 1) {
                temp[i][j] = array[i][(j + cols - shifts) % cols];
            }
            else if (direction == 2) {
                temp[i][j] = array[i][(j + shifts) % cols];
            }
            else if (direction == 3) {
                temp[i][j] = array[(i + rows - shifts) % rows][j];
            }
            else if (direction == 4) {
                temp[i][j] = array[(i + shifts) % rows][j];
            }
        }
    }

    cout << "Array after shifts:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << temp[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
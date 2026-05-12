#include <iostream>
using namespace std;
int main() {
    int roll_numbers[4] = {98,75,25,67};
    cout << "Arrays before sorting: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << roll_numbers[i] << " ";
    }
    cout << endl;
    // Bubble sort
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (roll_numbers[j] > roll_numbers[j + 1]) {
                int temp = roll_numbers[j];
                roll_numbers[j] = roll_numbers[j + 1];
                roll_numbers[j + 1] = temp;
            }
        }
    }
    cout << "Arrays after sorting: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << roll_numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[1]);

    // new item to insert
    int newItem = 13;

    // move the existing elements to the right
    for (int i = size - 1; i >= 1; i--) {
        numbers[i] = numbers[i - 1];
    }

    // insert new item
    numbers[1] = newItem;

    // Print the updated array
    cout << "New number array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}

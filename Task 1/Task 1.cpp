// Task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// Task 1 A)
void deleteElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!\n";
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}


// Task 1 B)
void addElementAtTheEnd(int arr[], int& size, int element) {
    arr[size] = element;
    size++;
}


// Task 1 C)
void addElementAtPosition(int arr[], int& size, int element, int index) {
    if (index < 0 || index > size) {
        cout << "Invalid index!\n";
        return;
    }

    for (int i = size; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
}

// Task 1 D)
void changeValueAtIndex(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!\n";
        return;
    }

    arr[index] = newValue;
}


int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int size = 8;

    cout << "Example array: ";
    displayArray(arr, size);

    // Третият елемент на масива ще бъде изтрит.
    cout << "After the first function is executed: ";
    deleteElement(arr, size, 2);
    displayArray(arr, size);

    // В края на масива ще бъде добавено числото 9999
    cout << "After the second function is executed: ";
    addElementAtTheEnd(arr, size, 9999);
    displayArray(arr, size);

    // Числото 33 ще бъде добавено на трета позиция в масива
    cout << "After the third function is executed: ";
    addElementAtPosition(arr, size, 33, 2);
    displayArray(arr, size);

    // Стойността на елемента на шеста позиция ще бъде променена на 666
    cout << "After the forth function is executed: ";
    changeValueAtIndex(arr, size, 5, 666);
    displayArray(arr, size);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


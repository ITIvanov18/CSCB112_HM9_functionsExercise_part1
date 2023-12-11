// Task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;


const int MAX_STUDENTS = 300; // Максимален брой студенти в списъка
int students[MAX_STUDENTS]; // Масив за съхранение на факултетните номера
int numStudents = 0; // Текущ брой студенти в списъка


void addElementAtTheEnd(int arr[], int& size, int element) {
    arr[size] = element;
    size++;
}

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


void addStudent(int studentID) {
    if (numStudents < MAX_STUDENTS) {
        addElementAtTheEnd(students, numStudents, studentID);
        cout << "Student with FNumber " << studentID << " has been added successfully!\n";
    }
    else {
        cout << "The list is full, cannot add more students!\n";
    }
}


void deleteStudent(int studentID) {
    int index = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i] == studentID) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        deleteElement(students, numStudents, index);
         cout << "Student with FNumber " << studentID << " has been deleted.\n";
    }
    else {
         cout << "Student with FNumber " << studentID << " was not found\n";
    }
}


void changeStudentID(int oldID, int newID) {
    int index = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i] == oldID) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        students[index] = newID;
         cout << "Student FNumber has been changed from " << oldID << " to " << newID << ".\n";
    }
    else {
         cout << "Student with FNumber " << oldID << " was not found!\n";
    }
}

void findStudent(int studentID) {
    bool found = false;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i] == studentID) {
            cout << "Student with FNumber " << studentID << " was found at position " << i << ".\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with FNumber " << studentID << " was not found!\n";
    }
}

int main() {
    addStudent(00001);
    addStudent(99999);
    findStudent(99999);
    findStudent(12345); // Студентът НЕ е добавен, търсенето ще се провали.
    changeStudentID(99999, 12345);
    deleteStudent(00001);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


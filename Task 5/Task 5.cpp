// Task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

/*
Задача 5. Съставете С++ функция за изтриване на цифри от подаден
символен низ. Напишете програма, с която да ствате вашата функция.
*/

void deleteDigits(char cstring[], int& n)
{   
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (cstring[i] < '0' || cstring[i] > '9')
        {
            cstring[counter++] = cstring[i];
        }
    }
    n = counter;
}


int main()
{
    char cstring[100];
    int n;
    cout << "Enter string of nunbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cstring[i];
    }
    deleteDigits(cstring, n);
    for (int i = 0; i < n; i++)
    {
        cout << cstring[i];
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

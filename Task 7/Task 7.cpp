// Task 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;


/*
Задача 7. Съставете С++ функция, която намира броя на еднаквите
символи в два подадени от потребителя низа. Напишете програма, с която
да тествате вашата функция. Всички стойности да се задват от потребителя!
*/

void removeSpaces(char str[])
{
    int size = strlen(str);
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}


int findDuplicates(char first[], char second[])
{
    char container[1000] = {};
    int counter = 0;
    int longer, shorter;
    char check;

    if (strlen(first) <= strlen(second))
    {
        check = 's';
        longer = strlen(second);
        shorter = strlen(first);
    }
    else
    {
        check = 'f';
        longer = strlen(first);
        shorter = strlen(second);
    }

    for (int i = 0; i < shorter; i++)
    {
        for (int j = 0; j < longer; j++)
        {
            if ((check == 's' && first[i] == second[j]) || 
                (check == 'f' && second[i] == first[j]))
            {
                bool flag = false;
                for (int l = 0; l < strlen(container); l++)
                {
                    if (first[i] == container[l])
                    {
                        flag = true;
                        break;
                    }
                }
                if (!flag)
                {
                    container[strlen(container)] = first[i];
                    container[strlen(container) + 1] = '\0';
                    counter++;
                    break;
                }
            }
        }
    }

    return counter;
}


int main()
{
    const int max_size = 300;
    char str1[max_size], str2[max_size];

    cout << "Enter the first string: ";
    cin.getline(str1, 300);

    cout << "Enter the second string: ";
    cin.getline(str2, 300);

    removeSpaces(str1);
    removeSpaces(str2);
    cout << "Number of same characters in both strings: " <<findDuplicates(str1, str2);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

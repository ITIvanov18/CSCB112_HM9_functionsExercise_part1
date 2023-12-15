// Task 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


/*
Задача 6. Съставете С++ функция за замяна на всяко срещане на подниз
с посочен от потребителя нов низ в даден низ. Например: Ако имаме следния
низ: "This is a test" и потребителят иска "is" да се замени с "are", ще
получим низа "Thare are a test." Напишете програма, с която да тествате
вашата функция. Всички стойности да се задват от потребителя!
*/

void replaceSubstring(char* str, const char* subStr, const char* newSubstr)
{
    int strLength = strlen(str);
    int oldLength = strlen(subStr);
    int targetLength = strlen(newSubstr);

    for (int i = 0; i < strLength; ++i)
    {
        bool match = true;
        for (int j = 0; j < oldLength; j++)
        {
            if (str[i + j] != subStr[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            for (int k = strLength - 1; k >= i + oldLength; --k)
            {
                str[k + targetLength - oldLength] = str[k];
            }

            for (int k = 0; k < targetLength; ++k)
            {
                str[i + k] = newSubstr[k];
            }

            strLength += targetLength - oldLength;

            i += targetLength - 1;
        }
    }

    for (int i = 0; i < strLength; i++)
    {
        cout << str[i];
    }
}

int main()
{
    const int maxLength = 1000;
    char inputString[maxLength];

    cout << "Enter character string: ";
    cin.getline(inputString, maxLength);

    char oldSubstr[maxLength];
    char newSubstr[maxLength];

    cout << "Enter substring you want to replace: ";
    cin.getline(oldSubstr, maxLength);

    cout << "Enter the replacement: ";
    cin.getline(newSubstr, maxLength);

    replaceSubstring(inputString, oldSubstr, newSubstr);
    cout << "After the replacement the string will look like: " << inputString << endl;


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

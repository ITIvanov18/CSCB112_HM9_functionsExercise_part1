// Task 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

/*
Задача 4. Дефинирайте С++ функция за запълване на двумерен
динамичен масив, която запулва: първия ред от ляво надясно, следващия
ред от дясно наляво, после отново от ляво надясно и т.н.
Напишете програма, с която да ствате вашата функция.
*/

void LeftToRight(int** arr, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < b; j++)
			{
				cin >> arr[i][j];
			}
		}
		else
		{
			for (int j = b - 1; j > -1; j--)
			{
				cin >> arr[i][j];
			}
		}
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	int** arr = new int* [a];
	for (int i = 0; i < b; i++)
	{
		arr[i] = new int[b];
	}
	LeftToRight(arr, a, b);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


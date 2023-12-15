// Task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Задача 3. Дефинирайте С++ функция, чрез която да се изчисли през кои вагони
трябва да се премине, за да се стигне от един вагон с номер n до друг с номер m (n < m). 
Композицията от вагони има следния вид: LBOPKRKSKPMRKKPP, където L - локомотив, 
B - вагон с багаж, O - общ пътнически вагон, P - туристически вагон, K - вагон с купета, 
R - вагон-ресторант. Вагоните за багаж и ресторант нямат номера.
*/

int wagonsToCross(int n, int m) {
    const char composition[] = "LBOPKRKSKPMRKKPP";
    int count = 0;

    for (int i = n; i < m; ++i) {
        if (composition[i] != 'B' && composition[i] != 'R') {
            count++;
        }
    }
    return count;
}

int main() {
    //Общият брой вагони е 16, но тъй като вагоните за багаж и ресторант нямат номера,
    //следователно номерата на вагоните са от 1 до 13

    int start = 1;
    int end = 13;

    int wagons = wagonsToCross(start, end);
    cout << "To reach your destination you need to cross: " << wagons << " wagons." << endl;
    cout << "They start from number " << start << " to " << end << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

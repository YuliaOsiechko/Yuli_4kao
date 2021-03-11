// 2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int get_input() {
    int input;
    cout << "Введіть число: ";
    cin >> input;

    return input;
}

bool is_even(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int sum_of_digs(int num) {
    int sum = 0, temp;

    while (num > 0) {
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }

    return sum;
}

int prod_of_digs(int num) {
    int prod = 1;

    while (num != 0) {
        prod = prod * (num % 10);
        num = num / 10;
    }

    return prod;
}

int main(void) {

    int num = get_input();
    if (is_even(num)) {
        cout << "Добуток цифр: " << prod_of_digs(num) << endl;
    }
    else {
        cout << "Сума цифр: " << sum_of_digs(num) << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
Donyor Hasanov
Sep 3, 2025
Lab 2, operators
*/
#include <iostream>
using namespace std;

int main() {
    cout << "\n------------ example 1: arithmetic operator ----------" << endl;
    // set number format
    cout.setf(ios::fixed);
    cout.precision(3);

    // free_fall = 0.5*gravity*time*time
    const float GRAVITY = 9.8;
    float height = 0, time = 0;

    cout << "Enter a falling time: ";
    cin >> time;

    height = 0.5 * GRAVITY * time * time;
    cout << "The height of a free fall object at " << time << " seconds is "
         << height << " meters " << endl;

    cout << "\n------------ example 2: assignment operator ----------" << endl;
    int number1 = 10;
    int number2 = 3;
    cout << "updated number1 = " << number1 << endl;
    cout << "original number2 = " << number2 << endl;

    number2 += 5;
    cout << "updated number2 by 5 = " << number2 << endl;

    number1 *= 2;
    cout << "updated number1 using *=2 --> " << number1 << endl;

    cout << "The remainder of " << number1 << " and " << number2
         << " is " << number1 % number2 << endl;

    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;

    number1 %= number2;
    cout << "after %=, number1 = " << number1 << endl;
    cout << "after %=, number2 = " << number2 << endl;

    cout << "\n------------ example 3: comparison operator ----------" << endl;
    cout << "is number1 equal to number2? " << (number1 == number2) << endl;
    cout << "is number1 greater than number2? " << (number1 > number2) << endl;
    cout << "is number1 not equal to number2? " << (number1 != number2) << endl;

    cout << "\n------------ example 4: logical operator ----------" << endl;
    bool check_numbers = (number1 != number2) && (number1 < number2) && (number1 > 5);
    cout << "The result of check_number is " << check_numbers << endl;

    bool check_or = (number1 > 10) || (number2 != 3) || (number2 < number1);
    cout << "The result of check_or is " << check_or << endl;

    cout << "\n------------- example 5: casting ----------" << endl;
    int n = 5;
    float m = n / 2.0;  // implicit casting
    cout << "implicit casting = " << m << endl;

    cout << "\n---------- EXERCISE ----------" << endl;

    // Declare variables
    int a, b;

    // Input
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Arithmetic Operations
    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;

    if (b != 0) { // prevent division/modulus by zero
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    } else {
        cout << "Division and modulus by zero are not allowed." << endl;
    }

    // Assignment Operations
    a += 10;  // increment a by 10
    b -= 5;   // decrement b by 5

    cout << "\nAfter assignment operations:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Boolean (Logical) Operations
    cout << "\nBoolean Operations:" << endl;
    cout << "Is a greater than b? " << (a > b ? "true" : "false") << endl;
    cout << "Is a equal to b? " << (a == b ? "true" : "false") << endl;
    cout << "Is a not equal to b? " << (a != b ? "true" : "false") << endl;
    cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
    cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << endl;

    return 0;
}
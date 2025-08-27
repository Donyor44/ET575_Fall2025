/*
Donyor Hasanov
Aug 27, 2025
Lab 1, iostream
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "-------- Example 1: cout data ------" << endl;
    cout << "This is a C++ code" << endl;

    // variables = temporary storage of data
    // declare the variable first 
    string username = "peterpan123";
    cout << "\nWelcome to C++ \t\t" << username << endl;

    cout << "-------- Example 2: cout data -------" << endl;
    cout << "Enter a new username: " << endl;

    cin >> username;
    cout << "New user is " << username << endl;

    cout << "-------- Example 3: cout data -------" << endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout <<"Given symbol = "<<sym<< endl;
    cout <<"Given number ="<<number<< endl;

     cout << "-------- EXERCISE -------" << endl;
     // declare variables

     // collect data

     //print the result



    return 0;
}


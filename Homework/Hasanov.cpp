/*
Homework 1: strings, string methods, and numerical variables
Donyor Hasanov
*/

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

 
    //------ Activity 1 ----

    // Step 1
    string part1 = "Welcome to ";
    string part2 = "New York City";

    // Step 2
    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    // Step 3
    string message = part1 + part2 + " " + name;

    // Step 4
    string concatenatedOutput = message;

    // Step 5
    int msgLen = static_cast<int>(message.length());

    // Step 6
    size_t idx = message.find("ma");
    int idx_ma = (idx == string::npos) ? -1 : static_cast<int>(idx);

    // Step 7
    string replacedMessage = message;
    if (idx_ma != -1) {
        replacedMessage.replace(static_cast<size_t>(idx_ma), 2, "%---%");
    }

    // Step 8 
    cout << "\n------------------------------ RESULT ACTIVITY 1 ----------------------------\n\n";
    cout << "concatenated message:\t" << concatenatedOutput << endl;
    cout << "Message length:\t\t" << msgLen << endl;
    cout << "Index of character 'ma':\t" << idx_ma << endl;
    cout << "Replace 'ma' with %---%:\t" << replacedMessage << endl;


    // ---- Activity 2 ----

    // Step 1
    const float PI = 3.14159f;

    // Step 2
    float radius, height;
    cout << "\nEnter radius (cm): ";
    cin >> radius;
    cout << "Enter height (cm): ";
    cin >> height;

    // Step 3
    bool isRadiusGreater = (radius > height);

    // Step 4
    bool isEqual = (radius == height);

    // Step 5
    height *= 3;     
    radius += 5;     

    // Step 6
    bool condRadiusNeqAndGreater = (radius != height) && (radius > height);

    // Step 7
    float volume = PI * radius * radius * height;

    // Step 8 
    cout << "\n------------------------------ RESULT ACTIVITY 2 ----------------------------\n";
    cout << std::fixed << std::setprecision(1); 

    cout << "Step 3) Is the radius greater than height?\t\t\t" << (isRadiusGreater ? 1 : 0) << endl;
    cout << "Step 4) Is the radius equal to height?\t\t\t\t" << (isEqual ? 1 : 0) << endl;
    cout << "Step 5) Triple height =\t\t\t\t\t\t" << height << "cm" << endl;
    cout << "Step 5) Increased radius by 5 =\t\t\t\t\t" << radius << "cm" << endl;
    cout << "Step 6) Is the radius not equal to and greater than height ?\t" << (condRadiusNeqAndGreater ? 1 : 0) << endl;
    cout << "Step 7) The volume of a right cylinder with radius " << radius
         << "cm and height " << height << "cm is = " << volume << "cm^3" << endl;

    return 0;
}